#include "frame_handle_form.h"
#include "ui_frame_handle_form.h"
#include <exception>
Frame_Handle_Form::Frame_Handle_Form(QString path,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Frame_Handle_Form)
{
    ui->setupUi(this);
     ui->stackedWidget->setCurrentIndex(0);
     mode1_text1=ui->mode1_start_text;
     mode1_text2=ui->mode1_stop_text;
     mode3_text=ui->mode3_time_text;
     label_msg=ui->label_msg;
    //连接相关槽函数
    connect(ui->mode1_btn,SIGNAL(clicked(bool)),
            this,SLOT(mode_switch()));
    connect(ui->mode2_btn,SIGNAL(clicked(bool)),
            this,SLOT(mode_switch()));
    connect(ui->mode3_btn,SIGNAL(clicked(bool)),
            this,SLOT(mode_switch()));
    connect(ui->mode4_btn,SIGNAL(clicked(bool)),
            this,SLOT(mode_switch()));



    ui->progressBar1->setVisible(false);
    ui->progressBar_2->setVisible(false);
    ui->progressBar_3->setVisible(false);
    ui->progressBar_4->setVisible(false);
    Video_Path=path;

}


void Frame_Handle_Form::on_mode3_time_btn_clicked()
{
    //截取单帧
    ui->label_msg->setText("请在卫星影像处理窗体上选择帧的位置");
    this->mode=3;
    emit choosed();
}
void Frame_Handle_Form::closeEvent(QCloseEvent *event)
{

}
void Frame_Handle_Form::on_mode1_start_btn_clicked()
{
    //自定义拆帧
    ui->label_msg->setText("请在卫星影像处理窗体上开始时刻");
    //this->hide();
    this->mode=1;
    emit choosed();
}

void Frame_Handle_Form::on_mode1_stop_btn_clicked()
{
    //自定义拆帧
    ui->label_msg->setText("请在卫星影像处理窗体上选择结束时刻");
    this->mode=2;
    emit choosed();
}
void Frame_Handle_Form::on_mode1_path_btn_clicked()
{
    //模式1的浏览按钮
    QString file_path = QFileDialog::getExistingDirectory(this, "请选择文件保存路径...", "./");
    if(file_path.isEmpty())
    {
        return;
    }
    else{
        ui->mode1_path_text->setText(file_path);
    }
}

void Frame_Handle_Form::on_mode2_path_btn_clicked()
{
    //模式2的浏览按钮
    QString file_path = QFileDialog::getExistingDirectory(this, "请选择文件保存路径...", "./");
    if(file_path.isEmpty())
    {
        return;
    }
    else{
        ui->mode2_path_text->setText(file_path);
    }
}
void Frame_Handle_Form::on_mode3_path_btn_clicked()
{
    //模式3的浏览按钮
    QString reSave_path = QFileDialog::getSaveFileName(this,tr("保存为"),"","(*.jpg);;(*.png);;(*.bmp)"); //选择路径
       ui->mode3_path_text->setText(reSave_path);


}

void Frame_Handle_Form::on_mode4_imgpath_btn_clicked()
{
    //模式4的图片位置浏览按钮
    QString file_path = QFileDialog::getExistingDirectory(this, "请选择图片帧保存路径...", "./");
    if(file_path.isEmpty())
    {
        return;
    }
    else{
        ui->mode4_imgpath_text->setText(file_path);
    }
}
void Frame_Handle_Form::on_mode4_path_btn_clicked()
{
    //模式4的视频位置浏览按钮
    QString file_name = QFileDialog::getSaveFileName(this,tr("选择保存视频文件名"),".",
                                                tr("(*.avi);;(*.mp4);;"));


    ui->mode4_path_text->setText(file_name);
    QFile file(file_name);

}

void Frame_Handle_Form::on_mode1_ok_btn_clicked()
{
       VideoCapture capture;
       capture.open(Video_Path.toStdString());
       double FrameNumber = capture.get(7);
        double rate = capture.get(5);
        double duration = (FrameNumber/rate)*1000;


        bool ok1;
        double start_time=ui->mode1_start_text->text().toDouble(&ok1);
        bool ok2;
        double stop_time=ui->mode1_stop_text->text().toDouble(&ok2); //ok=true;d;12.3456.
        if(!ok1){
          QMessageBox::critical(NULL, "错误", "开始时刻输入不合法！", QMessageBox::Yes, QMessageBox::Yes);
        }
        else if(!ok2)
        {
           QMessageBox::critical(NULL, "错误", "结束时刻输入不合法！", QMessageBox::Yes, QMessageBox::Yes);
        }
        else if(stop_time>duration||start_time>duration){
            QMessageBox::critical(NULL, "错误", "输入时刻超范围！", QMessageBox::Yes, QMessageBox::Yes);
        }
        else if(stop_time-start_time<=0)
        {
          QMessageBox::critical(NULL, "错误", "结束时刻必须大于开始时刻！", QMessageBox::Yes, QMessageBox::Yes);
        }
        else if(ui->mode1_path_text->text()=="")
        {
          QMessageBox::critical(NULL, "错误", "输出目录为空！", QMessageBox::Yes, QMessageBox::Yes);
        }
        else {
            //查看有没有目录,没有创建
             QDir* dir = new QDir(ui->mode1_path_text->text());
            if(!dir->exists()){
                dir->mkpath(ui->mode1_path_text->text());
            }
            //自定义确定点击
            ui->progressBar1->setValue(0);
            ui->progressBar1->setVisible(true);
            Model1 *m1_task = new Model1(Video_Path,ui->mode1_path_text->text(),ui->mode1_comboBox->currentText(),ui->mode1_spinBox->text(), ui->mode1_start_text->text().toDouble(),
                                        ui->mode1_stop_text->text().toDouble());
            connect(m1_task,SIGNAL(handle1_process(int)),this,SLOT(slot_handle1_process(int)));
            pool.start(m1_task);

        }

}

void Frame_Handle_Form::on_mode2_ok_btn_clicked()
{  //等时长拆帧确定按钮点击事件


    bool ok;
    double time_inter;
    time_inter=ui->mode2_time_text->text().toDouble(&ok); //ok=true;d;12.3456.
    if(!ok){
      QMessageBox::critical(NULL, "错误", "请输入正确的间隔时间！", QMessageBox::Yes, QMessageBox::Yes);
    }
    else if(ui->mode2_path_text->text()=="")
    {
        QMessageBox::critical(NULL, "错误", "输出目录为空！", QMessageBox::Yes, QMessageBox::Yes);
    }
    else {
        //查看有没有目录,没有创建
        QDir* dir = new QDir(ui->mode2_path_text->text());
        if(!dir->exists()){
            dir->mkpath(ui->mode2_path_text->text());
        }
        ui->progressBar_2->setValue(0);
        ui->progressBar_2->setVisible(true);
       Model2 *m2_task = new Model2(Video_Path,ui->mode2_path_text->text(),ui->mode2_comboBox->currentText(),ui->mode2_spinBox_2->text(),
                                    time_inter);
      connect(m2_task,SIGNAL(handel2_process(int)),this,SLOT(slot_handle2_process(int)));
       pool.start(m2_task);
    }

}


void Frame_Handle_Form::on_mode3_ok_btn_clicked()
{
    //截取单帧保存按钮
    capture.open(Video_Path.toStdString());
    capture.set(1,ui->mode3_time_text->text().toInt());
    Mat frame;
    capture.read(frame);
    ui->progressBar_3->setVisible(true);
    ui->progressBar_3->setValue(0);
    imwrite(ui->mode3_path_text->text().toStdString(),frame);
    ui->progressBar_3->setValue(100);
    ui->progressBar_3->setVisible(false);
    ui->label_msg->setText("处理结束！图片帧保存位置:"+ui->mode3_path_text->text());
}
void Frame_Handle_Form::on_mode4_ok_btn_clicked()
{
    bool ok;
    bool ok2;
    double rate=ui->mode4_rate_text->text().toDouble(&ok); //ok=true;d;12.3456.
    if(!ok){
      QMessageBox::critical(NULL, "错误", "请输入正确的帧率！", QMessageBox::Yes, QMessageBox::Yes);
    }
    else if(ui->mode4_imgpath_text->text()=="")
    {
       QMessageBox::critical(NULL, "错误", "输入目录为空！", QMessageBox::Yes, QMessageBox::Yes);
    }
    else if(ui->mode4_path_text->text()==""){
        QMessageBox::critical(NULL, "错误", "输出目录为空！", QMessageBox::Yes, QMessageBox::Yes);
    }
    else{
        QStringList li;

        QString img_name = ui->mode4_imgpath_text->text()+"/"+ui->lineEdit_mask->text();
         li.append(img_name);
        li.append(ui->mode4_path_text->text());
        li.append(ui->mode4_rate_text->text());
        //帧合成视频确定按钮
        Model4 *m4_task = new Model4(li);
        ui->progressBar_4->setVisible(true);
        ui->progressBar_4->setValue(0);
        connect(m4_task,SIGNAL(handle4_process(int)),this,SLOT(slot_handle4_process(int)));
        connect(m4_task,SIGNAL(handle_msg(QString)),this,SLOT(slot_handle_msg(QString)));
        pool.start(m4_task);
    }

}
void Frame_Handle_Form::slot_handle_msg(QString msg)
{
  ui->label_msg->setText(msg);
}

void Frame_Handle_Form::slot_handle1_process(int value)
{
    if(value==101)
    {
        ui->label_msg->setText("处理结束！图片帧保存位置:"+ui->mode1_path_text->text());
        ui->progressBar1->setVisible(false);
    }
    else{
        ui->progressBar1->setValue(value);
    }
}
void Frame_Handle_Form::slot_handle2_process(int value)
{
    if(value==101)
    {
        ui->label_msg->setText("处理结束！图片帧保存位置:"+ui->mode2_path_text->text());
        ui->progressBar_2->setVisible(false);
    }
    else{
        ui->progressBar_2->setValue(value);
    }
}
void Frame_Handle_Form::slot_handle3_process(int value)
{

}
void Frame_Handle_Form::slot_handle4_process(int value)
{
    qDebug()<<value;
    if(value==101)
    {
        ui->progressBar_4->setVisible(false);
        ui->label_msg->setText("合成完毕!视频保存位置:"+ui->mode4_path_text->text());
    }
    else{
        ui->progressBar_4->setValue(value);
    }
}
Frame_Handle_Form::~Frame_Handle_Form()
{
    delete ui;
}
void Frame_Handle_Form::mode_switch(){
    // 获取发送信号的对象存放到 QObject 基类对象中
       QObject* obj = sender();
       // 把基类对象强制转换成子类对象
       QPushButton* button = dynamic_cast<QPushButton*>(obj);
       // 获取子类对象文本可以判断出是点了哪个按钮

      QString text =  button->text();
      if (text=="自定义拆帧"){
          ui->stackedWidget->setCurrentIndex(0);
      }
      else if(text=="等长拆帧"){
           ui->stackedWidget->setCurrentIndex(1);
      }
      else if(text=="截取单帧"){
           ui->stackedWidget->setCurrentIndex(2);
      }
      else if(text=="视频合成"){
           ui->stackedWidget->setCurrentIndex(3);
      }


}

void Model1::run()
{
        // 总长，以毫秒计
        double total = stoptime - starttime;
        // 处理帧

        capture.open(path.toStdString());
        Mat image;// 定义一个Mat，用来接收一帧的图像
        capture.read(image);

        VideoWriter writer;
        // 读取视频帧
        capture.set(0, starttime);
        // 当前所看时长，以毫秒计

        while (capture.read(image)) {

            double time =capture.get(0);
            double curr = (double) (time-starttime);
            // 百分比，并强转为 float
            int percent = (curr / total)*100;
            emit handle1_process(percent);

            if (time >= stoptime) {
                break;
            }
            int name_i=capture.get(1);
            QString name=QString("%1").arg(name_i,  img_len,10, QChar('0'));
            imwrite(save_path.toStdString() + "/" +name.toStdString()  + img_nam.toStdString(), image);
        }
        emit handle1_process(101);

}
void Model2::run(){
    VideoCapture capture;
    capture.open(path.toStdString());
    long starttime = 0;
    long stoptime = (long) capture.get(7);
    long total = stoptime - starttime;
    Mat image;// 定义一个Mat，用来接收一帧的图像
    capture.read(image);
    VideoWriter writer;
    // 读取视频帧
    capture.set(0, starttime);
    // 当前所看时长，以毫秒计
    //long time_flag = 0;
    long flag = 0;
    QString savepath2 = savepath + "/" + QString::number(flag);
    QDir* dir = new QDir();
    if(!dir->exists(savepath2)){
        dir->mkpath(savepath2);
    }
    while (capture.read(image)) {
        double time = capture.get(0);
        long curr = (long) capture.get(1);
        double currs = curr;
        // 百分比，并强转为 float
        int percent = (currs / total)*100;
        emit handel2_process(percent);
        //qDebug()<<"当前时间："+QString::number(time);

        int name_i=curr;
        QString name=QString("%1").arg(name_i, img_len,10, QChar('0'));

        imwrite(savepath2.toStdString() + "/" +name.toStdString() + img_nam.toStdString(), image);

        if (int(time) % int(splittime) == 0) {
            savepath2 = savepath + "/" + QString::number(flag);
            //如果路径不存在，则创建
            QDir* dir = new QDir();
            if(!dir->exists(savepath2)){
                dir->mkpath(savepath2);
            }
            flag++;
        }
        //qDebug()<<savepath2 + "/" +QString::number(time) + ".jpg";

    }
    emit handel2_process(101);
}
void Model4::run()
{

    VideoCapture sequence;
//    qDebug()<<path;
    sequence.open(path.toStdString());
    Mat src;
    if (!sequence.isOpened())
      {
        emit handle_msg("初始化失败!图像不存在");
        return;
//          qDebug() << "Failed to open the image sequence or a camera device of " << endl;
      }
    double sum=sequence.get(7);
    // get one frame from camera to know frame size and type
    sequence >> src;
    if (src.empty()) {
           emit handle_msg("初始化失败!图像不存在");
        return;
//        qDebug()<< "ERROR! blank frame grabbed\n";
        }
    bool isColor = (src.type() == CV_8UC3);
    VideoWriter writer;
     // int codec = VideoWriter::fourcc('M', 'J', 'P', 'G');  // select desired codec (must be available at runtime)
    int codec = VideoWriter::fourcc('m', 'p', '4', 'v');
    double fps = stoi(rate.toStdString());
    writer.open(savepath.toStdString(), codec, fps, src.size(), isColor);
   if (!writer.isOpened()) {
        emit handle_msg("初始化videowriter失败！编码不支持");
        return;
     }
    char cvKey;


    while (sequence.read(src))
    {
        double curr=sequence.get(1);
        qDebug()<<"cuur"<<curr<<"sum"<<sum;
        double percent=(curr/sum)*100;
        emit handle4_process(percent);
        writer.write(src);

    }
    emit handle4_process(101);
    writer.release();

}

void Frame_Handle_Form::on_mode4_empty_btn_clicked()
{
   ui->mode4_path_text->setText("");
   ui->mode4_rate_text->setText("");
   ui->mode4_imgpath_text->setText("");
}

void Frame_Handle_Form::on_mode2_empty_btn_clicked()
{
    ui->mode2_path_text->setText("");
    ui->mode2_time_text->setText("");
}

void Frame_Handle_Form::on_mode3_empty_btn_clicked()
{
    ui->mode3_path_text->setText("");
    ui->mode3_time_text->setText("");
}

void Frame_Handle_Form::on_mode1_empty_btn_clicked()
{
    ui->mode1_start_text->setText("");
    ui->mode1_stop_text->setText("");
    ui->mode1_path_text->setText("");
}
