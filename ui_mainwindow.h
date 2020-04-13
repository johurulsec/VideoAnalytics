/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_20;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QLabel *label_70;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_41;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_15;
    QVBoxLayout *verticalLayout_27;
    QHBoxLayout *horizontalLayout_57;
    QCheckBox *face_check;
    QCheckBox *checkBox_40;
    QCheckBox *checkBox_41;
    QHBoxLayout *horizontalLayout_58;
    QCheckBox *male_check;
    QCheckBox *checkBox_42;
    QHBoxLayout *horizontalLayout_59;
    QLabel *label_98;
    QSpacerItem *horizontalSpacer_41;
    QHBoxLayout *horizontalLayout_60;
    QLabel *label_99;
    QSpacerItem *horizontalSpacer_42;
    QLineEdit *lineEdit_24;
    QHBoxLayout *horizontalLayout_61;
    QLabel *label_100;
    QSpacerItem *horizontalSpacer_43;
    QLineEdit *lineEdit_25;
    QLabel *label_111;
    QLabel *label_112;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_14;
    QHBoxLayout *horizontalLayout_51;
    QLabel *label_85;
    QSpacerItem *horizontalSpacer_35;
    QComboBox *vehicles_combobox;
    QHBoxLayout *horizontalLayout_52;
    QLabel *label_86;
    QSpacerItem *horizontalSpacer_36;
    QLineEdit *lineEdit_22;
    QHBoxLayout *horizontalLayout_53;
    QLabel *label_87;
    QSpacerItem *horizontalSpacer_37;
    QComboBox *category_combobox;
    QLabel *label_113;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout_17;
    QSpacerItem *verticalSpacer_15;
    QVBoxLayout *verticalLayout_29;
    QLabel *label_104;
    QLabel *label_105;
    QSpacerItem *verticalSpacer_16;
    QComboBox *pick_color_combobox;
    QLabel *label_72;
    QLabel *label_71;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_42;
    QLabel *label_73;
    QDateTimeEdit *dateTimeEdit_12;
    QHBoxLayout *horizontalLayout_43;
    QLabel *label_74;
    QDateTimeEdit *dateTimeEdit_13;
    QPushButton *pushButton_select_video_file;
    QMenuBar *menuBar;
    QMenu *menuVideo_Analytics;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(769, 714);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 210, 171, 441));
        verticalLayout_20 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_20->setSpacing(6);
        verticalLayout_20->setContentsMargins(11, 11, 11, 11);
        verticalLayout_20->setObjectName(QStringLiteral("verticalLayout_20"));
        verticalLayout_20->setContentsMargins(0, 0, 0, 0);
        scrollArea_2 = new QScrollArea(verticalLayoutWidget);
        scrollArea_2->setObjectName(QStringLiteral("scrollArea_2"));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 167, 437));
        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_20->addWidget(scrollArea_2);

        label_70 = new QLabel(centralWidget);
        label_70->setObjectName(QStringLiteral("label_70"));
        label_70->setGeometry(QRect(210, 180, 61, 17));
        label_70->setMinimumSize(QSize(60, 17));
        label_70->setStyleSheet(QStringLiteral("background-color: rgb(61, 234, 37);"));
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(200, 210, 521, 441));
        horizontalLayout_41 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_41->setSpacing(6);
        horizontalLayout_41->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_41->setObjectName(QStringLiteral("horizontalLayout_41"));
        horizontalLayout_41->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(horizontalLayoutWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setFrameShadow(QFrame::Plain);
        scrollArea->setLineWidth(0);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 517, 437));
        scrollArea->setWidget(scrollAreaWidgetContents);

        horizontalLayout_41->addWidget(scrollArea);

        layoutWidget_3 = new QWidget(centralWidget);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(250, 30, 201, 131));
        verticalLayout_15 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_15->setSpacing(6);
        verticalLayout_15->setContentsMargins(11, 11, 11, 11);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        verticalLayout_15->setContentsMargins(0, 0, 0, 0);
        verticalLayout_27 = new QVBoxLayout();
        verticalLayout_27->setSpacing(6);
        verticalLayout_27->setObjectName(QStringLiteral("verticalLayout_27"));
        horizontalLayout_57 = new QHBoxLayout();
        horizontalLayout_57->setSpacing(6);
        horizontalLayout_57->setObjectName(QStringLiteral("horizontalLayout_57"));
        face_check = new QCheckBox(layoutWidget_3);
        face_check->setObjectName(QStringLiteral("face_check"));
        face_check->setMinimumSize(QSize(90, 23));
        face_check->setStyleSheet(QStringLiteral("background-color:rgb(246, 25, 235)"));

        horizontalLayout_57->addWidget(face_check);

        checkBox_40 = new QCheckBox(layoutWidget_3);
        checkBox_40->setObjectName(QStringLiteral("checkBox_40"));
        checkBox_40->setMinimumSize(QSize(89, 23));
        checkBox_40->setStyleSheet(QStringLiteral("background-color:rgb(246, 25, 235)"));

        horizontalLayout_57->addWidget(checkBox_40);


        verticalLayout_27->addLayout(horizontalLayout_57);

        checkBox_41 = new QCheckBox(layoutWidget_3);
        checkBox_41->setObjectName(QStringLiteral("checkBox_41"));
        checkBox_41->setMinimumSize(QSize(187, 23));
        checkBox_41->setStyleSheet(QStringLiteral("background-color:rgb(245, 121, 0)"));

        verticalLayout_27->addWidget(checkBox_41);

        horizontalLayout_58 = new QHBoxLayout();
        horizontalLayout_58->setSpacing(6);
        horizontalLayout_58->setObjectName(QStringLiteral("horizontalLayout_58"));
        male_check = new QCheckBox(layoutWidget_3);
        male_check->setObjectName(QStringLiteral("male_check"));
        male_check->setMinimumSize(QSize(90, 23));
        male_check->setStyleSheet(QStringLiteral("background-color:rgb(246, 25, 235)"));

        horizontalLayout_58->addWidget(male_check);

        checkBox_42 = new QCheckBox(layoutWidget_3);
        checkBox_42->setObjectName(QStringLiteral("checkBox_42"));
        checkBox_42->setMinimumSize(QSize(89, 23));
        checkBox_42->setStyleSheet(QStringLiteral("background-color:rgb(246, 25, 235)"));

        horizontalLayout_58->addWidget(checkBox_42);


        verticalLayout_27->addLayout(horizontalLayout_58);


        verticalLayout_15->addLayout(verticalLayout_27);

        horizontalLayout_59 = new QHBoxLayout();
        horizontalLayout_59->setSpacing(6);
        horizontalLayout_59->setObjectName(QStringLiteral("horizontalLayout_59"));
        label_98 = new QLabel(layoutWidget_3);
        label_98->setObjectName(QStringLiteral("label_98"));
        label_98->setMinimumSize(QSize(31, 27));
        label_98->setStyleSheet(QStringLiteral("background-color:rgb(187, 228, 51)"));
        label_98->setFrameShape(QFrame::Box);
        label_98->setFrameShadow(QFrame::Raised);
        label_98->setLineWidth(0);

        horizontalLayout_59->addWidget(label_98);

        horizontalSpacer_41 = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_59->addItem(horizontalSpacer_41);

        horizontalLayout_60 = new QHBoxLayout();
        horizontalLayout_60->setSpacing(6);
        horizontalLayout_60->setObjectName(QStringLiteral("horizontalLayout_60"));
        label_99 = new QLabel(layoutWidget_3);
        label_99->setObjectName(QStringLiteral("label_99"));
        label_99->setMinimumSize(QSize(36, 25));
        label_99->setStyleSheet(QLatin1String("border-color: rgb(239, 41, 41);\n"
"background-color: rgb(114, 159, 207);\n"
"color: rgb(61, 234, 37);"));
        label_99->setFrameShape(QFrame::Box);
        label_99->setFrameShadow(QFrame::Raised);
        label_99->setLineWidth(0);

        horizontalLayout_60->addWidget(label_99);

        horizontalSpacer_42 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_60->addItem(horizontalSpacer_42);

        lineEdit_24 = new QLineEdit(layoutWidget_3);
        lineEdit_24->setObjectName(QStringLiteral("lineEdit_24"));
        lineEdit_24->setMinimumSize(QSize(27, 25));

        horizontalLayout_60->addWidget(lineEdit_24);


        horizontalLayout_59->addLayout(horizontalLayout_60);

        horizontalLayout_61 = new QHBoxLayout();
        horizontalLayout_61->setSpacing(6);
        horizontalLayout_61->setObjectName(QStringLiteral("horizontalLayout_61"));
        label_100 = new QLabel(layoutWidget_3);
        label_100->setObjectName(QStringLiteral("label_100"));
        label_100->setMinimumSize(QSize(20, 25));
        label_100->setStyleSheet(QLatin1String("border-color: rgb(239, 41, 41);\n"
"background-color: rgb(114, 159, 207);\n"
"color: rgb(61, 234, 37);"));
        label_100->setFrameShape(QFrame::Box);
        label_100->setFrameShadow(QFrame::Raised);
        label_100->setLineWidth(0);

        horizontalLayout_61->addWidget(label_100);

        horizontalSpacer_43 = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_61->addItem(horizontalSpacer_43);

        lineEdit_25 = new QLineEdit(layoutWidget_3);
        lineEdit_25->setObjectName(QStringLiteral("lineEdit_25"));
        lineEdit_25->setMinimumSize(QSize(27, 25));

        horizontalLayout_61->addWidget(lineEdit_25);


        horizontalLayout_59->addLayout(horizontalLayout_61);


        verticalLayout_15->addLayout(horizontalLayout_59);

        label_111 = new QLabel(centralWidget);
        label_111->setObjectName(QStringLiteral("label_111"));
        label_111->setGeometry(QRect(250, 10, 201, 17));
        label_111->setMinimumSize(QSize(190, 17));
        label_111->setStyleSheet(QStringLiteral("background-color: rgb(0, 255, 0);"));
        label_112 = new QLabel(centralWidget);
        label_112->setObjectName(QStringLiteral("label_112"));
        label_112->setEnabled(true);
        label_112->setGeometry(QRect(460, 10, 181, 17));
        label_112->setMinimumSize(QSize(160, 17));
        label_112->setStyleSheet(QStringLiteral("background-color:rgb(0, 255, 0)"));
        layoutWidget_2 = new QWidget(centralWidget);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(460, 30, 177, 131));
        verticalLayout_14 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setContentsMargins(11, 11, 11, 11);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        verticalLayout_14->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_51 = new QHBoxLayout();
        horizontalLayout_51->setSpacing(6);
        horizontalLayout_51->setObjectName(QStringLiteral("horizontalLayout_51"));
        label_85 = new QLabel(layoutWidget_2);
        label_85->setObjectName(QStringLiteral("label_85"));
        label_85->setStyleSheet(QStringLiteral("background-color:rgb(114, 159, 207)"));
        label_85->setFrameShape(QFrame::Box);
        label_85->setFrameShadow(QFrame::Raised);
        label_85->setLineWidth(1);

        horizontalLayout_51->addWidget(label_85);

        horizontalSpacer_35 = new QSpacerItem(48, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_51->addItem(horizontalSpacer_35);

        vehicles_combobox = new QComboBox(layoutWidget_2);
        vehicles_combobox->setObjectName(QStringLiteral("vehicles_combobox"));
        vehicles_combobox->setAutoFillBackground(false);
        vehicles_combobox->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout_51->addWidget(vehicles_combobox);


        verticalLayout_14->addLayout(horizontalLayout_51);

        horizontalLayout_52 = new QHBoxLayout();
        horizontalLayout_52->setSpacing(6);
        horizontalLayout_52->setObjectName(QStringLiteral("horizontalLayout_52"));
        label_86 = new QLabel(layoutWidget_2);
        label_86->setObjectName(QStringLiteral("label_86"));
        label_86->setStyleSheet(QStringLiteral("background-color:rgb(114, 159, 207)"));
        label_86->setFrameShape(QFrame::Box);
        label_86->setFrameShadow(QFrame::Raised);
        label_86->setLineWidth(1);

        horizontalLayout_52->addWidget(label_86);

        horizontalSpacer_36 = new QSpacerItem(38, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_52->addItem(horizontalSpacer_36);

        lineEdit_22 = new QLineEdit(layoutWidget_2);
        lineEdit_22->setObjectName(QStringLiteral("lineEdit_22"));
        lineEdit_22->setStyleSheet(QStringLiteral("border-color: rgb(204, 0, 0);"));

        horizontalLayout_52->addWidget(lineEdit_22);


        verticalLayout_14->addLayout(horizontalLayout_52);

        horizontalLayout_53 = new QHBoxLayout();
        horizontalLayout_53->setSpacing(6);
        horizontalLayout_53->setObjectName(QStringLiteral("horizontalLayout_53"));
        label_87 = new QLabel(layoutWidget_2);
        label_87->setObjectName(QStringLiteral("label_87"));
        label_87->setStyleSheet(QStringLiteral("background-color:rgb(114, 159, 207)"));
        label_87->setFrameShape(QFrame::Box);
        label_87->setFrameShadow(QFrame::Raised);

        horizontalLayout_53->addWidget(label_87);

        horizontalSpacer_37 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_53->addItem(horizontalSpacer_37);

        category_combobox = new QComboBox(layoutWidget_2);
        category_combobox->setObjectName(QStringLiteral("category_combobox"));
        category_combobox->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout_53->addWidget(category_combobox);


        verticalLayout_14->addLayout(horizontalLayout_53);

        label_113 = new QLabel(centralWidget);
        label_113->setObjectName(QStringLiteral("label_113"));
        label_113->setGeometry(QRect(660, 10, 91, 17));
        label_113->setMinimumSize(QSize(85, 17));
        label_113->setStyleSheet(QStringLiteral("background-color:rgb(0, 255, 0)"));
        layoutWidget_4 = new QWidget(centralWidget);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(660, 30, 91, 121));
        verticalLayout_17 = new QVBoxLayout(layoutWidget_4);
        verticalLayout_17->setSpacing(6);
        verticalLayout_17->setContentsMargins(11, 11, 11, 11);
        verticalLayout_17->setObjectName(QStringLiteral("verticalLayout_17"));
        verticalLayout_17->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_15 = new QSpacerItem(13, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_17->addItem(verticalSpacer_15);

        verticalLayout_29 = new QVBoxLayout();
        verticalLayout_29->setSpacing(6);
        verticalLayout_29->setObjectName(QStringLiteral("verticalLayout_29"));
        label_104 = new QLabel(layoutWidget_4);
        label_104->setObjectName(QStringLiteral("label_104"));
        label_104->setStyleSheet(QStringLiteral("background-color:rgb(173, 127, 168)"));

        verticalLayout_29->addWidget(label_104);

        label_105 = new QLabel(layoutWidget_4);
        label_105->setObjectName(QStringLiteral("label_105"));
        label_105->setStyleSheet(QStringLiteral("background-color:rgb(173, 127, 168)"));

        verticalLayout_29->addWidget(label_105);


        verticalLayout_17->addLayout(verticalLayout_29);

        verticalSpacer_16 = new QSpacerItem(18, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_17->addItem(verticalSpacer_16);

        pick_color_combobox = new QComboBox(layoutWidget_4);
        pick_color_combobox->setObjectName(QStringLiteral("pick_color_combobox"));
        pick_color_combobox->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        verticalLayout_17->addWidget(pick_color_combobox);

        label_72 = new QLabel(centralWidget);
        label_72->setObjectName(QStringLiteral("label_72"));
        label_72->setGeometry(QRect(11, 40, 227, 41));
        label_72->setMinimumSize(QSize(227, 32));
        label_72->setStyleSheet(QLatin1String("color: rgb(44, 238, 11);\n"
"background-color: rgb(173, 127, 168);"));
        label_71 = new QLabel(centralWidget);
        label_71->setObjectName(QStringLiteral("label_71"));
        label_71->setGeometry(QRect(11, 11, 227, 32));
        label_71->setMinimumSize(QSize(227, 32));
        label_71->setStyleSheet(QLatin1String("color: rgb(44, 238, 11);\n"
"background-color: rgb(173, 127, 168);"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(11, 87, 229, 71));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_42 = new QHBoxLayout();
        horizontalLayout_42->setSpacing(6);
        horizontalLayout_42->setObjectName(QStringLiteral("horizontalLayout_42"));
        label_73 = new QLabel(layoutWidget);
        label_73->setObjectName(QStringLiteral("label_73"));
        label_73->setMinimumSize(QSize(39, 29));
        label_73->setStyleSheet(QLatin1String("background-color:rgb(114, 159, 207);\n"
"font: 11pt \"Ubuntu\";\n"
"border-color: rgb(246, 25, 235);"));
        label_73->setFrameShape(QFrame::Box);
        label_73->setFrameShadow(QFrame::Raised);
        label_73->setLineWidth(1);
        label_73->setTextFormat(Qt::AutoText);

        horizontalLayout_42->addWidget(label_73);

        dateTimeEdit_12 = new QDateTimeEdit(layoutWidget);
        dateTimeEdit_12->setObjectName(QStringLiteral("dateTimeEdit_12"));
        dateTimeEdit_12->setMinimumSize(QSize(180, 26));
        dateTimeEdit_12->setStyleSheet(QStringLiteral("border-color: rgb(204, 0, 0);"));

        horizontalLayout_42->addWidget(dateTimeEdit_12);


        verticalLayout->addLayout(horizontalLayout_42);

        horizontalLayout_43 = new QHBoxLayout();
        horizontalLayout_43->setSpacing(6);
        horizontalLayout_43->setObjectName(QStringLiteral("horizontalLayout_43"));
        label_74 = new QLabel(layoutWidget);
        label_74->setObjectName(QStringLiteral("label_74"));
        label_74->setMinimumSize(QSize(39, 30));
        label_74->setStyleSheet(QStringLiteral("background-color:rgb(114, 159, 207)"));
        label_74->setFrameShape(QFrame::Box);
        label_74->setFrameShadow(QFrame::Raised);
        label_74->setLineWidth(2);

        horizontalLayout_43->addWidget(label_74);

        dateTimeEdit_13 = new QDateTimeEdit(layoutWidget);
        dateTimeEdit_13->setObjectName(QStringLiteral("dateTimeEdit_13"));
        dateTimeEdit_13->setMinimumSize(QSize(180, 26));
        dateTimeEdit_13->setStyleSheet(QStringLiteral("border-color: rgb(204, 0, 0);"));

        horizontalLayout_43->addWidget(dateTimeEdit_13);


        verticalLayout->addLayout(horizontalLayout_43);

        pushButton_select_video_file = new QPushButton(centralWidget);
        pushButton_select_video_file->setObjectName(QStringLiteral("pushButton_select_video_file"));
        pushButton_select_video_file->setGeometry(QRect(50, 180, 89, 25));
        pushButton_select_video_file->setStyleSheet(QStringLiteral("background-color: rgb(61, 234, 37);"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 769, 22));
        menuVideo_Analytics = new QMenu(menuBar);
        menuVideo_Analytics->setObjectName(QStringLiteral("menuVideo_Analytics"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuVideo_Analytics->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label_70->setText(QApplication::translate("MainWindow", "Results:", Q_NULLPTR));
        face_check->setText(QApplication::translate("MainWindow", "Face", Q_NULLPTR));
        checkBox_40->setText(QApplication::translate("MainWindow", "Person", Q_NULLPTR));
        checkBox_41->setText(QApplication::translate("MainWindow", "Masked face", Q_NULLPTR));
        male_check->setText(QApplication::translate("MainWindow", "Male", Q_NULLPTR));
        checkBox_42->setText(QApplication::translate("MainWindow", "Female", Q_NULLPTR));
        label_98->setText(QApplication::translate("MainWindow", "Age:", Q_NULLPTR));
        label_99->setText(QApplication::translate("MainWindow", "From", Q_NULLPTR));
        lineEdit_24->setText(QApplication::translate("MainWindow", "10", Q_NULLPTR));
        label_100->setText(QApplication::translate("MainWindow", "To ", Q_NULLPTR));
        lineEdit_25->setText(QApplication::translate("MainWindow", "40", Q_NULLPTR));
        label_111->setText(QApplication::translate("MainWindow", "                    Subjects", Q_NULLPTR));
        label_112->setText(QApplication::translate("MainWindow", "                    Objetcs", Q_NULLPTR));
        label_85->setText(QApplication::translate("MainWindow", "Vehicles", Q_NULLPTR));
        vehicles_combobox->clear();
        vehicles_combobox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "select", Q_NULLPTR)
        );
        label_86->setText(QApplication::translate("MainWindow", "License plate", Q_NULLPTR));
        lineEdit_22->setText(QApplication::translate("MainWindow", "search", Q_NULLPTR));
        lineEdit_22->setPlaceholderText(QApplication::translate("MainWindow", "Search", Q_NULLPTR));
        label_87->setText(QApplication::translate("MainWindow", "Category", Q_NULLPTR));
        category_combobox->clear();
        category_combobox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "select", Q_NULLPTR)
        );
        label_113->setText(QApplication::translate("MainWindow", "      Color", Q_NULLPTR));
        label_104->setText(QApplication::translate("MainWindow", "      Pick", Q_NULLPTR));
        label_105->setText(QApplication::translate("MainWindow", "     color", Q_NULLPTR));
        pick_color_combobox->clear();
        pick_color_combobox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "select", Q_NULLPTR)
        );
        label_72->setText(QApplication::translate("MainWindow", "                        Box", Q_NULLPTR));
        label_71->setText(QApplication::translate("MainWindow", "                      Search", Q_NULLPTR));
        label_73->setText(QApplication::translate("MainWindow", "From", Q_NULLPTR));
        label_74->setText(QApplication::translate("MainWindow", "To     :", Q_NULLPTR));
        pushButton_select_video_file->setText(QApplication::translate("MainWindow", "Video File", Q_NULLPTR));
        menuVideo_Analytics->setTitle(QApplication::translate("MainWindow", "Video Analytics", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
