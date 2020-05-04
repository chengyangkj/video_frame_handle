#-------------------------------------------------
#
# Project created by QtCreator 2020-05-03T16:01:02
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = video_handel
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
    frame_handle_form.cpp \
    satellite_video.cpp

HEADERS += \
    frame_handle_form.h \
    satellite_video.h

FORMS += \
    frame_handle_form.ui \
    satellite_video.ui \
    frame_handle_form.ui \
    satellite_video.ui



INCLUDEPATH += $$(OPENCV13.6_Mingw_cv2_32)/include

LIBS += -L$$(OPENCV13.6_Mingw_cv2_32)/x86/mingw/lib \
     -lopencv_highgui410 \
     -lopencv_video410 \
     -lopencv_videoio410 \
     -lopencv_calib3d410 \
     -lopencv_dnn410 \
     -lopencv_features2d410 \
     -lopencv_imgcodecs410 \
     -lopencv_imgproc410 \
     -lopencv_ml410 \
     -lopencv_objdetect410 \
     -lopencv_stitching410 \
     -lopencv_flann410 \
     -lopencv_core410 \
     -lopencv_gapi410 \
     -lopencv_photo410 \

RESOURCES += \
    image.qrc



