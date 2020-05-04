
#include "satellite_video.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    satellite_video video_frme;
    video_frme.show();

    return a.exec();
}
