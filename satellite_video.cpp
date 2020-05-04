#include "satellite_video.h"
#include "ui_satellite_video.h"
#include <QDesktopWidget>
satellite_video::satellite_video(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::satellite_video)
{
    ui->setupUi(this);
    ui->slider->setEnabled(false);
    ui->frame_handle_btn->setEnabled(false);
    ui->choose_btn->setEnabled(false);
    ui->choose_btn->setVisible(false);


}

satellite_video::~satellite_video()
{
    delete ui;
}
void satellite_video::closeEvent(QCloseEvent *event)
{
    if(frame_hanle_from!=NULL)
    {
        frame_hanle_from->close();
    }
}
void satellite_video::on_open_btn_clicked()
{
    /*打开视频按钮槽函数*/
    //选择视频文件
       file_name = QFileDialog::getOpenFileName(this,tr("选择视频文件"),".",
                                                       tr("视频格式(*.avi *.mp4 *.flv *.mkv)"));
       QFile file(file_name);
       if(!file.open(QIODevice::ReadOnly))
       {

           return;
       }
       else{
            capture=new VideoCapture();
             ui->slider->setEnabled(true);
             try {
               capture->open(file_name.toStdString());
               capture->read(frame);
               //qDebug()<<capture.get(7);
               double FrameNumber = capture->get(7);
                double rate = capture->get(5);
                double duration = FrameNumber/rate;
                if(duration*1000==0||capture==NULL)
                {
                    ui->slider->setEnabled(false);
                    ui->label_total->setText("0");
                     ui->label_pos_3->setText("0");
                    ui->label_total_3->setText("0");
                    ui->frame_handle_btn->setEnabled(false);
                    ui->choose_btn->setEnabled(false);
                   QMessageBox::critical(NULL, "错误", "打开的视频格式错误！", QMessageBox::Yes, QMessageBox::Yes);
                   return;
                }
               ui->slider->setRange(0,FrameNumber-1);
               ui->label_total->setText(QString::number(FrameNumber-1));
                ui->label_pos_3->setText(QString::number(capture->get(0)));
               ui->label_total_3->setText(QString::number(duration*1000));
               ui->frame_handle_btn->setEnabled(true);
               ui->choose_btn->setEnabled(true);
               show_img(frame,ui->video_label);
             } catch (Exception) {
                 ui->slider->setEnabled(false);
                 ui->label_total->setText("0");
                 ui->label_pos_3->setText("0");
                 ui->label_total_3->setText("0");
                 ui->frame_handle_btn->setEnabled(false);
                 ui->choose_btn->setEnabled(false);
                  QMessageBox::critical(NULL, "错误", "打开的视频格式错误！", QMessageBox::Yes, QMessageBox::Yes);
                  return;
             }




       }
}
void satellite_video::on_frame_handle_form_chossed()
{
    ui->choose_btn->setVisible(true);

}
void satellite_video::on_frame_handle_btn_clicked()
{
    if(frame_hanle_from==NULL){
        frame_hanle_from = new Frame_Handle_Form(file_name);
        connect(frame_hanle_from,SIGNAL(choosed()),this,SLOT(on_frame_handle_form_chossed()));
        qDebug()<<frame_hanle_from->rect().center();
        frame_hanle_from->move(QApplication::desktop()->screen()->rect().center() - frame_hanle_from->rect().center()-QPoint(frame_hanle_from->width()/2,frame_hanle_from->height()/2));
        frame_hanle_from->show();
         frame_hanle_from->Video_Path=file_name;
    }
    else{
        frame_hanle_from->show();
        frame_hanle_from->Video_Path=file_name;
    }
//    帧处理按钮的槽函数
}
void satellite_video::show_img(Mat image,QLabel *label){

//    在label上显示opencv图片
    cv::cvtColor(image,image,CV_BGR2RGB);
    QImage img = QImage((const unsigned char*)(image.data),image.cols,image.rows,
                        image.cols*image.channels(),
                        QImage::Format_RGB888).scaled(label->width(), label->height());

    label->clear();
    label->setPixmap(QPixmap::fromImage(img));
              //ui->processPushButton->setEnabled(true);

}
void satellite_video::on_choose_btn_clicked()
{
    if(frame_hanle_from==NULL){
        frame_hanle_from = new Frame_Handle_Form(file_name);
        connect(frame_hanle_from,SIGNAL(choosed()),this,SLOT(on_frame_handle_form_chossed()));
        frame_hanle_from->show();
         ui->choose_btn->setVisible(true);
         frame_hanle_from->Video_Path=file_name;
         frame_hanle_from->mode=1;
    }
    else{
        frame_hanle_from->show();
        frame_hanle_from->Video_Path=file_name;
    }
    switch(frame_hanle_from->mode){
    case 1:
        frame_hanle_from->mode1_text1->setText(ui->label_pos_3->text());
        frame_hanle_from->label_msg->setText("");
        frame_hanle_from->show();
        break;
    case 2:
        frame_hanle_from->mode1_text2->setText(ui->label_pos_3->text());
        frame_hanle_from->label_msg->setText("");
        frame_hanle_from->show();
        break;
    case 3:
        frame_hanle_from->mode3_text->setText(ui->label_pos->text());
        frame_hanle_from->label_msg->setText("");
        frame_hanle_from->show();
        break;
    }
   //frame_hanle_from->setWindowFlags(Qt::WindowStaysOnTopHint);
   ui->choose_btn->setVisible(false);

}

void satellite_video::on_slider_sliderMoved(int position)
{
    capture->set(1,position);
    capture->read(frame);
    show_img(frame,ui->video_label);
    ui->label_pos->setText(QString::number(position));
    ui->label_pos_3->setText(QString::number(capture->get(0)));
}
