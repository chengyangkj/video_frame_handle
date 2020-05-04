#ifndef SATELLITE_VIDEO_H
#define SATELLITE_VIDEO_H

#include <QWidget>
#include <QThreadPool>
#include <QProgressBar>
#include <QThread>
#include <QDebug>
#include <string.h>
#include <QFileDialog>
#include <QFile>
#include <QMessageBox>
#include <QSlider>
#include <opencv2/opencv.hpp>
#include <opencv2/imgproc/types_c.h>
#include <frame_handle_form.h>
#include <QCloseEvent>
#include <QPushButton>
namespace Ui {
class satellite_video;
}
using namespace cv;
class satellite_video : public QWidget
{
    Q_OBJECT

public:
    explicit satellite_video(QWidget *parent = nullptr);
    ~satellite_video();
protected:
     void closeEvent(QCloseEvent *event);
private slots:
    void on_open_btn_clicked();

    void on_frame_handle_btn_clicked();

    void on_choose_btn_clicked();

    void on_slider_sliderMoved(int position);
    void on_frame_handle_form_chossed();
private:
    Ui::satellite_video *ui;
    Frame_Handle_Form *frame_hanle_from=NULL;
     QString file_name;
     VideoCapture *capture=NULL;
     void show_img(Mat src,QLabel *label);
     Mat frame;
};

#endif // SATELLITE_VIDEO_H
