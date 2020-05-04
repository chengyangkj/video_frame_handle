/********************************************************************************
** Form generated from reading UI file 'frame_handle_form.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRAME_HANDLE_FORM_H
#define UI_FRAME_HANDLE_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Frame_Handle_Form
{
public:
    QLabel *label_msg;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout;
    QPushButton *mode1_btn;
    QPushButton *mode2_btn;
    QPushButton *mode3_btn;
    QPushButton *mode4_btn;
    QVBoxLayout *verticalLayout_4;
    QStackedWidget *stackedWidget;
    QWidget *page_0;
    QGroupBox *groupBox_1;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *mode1_start_text;
    QSpacerItem *horizontalSpacer_14;
    QPushButton *mode1_start_btn;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *mode1_stop_text;
    QSpacerItem *horizontalSpacer_15;
    QPushButton *mode1_stop_btn;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *mode1_path_text;
    QPushButton *mode1_path_btn;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_15;
    QComboBox *mode1_comboBox;
    QLabel *label_17;
    QSpinBox *mode1_spinBox;
    QSpacerItem *horizontalSpacer_20;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *mode1_ok_btn;
    QSpacerItem *horizontalSpacer;
    QPushButton *mode1_empty_btn;
    QSpacerItem *horizontalSpacer_3;
    QProgressBar *progressBar1;
    QWidget *page_1;
    QGroupBox *groupBox_3;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_4;
    QLineEdit *mode2_time_text;
    QSpacerItem *horizontalSpacer_13;
    QPushButton *pushButton_14;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_5;
    QLineEdit *mode2_path_text;
    QPushButton *mode2_path_btn;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_16;
    QComboBox *mode2_comboBox;
    QLabel *label_18;
    QSpinBox *mode2_spinBox_2;
    QSpacerItem *horizontalSpacer_21;
    QHBoxLayout *horizontalLayout_17;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *mode2_ok_btn;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *mode2_empty_btn;
    QSpacerItem *horizontalSpacer_6;
    QProgressBar *progressBar_2;
    QWidget *page_2;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QLineEdit *mode3_time_text;
    QSpacerItem *horizontalSpacer_18;
    QPushButton *mode3_time_btn;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QLineEdit *mode3_path_text;
    QPushButton *mode3_path_btn;
    QHBoxLayout *horizontalLayout_19;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *mode3_ok_btn;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *mode3_empty_btn;
    QSpacerItem *horizontalSpacer_12;
    QProgressBar *progressBar_3;
    QWidget *page_3;
    QGroupBox *groupBox_4;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_8;
    QLineEdit *mode4_imgpath_text;
    QPushButton *mode4_imgpath_btn;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_12;
    QLineEdit *lineEdit_mask;
    QSpacerItem *horizontalSpacer_19;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_9;
    QLineEdit *mode4_rate_text;
    QSpacerItem *horizontalSpacer_17;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_10;
    QLineEdit *mode4_path_text;
    QPushButton *mode4_path_btn;
    QHBoxLayout *horizontalLayout_18;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *mode4_ok_btn;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *mode4_empty_btn;
    QSpacerItem *horizontalSpacer_9;
    QProgressBar *progressBar_4;

    void setupUi(QWidget *Frame_Handle_Form)
    {
        if (Frame_Handle_Form->objectName().isEmpty())
            Frame_Handle_Form->setObjectName(QStringLiteral("Frame_Handle_Form"));
        Frame_Handle_Form->resize(498, 375);
        Frame_Handle_Form->setMinimumSize(QSize(498, 375));
        Frame_Handle_Form->setMaximumSize(QSize(498, 375));
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        Frame_Handle_Form->setWindowIcon(icon);
        label_msg = new QLabel(Frame_Handle_Form);
        label_msg->setObjectName(QStringLiteral("label_msg"));
        label_msg->setGeometry(QRect(20, 340, 451, 17));
        label_msg->setMinimumSize(QSize(451, 17));
        label_msg->setMaximumSize(QSize(451, 17));
        label_msg->setStyleSheet(QStringLiteral("color:rgb(239, 41, 41)"));
        layoutWidget = new QWidget(Frame_Handle_Form);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 10, 471, 311));
        verticalLayout_6 = new QVBoxLayout(layoutWidget);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mode1_btn = new QPushButton(layoutWidget);
        mode1_btn->setObjectName(QStringLiteral("mode1_btn"));

        horizontalLayout->addWidget(mode1_btn);

        mode2_btn = new QPushButton(layoutWidget);
        mode2_btn->setObjectName(QStringLiteral("mode2_btn"));

        horizontalLayout->addWidget(mode2_btn);

        mode3_btn = new QPushButton(layoutWidget);
        mode3_btn->setObjectName(QStringLiteral("mode3_btn"));

        horizontalLayout->addWidget(mode3_btn);

        mode4_btn = new QPushButton(layoutWidget);
        mode4_btn->setObjectName(QStringLiteral("mode4_btn"));

        horizontalLayout->addWidget(mode4_btn);


        verticalLayout_6->addLayout(horizontalLayout);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        stackedWidget = new QStackedWidget(layoutWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page_0 = new QWidget();
        page_0->setObjectName(QStringLiteral("page_0"));
        groupBox_1 = new QGroupBox(page_0);
        groupBox_1->setObjectName(QStringLiteral("groupBox_1"));
        groupBox_1->setGeometry(QRect(10, 10, 451, 251));
        layoutWidget1 = new QWidget(groupBox_1);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 20, 432, 222));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(layoutWidget1);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        mode1_start_text = new QLineEdit(layoutWidget1);
        mode1_start_text->setObjectName(QStringLiteral("mode1_start_text"));

        horizontalLayout_2->addWidget(mode1_start_text);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_14);

        mode1_start_btn = new QPushButton(layoutWidget1);
        mode1_start_btn->setObjectName(QStringLiteral("mode1_start_btn"));

        horizontalLayout_2->addWidget(mode1_start_btn);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_3->addWidget(label_2);

        mode1_stop_text = new QLineEdit(layoutWidget1);
        mode1_stop_text->setObjectName(QStringLiteral("mode1_stop_text"));

        horizontalLayout_3->addWidget(mode1_stop_text);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_15);

        mode1_stop_btn = new QPushButton(layoutWidget1);
        mode1_stop_btn->setObjectName(QStringLiteral("mode1_stop_btn"));

        horizontalLayout_3->addWidget(mode1_stop_btn);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_4->addWidget(label_3);

        mode1_path_text = new QLineEdit(layoutWidget1);
        mode1_path_text->setObjectName(QStringLiteral("mode1_path_text"));

        horizontalLayout_4->addWidget(mode1_path_text);

        mode1_path_btn = new QPushButton(layoutWidget1);
        mode1_path_btn->setObjectName(QStringLiteral("mode1_path_btn"));

        horizontalLayout_4->addWidget(mode1_path_btn);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_15 = new QLabel(layoutWidget1);
        label_15->setObjectName(QStringLiteral("label_15"));

        horizontalLayout_6->addWidget(label_15);

        mode1_comboBox = new QComboBox(layoutWidget1);
        mode1_comboBox->setObjectName(QStringLiteral("mode1_comboBox"));

        horizontalLayout_6->addWidget(mode1_comboBox);

        label_17 = new QLabel(layoutWidget1);
        label_17->setObjectName(QStringLiteral("label_17"));

        horizontalLayout_6->addWidget(label_17);

        mode1_spinBox = new QSpinBox(layoutWidget1);
        mode1_spinBox->setObjectName(QStringLiteral("mode1_spinBox"));
        mode1_spinBox->setValue(10);

        horizontalLayout_6->addWidget(mode1_spinBox);

        horizontalSpacer_20 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_20);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_2);

        mode1_ok_btn = new QPushButton(layoutWidget1);
        mode1_ok_btn->setObjectName(QStringLiteral("mode1_ok_btn"));

        horizontalLayout_9->addWidget(mode1_ok_btn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer);

        mode1_empty_btn = new QPushButton(layoutWidget1);
        mode1_empty_btn->setObjectName(QStringLiteral("mode1_empty_btn"));

        horizontalLayout_9->addWidget(mode1_empty_btn);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_9);

        progressBar1 = new QProgressBar(layoutWidget1);
        progressBar1->setObjectName(QStringLiteral("progressBar1"));
        progressBar1->setValue(24);

        verticalLayout->addWidget(progressBar1);

        stackedWidget->addWidget(page_0);
        page_1 = new QWidget();
        page_1->setObjectName(QStringLiteral("page_1"));
        groupBox_3 = new QGroupBox(page_1);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 20, 451, 211));
        layoutWidget_2 = new QWidget(groupBox_3);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 20, 432, 181));
        verticalLayout_3 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_4 = new QLabel(layoutWidget_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_8->addWidget(label_4);

        mode2_time_text = new QLineEdit(layoutWidget_2);
        mode2_time_text->setObjectName(QStringLiteral("mode2_time_text"));

        horizontalLayout_8->addWidget(mode2_time_text);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_13);

        pushButton_14 = new QPushButton(layoutWidget_2);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));
        pushButton_14->setEnabled(false);

        horizontalLayout_8->addWidget(pushButton_14);


        verticalLayout_3->addLayout(horizontalLayout_8);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_5 = new QLabel(layoutWidget_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_10->addWidget(label_5);

        mode2_path_text = new QLineEdit(layoutWidget_2);
        mode2_path_text->setObjectName(QStringLiteral("mode2_path_text"));

        horizontalLayout_10->addWidget(mode2_path_text);

        mode2_path_btn = new QPushButton(layoutWidget_2);
        mode2_path_btn->setObjectName(QStringLiteral("mode2_path_btn"));

        horizontalLayout_10->addWidget(mode2_path_btn);


        verticalLayout_3->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_16 = new QLabel(layoutWidget_2);
        label_16->setObjectName(QStringLiteral("label_16"));

        horizontalLayout_11->addWidget(label_16);

        mode2_comboBox = new QComboBox(layoutWidget_2);
        mode2_comboBox->setObjectName(QStringLiteral("mode2_comboBox"));

        horizontalLayout_11->addWidget(mode2_comboBox);

        label_18 = new QLabel(layoutWidget_2);
        label_18->setObjectName(QStringLiteral("label_18"));

        horizontalLayout_11->addWidget(label_18);

        mode2_spinBox_2 = new QSpinBox(layoutWidget_2);
        mode2_spinBox_2->setObjectName(QStringLiteral("mode2_spinBox_2"));
        mode2_spinBox_2->setValue(10);

        horizontalLayout_11->addWidget(mode2_spinBox_2);

        horizontalSpacer_21 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_21);


        verticalLayout_3->addLayout(horizontalLayout_11);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_4);

        mode2_ok_btn = new QPushButton(layoutWidget_2);
        mode2_ok_btn->setObjectName(QStringLiteral("mode2_ok_btn"));

        horizontalLayout_17->addWidget(mode2_ok_btn);

        horizontalSpacer_5 = new QSpacerItem(79, 28, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_5);

        mode2_empty_btn = new QPushButton(layoutWidget_2);
        mode2_empty_btn->setObjectName(QStringLiteral("mode2_empty_btn"));

        horizontalLayout_17->addWidget(mode2_empty_btn);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_6);


        verticalLayout_3->addLayout(horizontalLayout_17);

        progressBar_2 = new QProgressBar(layoutWidget_2);
        progressBar_2->setObjectName(QStringLiteral("progressBar_2"));
        progressBar_2->setValue(24);

        verticalLayout_3->addWidget(progressBar_2);

        stackedWidget->addWidget(page_1);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        groupBox_2 = new QGroupBox(page_2);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setEnabled(true);
        groupBox_2->setGeometry(QRect(10, 20, 451, 211));
        layoutWidget2 = new QWidget(groupBox_2);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 20, 432, 181));
        verticalLayout_2 = new QVBoxLayout(layoutWidget2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_6 = new QLabel(layoutWidget2);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_5->addWidget(label_6);

        mode3_time_text = new QLineEdit(layoutWidget2);
        mode3_time_text->setObjectName(QStringLiteral("mode3_time_text"));

        horizontalLayout_5->addWidget(mode3_time_text);

        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_18);

        mode3_time_btn = new QPushButton(layoutWidget2);
        mode3_time_btn->setObjectName(QStringLiteral("mode3_time_btn"));

        horizontalLayout_5->addWidget(mode3_time_btn);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_7 = new QLabel(layoutWidget2);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_7->addWidget(label_7);

        mode3_path_text = new QLineEdit(layoutWidget2);
        mode3_path_text->setObjectName(QStringLiteral("mode3_path_text"));

        horizontalLayout_7->addWidget(mode3_path_text);

        mode3_path_btn = new QPushButton(layoutWidget2);
        mode3_path_btn->setObjectName(QStringLiteral("mode3_path_btn"));

        horizontalLayout_7->addWidget(mode3_path_btn);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_19->addItem(horizontalSpacer_10);

        mode3_ok_btn = new QPushButton(layoutWidget2);
        mode3_ok_btn->setObjectName(QStringLiteral("mode3_ok_btn"));

        horizontalLayout_19->addWidget(mode3_ok_btn);

        horizontalSpacer_11 = new QSpacerItem(79, 28, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_19->addItem(horizontalSpacer_11);

        mode3_empty_btn = new QPushButton(layoutWidget2);
        mode3_empty_btn->setObjectName(QStringLiteral("mode3_empty_btn"));

        horizontalLayout_19->addWidget(mode3_empty_btn);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_19->addItem(horizontalSpacer_12);


        verticalLayout_2->addLayout(horizontalLayout_19);

        progressBar_3 = new QProgressBar(layoutWidget2);
        progressBar_3->setObjectName(QStringLiteral("progressBar_3"));
        progressBar_3->setValue(24);

        verticalLayout_2->addWidget(progressBar_3);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        groupBox_4 = new QGroupBox(page_3);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setEnabled(true);
        groupBox_4->setGeometry(QRect(0, 0, 471, 281));
        layoutWidget_4 = new QWidget(groupBox_4);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(10, 20, 452, 246));
        verticalLayout_5 = new QVBoxLayout(layoutWidget_4);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        label_8 = new QLabel(layoutWidget_4);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_14->addWidget(label_8);

        mode4_imgpath_text = new QLineEdit(layoutWidget_4);
        mode4_imgpath_text->setObjectName(QStringLiteral("mode4_imgpath_text"));
        mode4_imgpath_text->setMaximumSize(QSize(5555555, 16777215));

        horizontalLayout_14->addWidget(mode4_imgpath_text);

        mode4_imgpath_btn = new QPushButton(layoutWidget_4);
        mode4_imgpath_btn->setObjectName(QStringLiteral("mode4_imgpath_btn"));

        horizontalLayout_14->addWidget(mode4_imgpath_btn);


        verticalLayout_5->addLayout(horizontalLayout_14);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QStringLiteral("horizontalLayout_20"));
        label_12 = new QLabel(layoutWidget_4);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout_20->addWidget(label_12);

        lineEdit_mask = new QLineEdit(layoutWidget_4);
        lineEdit_mask->setObjectName(QStringLiteral("lineEdit_mask"));

        horizontalLayout_20->addWidget(lineEdit_mask);

        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_20->addItem(horizontalSpacer_19);


        verticalLayout_5->addLayout(horizontalLayout_20);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        label_9 = new QLabel(layoutWidget_4);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_15->addWidget(label_9);

        mode4_rate_text = new QLineEdit(layoutWidget_4);
        mode4_rate_text->setObjectName(QStringLiteral("mode4_rate_text"));

        horizontalLayout_15->addWidget(mode4_rate_text);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_17);


        verticalLayout_5->addLayout(horizontalLayout_15);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        label_10 = new QLabel(layoutWidget_4);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_16->addWidget(label_10);

        mode4_path_text = new QLineEdit(layoutWidget_4);
        mode4_path_text->setObjectName(QStringLiteral("mode4_path_text"));
        mode4_path_text->setMinimumSize(QSize(120, 0));
        mode4_path_text->setMaximumSize(QSize(1666666, 16777215));

        horizontalLayout_16->addWidget(mode4_path_text);

        mode4_path_btn = new QPushButton(layoutWidget_4);
        mode4_path_btn->setObjectName(QStringLiteral("mode4_path_btn"));

        horizontalLayout_16->addWidget(mode4_path_btn);


        verticalLayout_5->addLayout(horizontalLayout_16);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_18->addItem(horizontalSpacer_7);

        mode4_ok_btn = new QPushButton(layoutWidget_4);
        mode4_ok_btn->setObjectName(QStringLiteral("mode4_ok_btn"));

        horizontalLayout_18->addWidget(mode4_ok_btn);

        horizontalSpacer_8 = new QSpacerItem(79, 28, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_18->addItem(horizontalSpacer_8);

        mode4_empty_btn = new QPushButton(layoutWidget_4);
        mode4_empty_btn->setObjectName(QStringLiteral("mode4_empty_btn"));

        horizontalLayout_18->addWidget(mode4_empty_btn);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_18->addItem(horizontalSpacer_9);


        verticalLayout_5->addLayout(horizontalLayout_18);

        progressBar_4 = new QProgressBar(layoutWidget_4);
        progressBar_4->setObjectName(QStringLiteral("progressBar_4"));
        progressBar_4->setValue(24);

        verticalLayout_5->addWidget(progressBar_4);

        stackedWidget->addWidget(page_3);

        verticalLayout_4->addWidget(stackedWidget);


        verticalLayout_6->addLayout(verticalLayout_4);

        layoutWidget->raise();
        label_msg->raise();

        retranslateUi(Frame_Handle_Form);

        stackedWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(Frame_Handle_Form);
    } // setupUi

    void retranslateUi(QWidget *Frame_Handle_Form)
    {
        Frame_Handle_Form->setWindowTitle(QApplication::translate("Frame_Handle_Form", "\345\270\247\345\244\204\347\220\206", Q_NULLPTR));
        label_msg->setText(QString());
        mode1_btn->setText(QApplication::translate("Frame_Handle_Form", "\350\207\252\345\256\232\344\271\211\346\213\206\345\270\247", Q_NULLPTR));
        mode2_btn->setText(QApplication::translate("Frame_Handle_Form", "\347\255\211\351\225\277\346\213\206\345\270\247", Q_NULLPTR));
        mode3_btn->setText(QApplication::translate("Frame_Handle_Form", "\346\210\252\345\217\226\345\215\225\345\270\247", Q_NULLPTR));
        mode4_btn->setText(QApplication::translate("Frame_Handle_Form", "\350\247\206\351\242\221\345\220\210\346\210\220", Q_NULLPTR));
        groupBox_1->setTitle(QApplication::translate("Frame_Handle_Form", "\350\207\252\345\256\232\344\271\211\346\227\266\351\225\277\346\213\206\345\270\247", Q_NULLPTR));
        label->setText(QApplication::translate("Frame_Handle_Form", "\345\274\200\345\247\213\346\227\266\345\210\273:", Q_NULLPTR));
        mode1_start_btn->setText(QApplication::translate("Frame_Handle_Form", "\351\200\211\346\213\251/ms", Q_NULLPTR));
        label_2->setText(QApplication::translate("Frame_Handle_Form", "\347\273\223\346\235\237\346\227\266\345\210\273:", Q_NULLPTR));
        mode1_stop_btn->setText(QApplication::translate("Frame_Handle_Form", "\351\200\211\346\213\251/ms", Q_NULLPTR));
        label_3->setText(QApplication::translate("Frame_Handle_Form", "\344\277\235\345\255\230\344\275\215\347\275\256:", Q_NULLPTR));
        mode1_path_btn->setText(QApplication::translate("Frame_Handle_Form", "\346\265\217\350\247\210", Q_NULLPTR));
        label_15->setText(QApplication::translate("Frame_Handle_Form", "\347\224\237\346\210\220\345\233\276\347\211\207\345\220\216\347\274\200\345\220\215:", Q_NULLPTR));
        mode1_comboBox->clear();
        mode1_comboBox->insertItems(0, QStringList()
         << QApplication::translate("Frame_Handle_Form", ".jpg", Q_NULLPTR)
         << QApplication::translate("Frame_Handle_Form", ".png", Q_NULLPTR)
         << QApplication::translate("Frame_Handle_Form", ".bmp", Q_NULLPTR)
         << QApplication::translate("Frame_Handle_Form", ".tif", Q_NULLPTR)
        );
        mode1_comboBox->setCurrentText(QApplication::translate("Frame_Handle_Form", ".jpg", Q_NULLPTR));
        label_17->setText(QApplication::translate("Frame_Handle_Form", "\347\224\237\346\210\220\345\233\276\347\211\207\345\220\215\347\247\260\351\225\277\345\272\246:", Q_NULLPTR));
        mode1_ok_btn->setText(QApplication::translate("Frame_Handle_Form", "\347\241\256\345\256\232", Q_NULLPTR));
        mode1_empty_btn->setText(QApplication::translate("Frame_Handle_Form", "\346\270\205\347\251\272", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("Frame_Handle_Form", "\347\255\211\346\227\266\351\225\277\346\213\206\345\270\247", Q_NULLPTR));
        label_4->setText(QApplication::translate("Frame_Handle_Form", "\351\227\264\351\232\224\346\227\266\351\227\264:", Q_NULLPTR));
        pushButton_14->setText(QApplication::translate("Frame_Handle_Form", "\345\215\225\344\275\215/ms", Q_NULLPTR));
        label_5->setText(QApplication::translate("Frame_Handle_Form", "\344\277\235\345\255\230\344\275\215\347\275\256:", Q_NULLPTR));
        mode2_path_btn->setText(QApplication::translate("Frame_Handle_Form", "\346\265\217\350\247\210", Q_NULLPTR));
        label_16->setText(QApplication::translate("Frame_Handle_Form", "\347\224\237\346\210\220\345\220\216\347\274\200\345\220\215:", Q_NULLPTR));
        mode2_comboBox->clear();
        mode2_comboBox->insertItems(0, QStringList()
         << QApplication::translate("Frame_Handle_Form", ".jpg", Q_NULLPTR)
         << QApplication::translate("Frame_Handle_Form", ".png", Q_NULLPTR)
         << QApplication::translate("Frame_Handle_Form", ".bmp", Q_NULLPTR)
         << QApplication::translate("Frame_Handle_Form", ".tif", Q_NULLPTR)
        );
        mode2_comboBox->setCurrentText(QApplication::translate("Frame_Handle_Form", ".jpg", Q_NULLPTR));
        label_18->setText(QApplication::translate("Frame_Handle_Form", "\347\224\237\346\210\220\345\233\276\347\211\207\345\220\215\347\247\260\351\225\277\345\272\246:", Q_NULLPTR));
        mode2_ok_btn->setText(QApplication::translate("Frame_Handle_Form", "\347\241\256\345\256\232", Q_NULLPTR));
        mode2_empty_btn->setText(QApplication::translate("Frame_Handle_Form", "\346\270\205\347\251\272", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("Frame_Handle_Form", "\346\210\252\345\217\226\345\215\225\345\270\247\345\233\276\345\203\217", Q_NULLPTR));
        label_6->setText(QApplication::translate("Frame_Handle_Form", "\346\210\252\345\217\226\345\270\247:", Q_NULLPTR));
        mode3_time_btn->setText(QApplication::translate("Frame_Handle_Form", "\351\200\211\346\213\251/\345\270\247", Q_NULLPTR));
        label_7->setText(QApplication::translate("Frame_Handle_Form", "\344\277\235\345\255\230\344\275\215\347\275\256:", Q_NULLPTR));
        mode3_path_btn->setText(QApplication::translate("Frame_Handle_Form", "\346\265\217\350\247\210", Q_NULLPTR));
        mode3_ok_btn->setText(QApplication::translate("Frame_Handle_Form", "\347\241\256\345\256\232", Q_NULLPTR));
        mode3_empty_btn->setText(QApplication::translate("Frame_Handle_Form", "\346\270\205\347\251\272", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("Frame_Handle_Form", "\345\270\247\345\220\210\346\210\220\350\247\206\351\242\221", Q_NULLPTR));
        label_8->setText(QApplication::translate("Frame_Handle_Form", "\345\233\276\347\211\207\344\275\215\347\275\256:", Q_NULLPTR));
        mode4_imgpath_btn->setText(QApplication::translate("Frame_Handle_Form", "\346\265\217\350\247\210", Q_NULLPTR));
        label_12->setText(QApplication::translate("Frame_Handle_Form", "\345\233\276\347\211\207\345\221\275\345\220\215\350\241\250\350\276\276\345\274\217:", Q_NULLPTR));
        lineEdit_mask->setText(QApplication::translate("Frame_Handle_Form", "%10d.jpg", Q_NULLPTR));
        label_9->setText(QApplication::translate("Frame_Handle_Form", "\345\220\210\346\210\220\345\270\247\347\216\207:", Q_NULLPTR));
        mode4_rate_text->setText(QApplication::translate("Frame_Handle_Form", "25", Q_NULLPTR));
        label_10->setText(QApplication::translate("Frame_Handle_Form", "\344\277\235\345\255\230\344\275\215\347\275\256:", Q_NULLPTR));
        mode4_path_btn->setText(QApplication::translate("Frame_Handle_Form", "\351\200\211\346\213\251", Q_NULLPTR));
        mode4_ok_btn->setText(QApplication::translate("Frame_Handle_Form", "\347\241\256\345\256\232", Q_NULLPTR));
        mode4_empty_btn->setText(QApplication::translate("Frame_Handle_Form", "\346\270\205\347\251\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Frame_Handle_Form: public Ui_Frame_Handle_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRAME_HANDLE_FORM_H
