/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox3;
    QVBoxLayout *verticalLayout_6;
    QTableView *tableView;
    QGroupBox *groupBox4;
    QVBoxLayout *verticalLayout_5;
    QTextBrowser *textBrowser;
    QGroupBox *groupBox2;
    QGroupBox *groupBox1;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_3;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label_10;
    QLabel *label_6;
    QLineEdit *line_B;
    QLineEdit *line_N_Frame;
    QLabel *label_11;
    QLineEdit *line_N_sample;
    QLabel *label_2;
    QLabel *label_8;
    QLineEdit *line_PRT;
    QLabel *label_3;
    QLabel *label_9;
    QLabel *label_7;
    QLineEdit *line_fc;
    QLabel *label_5;
    QLineEdit *line_delT_pulse;
    QLabel *label_4;
    QLineEdit *line_delT_frame;
    QLineEdit *line_N_chirp;
    QLineEdit *line_fs;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLineEdit *line_N_channel;
    QFrame *line;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QWidget *tab_2;
    QLineEdit *line_N_vt;
    QLabel *label_27;
    QLabel *label_12;
    QLabel *label_25;
    QLabel *label_26;
    QLineEdit *line_R_lr;
    QLabel *label_24;
    QLineEdit *line_N_K;
    QLabel *label_23;
    QLineEdit *line_threshold;
    QLineEdit *line_distance;
    QLineEdit *line_N_Q;
    QLabel *label_28;
    QLineEdit *line_delN_frame;
    QLabel *label_31;
    QLabel *label_32;
    QLabel *label_33;
    QLabel *label_34;
    QLabel *label_35;
    QLabel *label_36;
    QLabel *label_37;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *line_path;
    QPushButton *Btn_GetDir;
    QProgressBar *progressBar_proc;
    QPushButton *Btn_Proc;
    QTabWidget *tabWidget_2;
    QWidget *sd;
    QPushButton *Btn_draw_auto;
    QLabel *label_45;
    QLabel *label_46;
    QLabel *label_47;
    QLabel *label_48;
    QLineEdit *line_MeaV_2;
    QLabel *label_49;
    QLineEdit *line_frame_2s;
    QLineEdit *line_batch_2s;
    QLineEdit *line_channel_2;
    QLineEdit *line_MerV_2;
    QLabel *label_50;
    QLineEdit *line_batch_2e;
    QLabel *label_51;
    QLineEdit *line_frame_2e;
    QProgressBar *progressBar_play;
    QLineEdit *line_delt;
    QLabel *label_52;
    QLabel *label_53;
    QWidget *tab_5;
    QPushButton *Btn_draw;
    QLabel *label_41;
    QLabel *label_40;
    QLabel *label_43;
    QLabel *label_42;
    QLineEdit *line_MeaV;
    QLabel *label_44;
    QLineEdit *line_frame;
    QLineEdit *line_batch;
    QLineEdit *line_channel;
    QLineEdit *line_MerV;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1920, 900);
        MainWindow->setMinimumSize(QSize(1920, 0));
        MainWindow->setMaximumSize(QSize(1920, 16777215));
        MainWindow->setBaseSize(QSize(0, 0));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox3 = new QGroupBox(centralwidget);
        groupBox3->setObjectName(QString::fromUtf8("groupBox3"));
        QFont font;
        font.setFamily(QString::fromUtf8("Adobe Devanagari"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        groupBox3->setFont(font);
        verticalLayout_6 = new QVBoxLayout(groupBox3);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        tableView = new QTableView(groupBox3);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setStyleSheet(QString::fromUtf8(""));
        tableView->setFrameShape(QFrame::StyledPanel);

        verticalLayout_6->addWidget(tableView);


        verticalLayout->addWidget(groupBox3);

        groupBox4 = new QGroupBox(centralwidget);
        groupBox4->setObjectName(QString::fromUtf8("groupBox4"));
        groupBox4->setFont(font);
        verticalLayout_5 = new QVBoxLayout(groupBox4);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        textBrowser = new QTextBrowser(groupBox4);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_5->addWidget(textBrowser);


        verticalLayout->addWidget(groupBox4);


        horizontalLayout->addLayout(verticalLayout);

        groupBox2 = new QGroupBox(centralwidget);
        groupBox2->setObjectName(QString::fromUtf8("groupBox2"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Consolas"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        groupBox2->setFont(font1);

        horizontalLayout->addWidget(groupBox2);

        groupBox1 = new QGroupBox(centralwidget);
        groupBox1->setObjectName(QString::fromUtf8("groupBox1"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox1->sizePolicy().hasHeightForWidth());
        groupBox1->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setFamily(QString::fromUtf8("Consolas"));
        font2.setPointSize(10);
        groupBox1->setFont(font2);
        groupBox1->setStyleSheet(QString::fromUtf8("background-color: rgb(0,0,0);"));
        verticalLayout_2 = new QVBoxLayout(groupBox1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox_3 = new QGroupBox(groupBox1);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255,255,255);"));
        tabWidget = new QTabWidget(groupBox_3);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 20, 431, 201));
        tabWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255,255,255);"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        label_10 = new QLabel(tab);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(220, 110, 52, 16));
        label_6 = new QLabel(tab);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(40, 140, 65, 16));
        line_B = new QLineEdit(tab);
        line_B->setObjectName(QString::fromUtf8("line_B"));
        line_B->setGeometry(QRect(290, 20, 61, 21));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(line_B->sizePolicy().hasHeightForWidth());
        line_B->setSizePolicy(sizePolicy1);
        line_N_Frame = new QLineEdit(tab);
        line_N_Frame->setObjectName(QString::fromUtf8("line_N_Frame"));
        line_N_Frame->setGeometry(QRect(124, 21, 51, 21));
        sizePolicy1.setHeightForWidth(line_N_Frame->sizePolicy().hasHeightForWidth());
        line_N_Frame->setSizePolicy(sizePolicy1);
        label_11 = new QLabel(tab);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(220, 140, 65, 16));
        line_N_sample = new QLineEdit(tab);
        line_N_sample->setObjectName(QString::fromUtf8("line_N_sample"));
        line_N_sample->setGeometry(QRect(124, 110, 51, 21));
        sizePolicy1.setHeightForWidth(line_N_sample->sizePolicy().hasHeightForWidth());
        line_N_sample->setSizePolicy(sizePolicy1);
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 21, 65, 16));
        label_8 = new QLabel(tab);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(220, 50, 34, 16));
        line_PRT = new QLineEdit(tab);
        line_PRT->setObjectName(QString::fromUtf8("line_PRT"));
        line_PRT->setGeometry(QRect(290, 50, 61, 21));
        sizePolicy1.setHeightForWidth(line_PRT->sizePolicy().hasHeightForWidth());
        line_PRT->setSizePolicy(sizePolicy1);
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 50, 78, 16));
        label_9 = new QLabel(tab);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(220, 80, 39, 16));
        label_7 = new QLabel(tab);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(220, 20, 65, 16));
        line_fc = new QLineEdit(tab);
        line_fc->setObjectName(QString::fromUtf8("line_fc"));
        line_fc->setGeometry(QRect(124, 140, 51, 21));
        sizePolicy1.setHeightForWidth(line_fc->sizePolicy().hasHeightForWidth());
        line_fc->setSizePolicy(sizePolicy1);
        label_5 = new QLabel(tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(40, 110, 78, 16));
        line_delT_pulse = new QLineEdit(tab);
        line_delT_pulse->setObjectName(QString::fromUtf8("line_delT_pulse"));
        line_delT_pulse->setGeometry(QRect(290, 80, 61, 21));
        sizePolicy1.setHeightForWidth(line_delT_pulse->sizePolicy().hasHeightForWidth());
        line_delT_pulse->setSizePolicy(sizePolicy1);
        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 80, 78, 16));
        line_delT_frame = new QLineEdit(tab);
        line_delT_frame->setObjectName(QString::fromUtf8("line_delT_frame"));
        line_delT_frame->setGeometry(QRect(290, 140, 61, 21));
        sizePolicy1.setHeightForWidth(line_delT_frame->sizePolicy().hasHeightForWidth());
        line_delT_frame->setSizePolicy(sizePolicy1);
        line_N_chirp = new QLineEdit(tab);
        line_N_chirp->setObjectName(QString::fromUtf8("line_N_chirp"));
        line_N_chirp->setGeometry(QRect(124, 80, 51, 21));
        sizePolicy1.setHeightForWidth(line_N_chirp->sizePolicy().hasHeightForWidth());
        line_N_chirp->setSizePolicy(sizePolicy1);
        line_fs = new QLineEdit(tab);
        line_fs->setObjectName(QString::fromUtf8("line_fs"));
        line_fs->setGeometry(QRect(290, 110, 61, 21));
        sizePolicy1.setHeightForWidth(line_fs->sizePolicy().hasHeightForWidth());
        line_fs->setSizePolicy(sizePolicy1);
        label_13 = new QLabel(tab);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(180, 21, 16, 16));
        label_14 = new QLabel(tab);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(180, 50, 16, 16));
        label_15 = new QLabel(tab);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(180, 80, 16, 16));
        label_16 = new QLabel(tab);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(180, 110, 16, 16));
        label_17 = new QLabel(tab);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(180, 140, 21, 16));
        line_N_channel = new QLineEdit(tab);
        line_N_channel->setObjectName(QString::fromUtf8("line_N_channel"));
        line_N_channel->setGeometry(QRect(124, 50, 51, 21));
        sizePolicy1.setHeightForWidth(line_N_channel->sizePolicy().hasHeightForWidth());
        line_N_channel->setSizePolicy(sizePolicy1);
        line = new QFrame(tab);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(200, 0, 20, 181));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        label_18 = new QLabel(tab);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(360, 20, 21, 16));
        label_19 = new QLabel(tab);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(360, 50, 21, 16));
        label_20 = new QLabel(tab);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(360, 80, 21, 16));
        label_21 = new QLabel(tab);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(360, 110, 31, 16));
        label_22 = new QLabel(tab);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(360, 140, 21, 16));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        line_N_vt = new QLineEdit(tab_2);
        line_N_vt->setObjectName(QString::fromUtf8("line_N_vt"));
        line_N_vt->setGeometry(QRect(216, 32, 81, 17));
        label_27 = new QLabel(tab_2);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(119, 124, 78, 16));
        label_12 = new QLabel(tab_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(119, 9, 65, 16));
        label_25 = new QLabel(tab_2);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(119, 78, 65, 16));
        label_26 = new QLabel(tab_2);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(119, 101, 91, 16));
        line_R_lr = new QLineEdit(tab_2);
        line_R_lr->setObjectName(QString::fromUtf8("line_R_lr"));
        line_R_lr->setGeometry(QRect(216, 124, 81, 17));
        label_24 = new QLabel(tab_2);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(119, 55, 91, 16));
        line_N_K = new QLineEdit(tab_2);
        line_N_K->setObjectName(QString::fromUtf8("line_N_K"));
        line_N_K->setGeometry(QRect(216, 9, 81, 17));
        label_23 = new QLabel(tab_2);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(119, 32, 91, 16));
        line_threshold = new QLineEdit(tab_2);
        line_threshold->setObjectName(QString::fromUtf8("line_threshold"));
        line_threshold->setGeometry(QRect(216, 78, 81, 17));
        line_distance = new QLineEdit(tab_2);
        line_distance->setObjectName(QString::fromUtf8("line_distance"));
        line_distance->setGeometry(QRect(216, 101, 81, 17));
        line_N_Q = new QLineEdit(tab_2);
        line_N_Q->setObjectName(QString::fromUtf8("line_N_Q"));
        line_N_Q->setGeometry(QRect(216, 55, 81, 17));
        label_28 = new QLabel(tab_2);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(119, 147, 65, 16));
        line_delN_frame = new QLineEdit(tab_2);
        line_delN_frame->setObjectName(QString::fromUtf8("line_delN_frame"));
        line_delN_frame->setGeometry(QRect(216, 147, 81, 17));
        label_31 = new QLabel(tab_2);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setGeometry(QRect(310, 9, 16, 16));
        label_32 = new QLabel(tab_2);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setGeometry(QRect(310, 32, 16, 16));
        label_33 = new QLabel(tab_2);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setGeometry(QRect(310, 55, 16, 16));
        label_34 = new QLabel(tab_2);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setGeometry(QRect(353, 78, 16, 16));
        label_35 = new QLabel(tab_2);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setGeometry(QRect(310, 101, 16, 16));
        label_36 = new QLabel(tab_2);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setGeometry(QRect(310, 124, 16, 16));
        label_37 = new QLabel(tab_2);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setGeometry(QRect(310, 147, 16, 16));
        tabWidget->addTab(tab_2, QString());

        verticalLayout_2->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(groupBox1);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255,255,255);"));
        gridLayout = new QGridLayout(groupBox_4);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBox_4);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        line_path = new QLineEdit(groupBox_4);
        line_path->setObjectName(QString::fromUtf8("line_path"));

        gridLayout->addWidget(line_path, 0, 1, 1, 1);

        Btn_GetDir = new QPushButton(groupBox_4);
        Btn_GetDir->setObjectName(QString::fromUtf8("Btn_GetDir"));

        gridLayout->addWidget(Btn_GetDir, 0, 2, 1, 1);

        progressBar_proc = new QProgressBar(groupBox_4);
        progressBar_proc->setObjectName(QString::fromUtf8("progressBar_proc"));
        progressBar_proc->setValue(24);

        gridLayout->addWidget(progressBar_proc, 1, 0, 1, 2);

        Btn_Proc = new QPushButton(groupBox_4);
        Btn_Proc->setObjectName(QString::fromUtf8("Btn_Proc"));

        gridLayout->addWidget(Btn_Proc, 1, 2, 1, 1);


        verticalLayout_2->addWidget(groupBox_4);

        tabWidget_2 = new QTabWidget(groupBox1);
        tabWidget_2->setObjectName(QString::fromUtf8("tabWidget_2"));
        tabWidget_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255,255,255);"));
        sd = new QWidget();
        sd->setObjectName(QString::fromUtf8("sd"));
        Btn_draw_auto = new QPushButton(sd);
        Btn_draw_auto->setObjectName(QString::fromUtf8("Btn_draw_auto"));
        Btn_draw_auto->setGeometry(QRect(320, 170, 91, 23));
        label_45 = new QLabel(sd);
        label_45->setObjectName(QString::fromUtf8("label_45"));
        label_45->setGeometry(QRect(37, 50, 39, 16));
        label_46 = new QLabel(sd);
        label_46->setObjectName(QString::fromUtf8("label_46"));
        label_46->setGeometry(QRect(37, 20, 65, 16));
        label_47 = new QLabel(sd);
        label_47->setObjectName(QString::fromUtf8("label_47"));
        label_47->setGeometry(QRect(37, 80, 105, 16));
        label_48 = new QLabel(sd);
        label_48->setObjectName(QString::fromUtf8("label_48"));
        label_48->setGeometry(QRect(37, 110, 104, 16));
        line_MeaV_2 = new QLineEdit(sd);
        line_MeaV_2->setObjectName(QString::fromUtf8("line_MeaV_2"));
        line_MeaV_2->setGeometry(QRect(160, 110, 91, 21));
        label_49 = new QLabel(sd);
        label_49->setObjectName(QString::fromUtf8("label_49"));
        label_49->setGeometry(QRect(37, 140, 117, 16));
        line_frame_2s = new QLineEdit(sd);
        line_frame_2s->setObjectName(QString::fromUtf8("line_frame_2s"));
        line_frame_2s->setGeometry(QRect(160, 50, 91, 21));
        line_batch_2s = new QLineEdit(sd);
        line_batch_2s->setObjectName(QString::fromUtf8("line_batch_2s"));
        line_batch_2s->setGeometry(QRect(160, 20, 91, 21));
        line_batch_2s->setStyleSheet(QString::fromUtf8(""));
        line_channel_2 = new QLineEdit(sd);
        line_channel_2->setObjectName(QString::fromUtf8("line_channel_2"));
        line_channel_2->setGeometry(QRect(160, 80, 91, 21));
        line_MerV_2 = new QLineEdit(sd);
        line_MerV_2->setObjectName(QString::fromUtf8("line_MerV_2"));
        line_MerV_2->setGeometry(QRect(160, 140, 91, 21));
        label_50 = new QLabel(sd);
        label_50->setObjectName(QString::fromUtf8("label_50"));
        label_50->setGeometry(QRect(280, 20, 16, 16));
        line_batch_2e = new QLineEdit(sd);
        line_batch_2e->setObjectName(QString::fromUtf8("line_batch_2e"));
        line_batch_2e->setGeometry(QRect(320, 20, 91, 21));
        line_batch_2e->setStyleSheet(QString::fromUtf8(""));
        label_51 = new QLabel(sd);
        label_51->setObjectName(QString::fromUtf8("label_51"));
        label_51->setGeometry(QRect(280, 50, 16, 16));
        line_frame_2e = new QLineEdit(sd);
        line_frame_2e->setObjectName(QString::fromUtf8("line_frame_2e"));
        line_frame_2e->setGeometry(QRect(320, 50, 91, 21));
        progressBar_play = new QProgressBar(sd);
        progressBar_play->setObjectName(QString::fromUtf8("progressBar_play"));
        progressBar_play->setGeometry(QRect(40, 170, 241, 23));
        progressBar_play->setValue(24);
        line_delt = new QLineEdit(sd);
        line_delt->setObjectName(QString::fromUtf8("line_delt"));
        line_delt->setGeometry(QRect(320, 140, 91, 21));
        label_52 = new QLabel(sd);
        label_52->setObjectName(QString::fromUtf8("label_52"));
        label_52->setGeometry(QRect(280, 140, 31, 16));
        label_53 = new QLabel(sd);
        label_53->setObjectName(QString::fromUtf8("label_53"));
        label_53->setGeometry(QRect(420, 140, 31, 16));
        tabWidget_2->addTab(sd, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        Btn_draw = new QPushButton(tab_5);
        Btn_draw->setObjectName(QString::fromUtf8("Btn_draw"));
        Btn_draw->setGeometry(QRect(240, 160, 91, 23));
        label_41 = new QLabel(tab_5);
        label_41->setObjectName(QString::fromUtf8("label_41"));
        label_41->setGeometry(QRect(117, 52, 39, 16));
        label_40 = new QLabel(tab_5);
        label_40->setObjectName(QString::fromUtf8("label_40"));
        label_40->setGeometry(QRect(117, 25, 65, 16));
        label_43 = new QLabel(tab_5);
        label_43->setObjectName(QString::fromUtf8("label_43"));
        label_43->setGeometry(QRect(117, 106, 104, 16));
        label_42 = new QLabel(tab_5);
        label_42->setObjectName(QString::fromUtf8("label_42"));
        label_42->setGeometry(QRect(117, 79, 105, 16));
        line_MeaV = new QLineEdit(tab_5);
        line_MeaV->setObjectName(QString::fromUtf8("line_MeaV"));
        line_MeaV->setGeometry(QRect(240, 106, 91, 21));
        label_44 = new QLabel(tab_5);
        label_44->setObjectName(QString::fromUtf8("label_44"));
        label_44->setGeometry(QRect(117, 133, 117, 16));
        line_frame = new QLineEdit(tab_5);
        line_frame->setObjectName(QString::fromUtf8("line_frame"));
        line_frame->setGeometry(QRect(240, 52, 91, 21));
        line_batch = new QLineEdit(tab_5);
        line_batch->setObjectName(QString::fromUtf8("line_batch"));
        line_batch->setGeometry(QRect(240, 25, 91, 21));
        line_batch->setStyleSheet(QString::fromUtf8(""));
        line_channel = new QLineEdit(tab_5);
        line_channel->setObjectName(QString::fromUtf8("line_channel"));
        line_channel->setGeometry(QRect(240, 79, 91, 21));
        line_MerV = new QLineEdit(tab_5);
        line_MerV->setObjectName(QString::fromUtf8("line_MerV"));
        line_MerV->setGeometry(QRect(240, 133, 91, 21));
        tabWidget_2->addTab(tab_5, QString());

        verticalLayout_2->addWidget(tabWidget_2);

        verticalLayout_2->setStretch(0, 2);
        verticalLayout_2->setStretch(1, 1);
        verticalLayout_2->setStretch(2, 2);

        horizontalLayout->addWidget(groupBox1);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 2);
        horizontalLayout->setStretch(2, 1);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);
        tabWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox3->setTitle(QCoreApplication::translate("MainWindow", "\347\233\256\346\240\207\350\210\252\350\277\271", nullptr));
        groupBox4->setTitle(QCoreApplication::translate("MainWindow", " \346\227\245\345\277\227\350\276\223\345\207\272", nullptr));
        groupBox2->setTitle(QCoreApplication::translate("MainWindow", "\345\234\272\346\231\257\346\230\276\347\244\272", nullptr));
        groupBox1->setTitle(QString());
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "\345\217\202\346\225\260\350\256\276\347\275\256", nullptr));
#if QT_CONFIG(tooltip)
        tabWidget->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_10->setText(QCoreApplication::translate("MainWindow", "\351\207\207\346\240\267\347\216\207\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\350\265\267\345\247\213\350\275\275\351\242\221\357\274\232", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "\345\270\247\351\227\264\351\227\264\351\232\224\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\345\270\247\346\225\260\357\274\232", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "PRT\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\345\244\251\347\272\277\351\230\265\345\210\227\346\225\260\357\274\232", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\350\204\211\345\256\275\357\274\232", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\344\277\241\345\217\267\345\270\246\345\256\275\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\350\204\211\345\206\262\351\207\207\346\240\267\346\225\260\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\350\260\203\351\242\221\350\204\211\345\206\262\346\225\260\357\274\232", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "\345\270\247", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "\344\270\252", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "\344\270\252", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "\344\270\252", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "GHz", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "MHz", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "us", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "us", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "ksps", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "ms", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "\351\233\267\350\276\276\345\217\202\346\225\260", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "\346\211\251\345\261\225\345\277\253\346\213\215\346\225\260\357\274\232", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "\347\247\257\347\264\257\345\270\247\346\225\260\357\274\232", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "\346\243\200\346\265\213\351\227\250\351\231\220\357\274\232", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "\345\271\262\346\211\260\345\210\240\351\231\244\350\267\235\347\246\273\357\274\232", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "\347\212\266\346\200\201\350\275\254\347\247\273\347\251\272\351\227\264\357\274\232", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "\350\241\245\345\205\205\345\210\207\345\220\221\351\200\237\345\272\246\357\274\232", nullptr));
        label_28->setText(QCoreApplication::translate("MainWindow", "\345\217\226\345\270\247\351\227\264\351\232\224\357\274\232", nullptr));
        label_31->setText(QCoreApplication::translate("MainWindow", "\345\270\247", nullptr));
        label_32->setText(QCoreApplication::translate("MainWindow", "\344\270\252", nullptr));
        label_33->setText(QCoreApplication::translate("MainWindow", "\344\270\252", nullptr));
        label_34->setText(QString());
        label_35->setText(QCoreApplication::translate("MainWindow", "\344\270\252", nullptr));
        label_36->setText(QCoreApplication::translate("MainWindow", "\344\270\252", nullptr));
        label_37->setText(QCoreApplication::translate("MainWindow", "\345\270\247", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "MSKCF-TBD\345\217\202\346\225\260", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\350\275\275\345\205\245", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266\350\267\257\345\276\204\357\274\232", nullptr));
        Btn_GetDir->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        Btn_Proc->setText(QCoreApplication::translate("MainWindow", " \350\275\275\345\205\245\345\271\266\345\244\204\347\220\206", nullptr));
        Btn_draw_auto->setText(QCoreApplication::translate("MainWindow", "\350\207\252\345\212\250\347\273\230\345\210\266", nullptr));
        label_45->setText(QCoreApplication::translate("MainWindow", "\345\270\247\345\272\217\357\274\232", nullptr));
        label_46->setText(QCoreApplication::translate("MainWindow", "\345\244\204\347\220\206\346\211\271\346\254\241\357\274\232", nullptr));
        label_47->setText(QCoreApplication::translate("MainWindow", "RD\350\260\261\345\244\251\347\272\277\351\200\232\351\201\223\345\217\267\357\274\232", nullptr));
        label_48->setText(QCoreApplication::translate("MainWindow", "\351\207\217\346\265\213\345\271\263\351\235\242\351\200\237\345\272\246\345\217\267\357\274\232", nullptr));
        label_49->setText(QCoreApplication::translate("MainWindow", "\345\200\274\345\207\275\346\225\260\345\271\263\351\235\242\351\200\237\345\272\246\345\217\267\357\274\232", nullptr));
        label_50->setText(QCoreApplication::translate("MainWindow", "\345\210\260", nullptr));
        label_51->setText(QCoreApplication::translate("MainWindow", "\345\210\260", nullptr));
        label_52->setText(QCoreApplication::translate("MainWindow", "\346\227\266\345\273\266\357\274\232", nullptr));
        label_53->setText(QCoreApplication::translate("MainWindow", "ms", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(sd), QCoreApplication::translate("MainWindow", "\350\207\252\345\212\250\345\233\236\346\224\276", nullptr));
        Btn_draw->setText(QCoreApplication::translate("MainWindow", " \346\211\213\345\212\250\347\273\230\345\210\266", nullptr));
        label_41->setText(QCoreApplication::translate("MainWindow", "\345\270\247\345\272\217\357\274\232", nullptr));
        label_40->setText(QCoreApplication::translate("MainWindow", "\345\244\204\347\220\206\346\211\271\346\254\241\357\274\232", nullptr));
        label_43->setText(QCoreApplication::translate("MainWindow", "\351\207\217\346\265\213\345\271\263\351\235\242\351\200\237\345\272\246\345\217\267\357\274\232", nullptr));
        label_42->setText(QCoreApplication::translate("MainWindow", "RD\350\260\261\345\244\251\347\272\277\351\200\232\351\201\223\345\217\267\357\274\232", nullptr));
        label_44->setText(QCoreApplication::translate("MainWindow", "\345\200\274\345\207\275\346\225\260\345\271\263\351\235\242\351\200\237\345\272\246\345\217\267\357\274\232", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_5), QCoreApplication::translate("MainWindow", "\346\211\213\345\212\250\345\233\236\346\224\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
