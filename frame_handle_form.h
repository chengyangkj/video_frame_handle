#ifndef FRAME_HANDLE_FORM_H
#define FRAME_HANDLE_FORM_H

#include <QWidget>
#include <QDebug>
#include <QThreadPool>
#include <QProgressBar>
#include <QThread>
#include <QDebug>
#include <string.h>
#include <QFileDialog>
#include <QFile>
#include <QMessageBox>
#include <opencv2/opencv.hpp>
#include <QLineEdit>
#include <QRunnable>
#include <QFile>
#include <QDir>
#include <QLabel>
#include <QFileDialog>
#include <QStringList>
#include <QProcess>
#include <QCloseEvent>
#include <QObject>
using namespace cv;
namespace Ui {
class Frame_Handle_Form;
}

class Frame_Handle_Form : public QWidget
{
    Q_OBJECT

public:
    explicit Frame_Handle_Form(QString path,QWidget *parent = 0);
    ~Frame_Handle_Form();
    QLineEdit *mode1_text1;
    QLineEdit *mode1_text2;
    QLineEdit *mode3_text;
    QString Video_Path;
    QLabel *label_msg;
    VideoCapture capture;

    int mode=-1;
protected:
     void closeEvent(QCloseEvent *event);
private slots:
    void  mode_switch();
    void on_mode3_time_btn_clicked();
    void on_mode1_start_btn_clicked();
    void on_mode1_stop_btn_clicked();
    void on_mode1_ok_btn_clicked();
    void on_mode2_ok_btn_clicked();
    void on_mode1_path_btn_clicked();

    void on_mode2_path_btn_clicked();

    void on_mode3_path_btn_clicked();

    void on_mode4_imgpath_btn_clicked();

    void on_mode4_path_btn_clicked();

    void on_mode3_ok_btn_clicked();

    void on_mode4_ok_btn_clicked();

    void on_mode4_empty_btn_clicked();

    void on_mode2_empty_btn_clicked();

    void on_mode3_empty_btn_clicked();

    void on_mode1_empty_btn_clicked();
    void slot_handle1_process(int);
    void slot_handle2_process(int);
    void slot_handle3_process(int);
    void slot_handle4_process(int);
    void slot_handle_msg(QString);
private:
    Ui::Frame_Handle_Form *ui;
    QThreadPool pool;
signals:
     void choosed();
};

//模式1的handle类
class Model1 : public QObject, public QRunnable
{
 Q_OBJECT
public:
    Model1 (QString path,QString save_path,QString img_nam,QString img_l,double starttime,double stoptime)
    {
        this->path=path;
        this->save_path=save_path;
        this->starttime=starttime;
        this->stoptime=stoptime;
        this->img_nam=img_nam;
        this->img_len=img_l.toInt();

    }
signals:
    void handle1_process(int);
private:
    QString path;
    int img_len;
    QString img_nam;
    QString save_path;
    QProgressBar *bar;
    bool *is_stop;
    double starttime;
    double stoptime;
    VideoCapture capture;
    void run();
};
//模式2的handle类
class Model2 : public QObject, public QRunnable
{
     Q_OBJECT
public:
    Model2 (QString path,QString save_path,QString img_nam,QString img_l,double intevel_time)
    {
        this->path=path;
        this->savepath=save_path;
        this->splittime=intevel_time;
        this->img_nam=img_nam;
         this->img_len=img_l.toInt();
    }
signals:
    void handel2_process(int);

private:
    QString path;
    QString savepath;
    QString img_nam;
    double splittime;
    int img_len;
    void run();
};
//模式4的handle类
class Model4 :public QObject, public QRunnable
{
     Q_OBJECT
public:
    Model4 (QStringList list)
    {
        this->path=list[0];
        this->savepath=list[1];
        this->rate=list[2];
    }
signals:
    void handle4_process(int);
    void handle_msg(QString);
private:
    QString path;
    QString savepath;
    QProgressBar *bar;
    QLabel *label_msg;
    QString th;
    QDir dir;
    QString rate;
    QString img_name;
    QStringList img_list;
    double splittime;
    QStringList nameFilters;
    QProcess po;
    void run();
};
#endif // FRAME_HANDLE_FORM_H







