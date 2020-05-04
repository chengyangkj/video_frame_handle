/********************************************************************************
** Form generated from reading UI file 'satellite_video.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SATELLITE_VIDEO_H
#define UI_SATELLITE_VIDEO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_satellite_video
{
public:
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLabel *label_pos_3;
    QLabel *label_6;
    QLabel *label_total_3;
    QLabel *video_label;
    QSlider *slider;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *open_btn;
    QSpacerItem *horizontalSpacer;
    QPushButton *choose_btn;
    QPushButton *frame_handle_btn;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *label_pos;
    QLabel *label;
    QLabel *label_total;

    void setupUi(QWidget *satellite_video)
    {
        if (satellite_video->objectName().isEmpty())
            satellite_video->setObjectName(QStringLiteral("satellite_video"));
        satellite_video->resize(621, 495);
        satellite_video->setMinimumSize(QSize(621, 495));
        satellite_video->setMaximumSize(QSize(621, 495));
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        satellite_video->setWindowIcon(icon);
        layoutWidget_2 = new QWidget(satellite_video);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 350, 181, 25));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_4->addWidget(label_5);

        label_pos_3 = new QLabel(layoutWidget_2);
        label_pos_3->setObjectName(QStringLiteral("label_pos_3"));

        horizontalLayout_4->addWidget(label_pos_3);

        label_6 = new QLabel(layoutWidget_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_4->addWidget(label_6);

        label_total_3 = new QLabel(layoutWidget_2);
        label_total_3->setObjectName(QStringLiteral("label_total_3"));

        horizontalLayout_4->addWidget(label_total_3);

        video_label = new QLabel(satellite_video);
        video_label->setObjectName(QStringLiteral("video_label"));
        video_label->setGeometry(QRect(10, 10, 601, 331));
        video_label->setStyleSheet(QLatin1String("background:rgb(225, 225, 225);\n"
"font-size: 30px;\n"
""));
        slider = new QSlider(satellite_video);
        slider->setObjectName(QStringLiteral("slider"));
        slider->setGeometry(QRect(10, 390, 601, 20));
        slider->setStyleSheet(QStringLiteral(""));
        slider->setOrientation(Qt::Horizontal);
        layoutWidget = new QWidget(satellite_video);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 430, 601, 33));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        open_btn = new QPushButton(layoutWidget);
        open_btn->setObjectName(QStringLiteral("open_btn"));

        horizontalLayout->addWidget(open_btn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        choose_btn = new QPushButton(layoutWidget);
        choose_btn->setObjectName(QStringLiteral("choose_btn"));
        choose_btn->setStyleSheet(QStringLiteral("color:rgb(239, 41, 41)"));

        horizontalLayout->addWidget(choose_btn);

        frame_handle_btn = new QPushButton(layoutWidget);
        frame_handle_btn->setObjectName(QStringLiteral("frame_handle_btn"));

        horizontalLayout->addWidget(frame_handle_btn);

        layoutWidget_3 = new QWidget(satellite_video);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(430, 350, 181, 25));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget_3);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        label_pos = new QLabel(layoutWidget_3);
        label_pos->setObjectName(QStringLiteral("label_pos"));

        horizontalLayout_2->addWidget(label_pos);

        label = new QLabel(layoutWidget_3);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        label_total = new QLabel(layoutWidget_3);
        label_total->setObjectName(QStringLiteral("label_total"));

        horizontalLayout_2->addWidget(label_total);


        retranslateUi(satellite_video);

        QMetaObject::connectSlotsByName(satellite_video);
    } // setupUi

    void retranslateUi(QWidget *satellite_video)
    {
        satellite_video->setWindowTitle(QApplication::translate("satellite_video", "\350\247\206\351\242\221\345\270\247\345\244\204\347\220\206\357\274\210powered by chengyangkj\357\274\211", Q_NULLPTR));
        label_5->setText(QApplication::translate("satellite_video", "\346\227\266\345\210\273:", Q_NULLPTR));
        label_pos_3->setText(QApplication::translate("satellite_video", "0", Q_NULLPTR));
        label_6->setText(QApplication::translate("satellite_video", "/", Q_NULLPTR));
        label_total_3->setText(QApplication::translate("satellite_video", "0", Q_NULLPTR));
        video_label->setText(QApplication::translate("satellite_video", "NO VIDEO", Q_NULLPTR));
        open_btn->setText(QApplication::translate("satellite_video", "\346\211\223\345\274\200\350\247\206\351\242\221", Q_NULLPTR));
        choose_btn->setText(QApplication::translate("satellite_video", "\351\200\211\346\213\251\346\255\244\345\244\204", Q_NULLPTR));
        frame_handle_btn->setText(QApplication::translate("satellite_video", "\345\270\247\345\244\204\347\220\206", Q_NULLPTR));
        label_2->setText(QApplication::translate("satellite_video", "\345\270\247:", Q_NULLPTR));
        label_pos->setText(QApplication::translate("satellite_video", "0", Q_NULLPTR));
        label->setText(QApplication::translate("satellite_video", "/", Q_NULLPTR));
        label_total->setText(QApplication::translate("satellite_video", "0", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class satellite_video: public Ui_satellite_video {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SATELLITE_VIDEO_H
