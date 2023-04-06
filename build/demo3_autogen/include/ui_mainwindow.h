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
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout;
    QLineEdit *line_path;
    QLabel *label;
    QPushButton *Btn_GetDir;
    QPushButton *Btn_Proc;
    QProgressBar *progressBar_proc;
    QGroupBox *groupBox_3;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_4;
    QLabel *label_2;
    QLineEdit *line_N_Frame;
    QLabel *label_13;
    QFrame *line;
    QLabel *label_7;
    QLineEdit *line_B;
    QLabel *label_18;
    QLabel *label_3;
    QLineEdit *line_N_channel;
    QLabel *label_14;
    QLabel *label_8;
    QLineEdit *line_PRT;
    QLabel *label_19;
    QLabel *label_4;
    QLineEdit *line_N_chirp;
    QLabel *label_15;
    QLabel *label_9;
    QLineEdit *line_delT_pulse;
    QLabel *label_20;
    QLabel *label_5;
    QLineEdit *line_N_sample;
    QLabel *label_16;
    QLabel *label_10;
    QLineEdit *line_fs;
    QLabel *label_21;
    QLabel *label_6;
    QLineEdit *line_fc;
    QLabel *label_17;
    QLabel *label_11;
    QLineEdit *line_delT_frame;
    QLabel *label_22;
    QWidget *tab_2;
    QGridLayout *gridLayout_3;
    QLabel *label_12;
    QLineEdit *line_N_K;
    QLabel *label_31;
    QLabel *label_23;
    QLineEdit *line_N_vt;
    QLabel *label_32;
    QLabel *label_24;
    QLineEdit *line_N_Q;
    QLabel *label_33;
    QLabel *label_25;
    QLineEdit *line_threshold;
    QLabel *label_34;
    QLabel *label_26;
    QLineEdit *line_distance;
    QLabel *label_35;
    QLabel *label_27;
    QLineEdit *line_R_lr;
    QLabel *label_36;
    QLabel *label_28;
    QLineEdit *line_delN_frame;
    QLabel *label_37;
    QTabWidget *tabWidget_2;
    QWidget *sd;
    QGridLayout *gridLayout_6;
    QLabel *label_46;
    QLineEdit *line_batch_2s;
    QLabel *label_50;
    QLineEdit *line_batch_2e;
    QLabel *label_45;
    QLineEdit *line_frame_2s;
    QLabel *label_51;
    QLineEdit *line_frame_2e;
    QLabel *label_47;
    QLineEdit *line_channel_2;
    QLabel *label_48;
    QLineEdit *line_MeaV_2;
    QLabel *label_49;
    QLineEdit *line_MerV_2;
    QLabel *label_52;
    QLineEdit *line_delt;
    QLabel *label_53;
    QProgressBar *progressBar_play;
    QPushButton *Btn_draw_auto;
    QWidget *tab_5;
    QGridLayout *gridLayout_5;
    QLabel *label_40;
    QLineEdit *line_batch;
    QLabel *label_41;
    QLineEdit *line_frame;
    QLabel *label_42;
    QLineEdit *line_channel;
    QLabel *label_43;
    QLineEdit *line_MeaV;
    QLabel *label_44;
    QLineEdit *line_MerV;
    QPushButton *Btn_draw;
    QGroupBox *groupBox2;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox4;
    QVBoxLayout *verticalLayout_5;
    QTextBrowser *textBrowser;
    QGroupBox *groupBox3;
    QVBoxLayout *verticalLayout_6;
    QTableView *tableView;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1866, 1108);
        MainWindow->setMinimumSize(QSize(0, 0));
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        MainWindow->setBaseSize(QSize(0, 0));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox_4 = new QGroupBox(groupBox);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255,255,255);"));
        gridLayout = new QGridLayout(groupBox_4);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        line_path = new QLineEdit(groupBox_4);
        line_path->setObjectName(QString::fromUtf8("line_path"));

        gridLayout->addWidget(line_path, 0, 1, 1, 1);

        label = new QLabel(groupBox_4);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        Btn_GetDir = new QPushButton(groupBox_4);
        Btn_GetDir->setObjectName(QString::fromUtf8("Btn_GetDir"));

        gridLayout->addWidget(Btn_GetDir, 0, 2, 1, 1);

        Btn_Proc = new QPushButton(groupBox_4);
        Btn_Proc->setObjectName(QString::fromUtf8("Btn_Proc"));

        gridLayout->addWidget(Btn_Proc, 1, 2, 1, 1);

        progressBar_proc = new QProgressBar(groupBox_4);
        progressBar_proc->setObjectName(QString::fromUtf8("progressBar_proc"));
        progressBar_proc->setValue(24);

        gridLayout->addWidget(progressBar_proc, 1, 0, 1, 2);


        verticalLayout->addWidget(groupBox_4);

        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255,255,255);"));
        tabWidget = new QTabWidget(groupBox_3);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 20, 411, 401));
        tabWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255,255,255);"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_4 = new QGridLayout(tab);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_4->addWidget(label_2, 0, 0, 1, 1);

        line_N_Frame = new QLineEdit(tab);
        line_N_Frame->setObjectName(QString::fromUtf8("line_N_Frame"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(line_N_Frame->sizePolicy().hasHeightForWidth());
        line_N_Frame->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(line_N_Frame, 0, 1, 1, 1);

        label_13 = new QLabel(tab);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_4->addWidget(label_13, 0, 2, 1, 1);

        line = new QFrame(tab);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_4->addWidget(line, 0, 3, 5, 1);

        label_7 = new QLabel(tab);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_4->addWidget(label_7, 0, 4, 1, 1);

        line_B = new QLineEdit(tab);
        line_B->setObjectName(QString::fromUtf8("line_B"));
        sizePolicy.setHeightForWidth(line_B->sizePolicy().hasHeightForWidth());
        line_B->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(line_B, 0, 5, 1, 1);

        label_18 = new QLabel(tab);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout_4->addWidget(label_18, 0, 6, 1, 1);

        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_4->addWidget(label_3, 1, 0, 1, 1);

        line_N_channel = new QLineEdit(tab);
        line_N_channel->setObjectName(QString::fromUtf8("line_N_channel"));
        sizePolicy.setHeightForWidth(line_N_channel->sizePolicy().hasHeightForWidth());
        line_N_channel->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(line_N_channel, 1, 1, 1, 1);

        label_14 = new QLabel(tab);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_4->addWidget(label_14, 1, 2, 1, 1);

        label_8 = new QLabel(tab);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_4->addWidget(label_8, 1, 4, 1, 1);

        line_PRT = new QLineEdit(tab);
        line_PRT->setObjectName(QString::fromUtf8("line_PRT"));
        sizePolicy.setHeightForWidth(line_PRT->sizePolicy().hasHeightForWidth());
        line_PRT->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(line_PRT, 1, 5, 1, 1);

        label_19 = new QLabel(tab);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout_4->addWidget(label_19, 1, 6, 1, 1);

        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_4->addWidget(label_4, 2, 0, 1, 1);

        line_N_chirp = new QLineEdit(tab);
        line_N_chirp->setObjectName(QString::fromUtf8("line_N_chirp"));
        sizePolicy.setHeightForWidth(line_N_chirp->sizePolicy().hasHeightForWidth());
        line_N_chirp->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(line_N_chirp, 2, 1, 1, 1);

        label_15 = new QLabel(tab);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_4->addWidget(label_15, 2, 2, 1, 1);

        label_9 = new QLabel(tab);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_4->addWidget(label_9, 2, 4, 1, 1);

        line_delT_pulse = new QLineEdit(tab);
        line_delT_pulse->setObjectName(QString::fromUtf8("line_delT_pulse"));
        sizePolicy.setHeightForWidth(line_delT_pulse->sizePolicy().hasHeightForWidth());
        line_delT_pulse->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(line_delT_pulse, 2, 5, 1, 1);

        label_20 = new QLabel(tab);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout_4->addWidget(label_20, 2, 6, 1, 1);

        label_5 = new QLabel(tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_4->addWidget(label_5, 3, 0, 1, 1);

        line_N_sample = new QLineEdit(tab);
        line_N_sample->setObjectName(QString::fromUtf8("line_N_sample"));
        sizePolicy.setHeightForWidth(line_N_sample->sizePolicy().hasHeightForWidth());
        line_N_sample->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(line_N_sample, 3, 1, 1, 1);

        label_16 = new QLabel(tab);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_4->addWidget(label_16, 3, 2, 1, 1);

        label_10 = new QLabel(tab);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_4->addWidget(label_10, 3, 4, 1, 1);

        line_fs = new QLineEdit(tab);
        line_fs->setObjectName(QString::fromUtf8("line_fs"));
        sizePolicy.setHeightForWidth(line_fs->sizePolicy().hasHeightForWidth());
        line_fs->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(line_fs, 3, 5, 1, 1);

        label_21 = new QLabel(tab);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        gridLayout_4->addWidget(label_21, 3, 6, 1, 1);

        label_6 = new QLabel(tab);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_4->addWidget(label_6, 4, 0, 1, 1);

        line_fc = new QLineEdit(tab);
        line_fc->setObjectName(QString::fromUtf8("line_fc"));
        sizePolicy.setHeightForWidth(line_fc->sizePolicy().hasHeightForWidth());
        line_fc->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(line_fc, 4, 1, 1, 1);

        label_17 = new QLabel(tab);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_4->addWidget(label_17, 4, 2, 1, 1);

        label_11 = new QLabel(tab);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_4->addWidget(label_11, 4, 4, 1, 1);

        line_delT_frame = new QLineEdit(tab);
        line_delT_frame->setObjectName(QString::fromUtf8("line_delT_frame"));
        sizePolicy.setHeightForWidth(line_delT_frame->sizePolicy().hasHeightForWidth());
        line_delT_frame->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(line_delT_frame, 4, 5, 1, 1);

        label_22 = new QLabel(tab);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        gridLayout_4->addWidget(label_22, 4, 6, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_3 = new QGridLayout(tab_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_12 = new QLabel(tab_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_3->addWidget(label_12, 0, 0, 1, 1);

        line_N_K = new QLineEdit(tab_2);
        line_N_K->setObjectName(QString::fromUtf8("line_N_K"));

        gridLayout_3->addWidget(line_N_K, 0, 1, 1, 1);

        label_31 = new QLabel(tab_2);
        label_31->setObjectName(QString::fromUtf8("label_31"));

        gridLayout_3->addWidget(label_31, 0, 2, 1, 1);

        label_23 = new QLabel(tab_2);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        gridLayout_3->addWidget(label_23, 1, 0, 1, 1);

        line_N_vt = new QLineEdit(tab_2);
        line_N_vt->setObjectName(QString::fromUtf8("line_N_vt"));

        gridLayout_3->addWidget(line_N_vt, 1, 1, 1, 1);

        label_32 = new QLabel(tab_2);
        label_32->setObjectName(QString::fromUtf8("label_32"));

        gridLayout_3->addWidget(label_32, 1, 2, 1, 1);

        label_24 = new QLabel(tab_2);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        gridLayout_3->addWidget(label_24, 2, 0, 1, 1);

        line_N_Q = new QLineEdit(tab_2);
        line_N_Q->setObjectName(QString::fromUtf8("line_N_Q"));

        gridLayout_3->addWidget(line_N_Q, 2, 1, 1, 1);

        label_33 = new QLabel(tab_2);
        label_33->setObjectName(QString::fromUtf8("label_33"));

        gridLayout_3->addWidget(label_33, 2, 2, 1, 1);

        label_25 = new QLabel(tab_2);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        gridLayout_3->addWidget(label_25, 3, 0, 1, 1);

        line_threshold = new QLineEdit(tab_2);
        line_threshold->setObjectName(QString::fromUtf8("line_threshold"));

        gridLayout_3->addWidget(line_threshold, 3, 1, 1, 1);

        label_34 = new QLabel(tab_2);
        label_34->setObjectName(QString::fromUtf8("label_34"));

        gridLayout_3->addWidget(label_34, 3, 3, 1, 1);

        label_26 = new QLabel(tab_2);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        gridLayout_3->addWidget(label_26, 4, 0, 1, 1);

        line_distance = new QLineEdit(tab_2);
        line_distance->setObjectName(QString::fromUtf8("line_distance"));

        gridLayout_3->addWidget(line_distance, 4, 1, 1, 1);

        label_35 = new QLabel(tab_2);
        label_35->setObjectName(QString::fromUtf8("label_35"));

        gridLayout_3->addWidget(label_35, 4, 2, 1, 1);

        label_27 = new QLabel(tab_2);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        gridLayout_3->addWidget(label_27, 5, 0, 1, 1);

        line_R_lr = new QLineEdit(tab_2);
        line_R_lr->setObjectName(QString::fromUtf8("line_R_lr"));

        gridLayout_3->addWidget(line_R_lr, 5, 1, 1, 1);

        label_36 = new QLabel(tab_2);
        label_36->setObjectName(QString::fromUtf8("label_36"));

        gridLayout_3->addWidget(label_36, 5, 2, 1, 1);

        label_28 = new QLabel(tab_2);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        gridLayout_3->addWidget(label_28, 6, 0, 1, 1);

        line_delN_frame = new QLineEdit(tab_2);
        line_delN_frame->setObjectName(QString::fromUtf8("line_delN_frame"));

        gridLayout_3->addWidget(line_delN_frame, 6, 1, 1, 1);

        label_37 = new QLabel(tab_2);
        label_37->setObjectName(QString::fromUtf8("label_37"));

        gridLayout_3->addWidget(label_37, 6, 2, 1, 1);

        tabWidget->addTab(tab_2, QString());

        verticalLayout->addWidget(groupBox_3);

        tabWidget_2 = new QTabWidget(groupBox);
        tabWidget_2->setObjectName(QString::fromUtf8("tabWidget_2"));
        tabWidget_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255,255,255);"));
        sd = new QWidget();
        sd->setObjectName(QString::fromUtf8("sd"));
        gridLayout_6 = new QGridLayout(sd);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        label_46 = new QLabel(sd);
        label_46->setObjectName(QString::fromUtf8("label_46"));

        gridLayout_6->addWidget(label_46, 0, 0, 1, 1);

        line_batch_2s = new QLineEdit(sd);
        line_batch_2s->setObjectName(QString::fromUtf8("line_batch_2s"));
        line_batch_2s->setStyleSheet(QString::fromUtf8(""));

        gridLayout_6->addWidget(line_batch_2s, 0, 1, 1, 1);

        label_50 = new QLabel(sd);
        label_50->setObjectName(QString::fromUtf8("label_50"));

        gridLayout_6->addWidget(label_50, 0, 2, 1, 1);

        line_batch_2e = new QLineEdit(sd);
        line_batch_2e->setObjectName(QString::fromUtf8("line_batch_2e"));
        line_batch_2e->setStyleSheet(QString::fromUtf8(""));

        gridLayout_6->addWidget(line_batch_2e, 0, 3, 1, 1);

        label_45 = new QLabel(sd);
        label_45->setObjectName(QString::fromUtf8("label_45"));

        gridLayout_6->addWidget(label_45, 1, 0, 1, 1);

        line_frame_2s = new QLineEdit(sd);
        line_frame_2s->setObjectName(QString::fromUtf8("line_frame_2s"));

        gridLayout_6->addWidget(line_frame_2s, 1, 1, 1, 1);

        label_51 = new QLabel(sd);
        label_51->setObjectName(QString::fromUtf8("label_51"));

        gridLayout_6->addWidget(label_51, 1, 2, 1, 1);

        line_frame_2e = new QLineEdit(sd);
        line_frame_2e->setObjectName(QString::fromUtf8("line_frame_2e"));

        gridLayout_6->addWidget(line_frame_2e, 1, 3, 1, 1);

        label_47 = new QLabel(sd);
        label_47->setObjectName(QString::fromUtf8("label_47"));

        gridLayout_6->addWidget(label_47, 2, 0, 1, 1);

        line_channel_2 = new QLineEdit(sd);
        line_channel_2->setObjectName(QString::fromUtf8("line_channel_2"));

        gridLayout_6->addWidget(line_channel_2, 2, 1, 1, 1);

        label_48 = new QLabel(sd);
        label_48->setObjectName(QString::fromUtf8("label_48"));

        gridLayout_6->addWidget(label_48, 3, 0, 1, 1);

        line_MeaV_2 = new QLineEdit(sd);
        line_MeaV_2->setObjectName(QString::fromUtf8("line_MeaV_2"));

        gridLayout_6->addWidget(line_MeaV_2, 3, 1, 1, 1);

        label_49 = new QLabel(sd);
        label_49->setObjectName(QString::fromUtf8("label_49"));

        gridLayout_6->addWidget(label_49, 4, 0, 1, 1);

        line_MerV_2 = new QLineEdit(sd);
        line_MerV_2->setObjectName(QString::fromUtf8("line_MerV_2"));

        gridLayout_6->addWidget(line_MerV_2, 4, 1, 1, 1);

        label_52 = new QLabel(sd);
        label_52->setObjectName(QString::fromUtf8("label_52"));

        gridLayout_6->addWidget(label_52, 4, 2, 1, 1);

        line_delt = new QLineEdit(sd);
        line_delt->setObjectName(QString::fromUtf8("line_delt"));

        gridLayout_6->addWidget(line_delt, 4, 3, 1, 1);

        label_53 = new QLabel(sd);
        label_53->setObjectName(QString::fromUtf8("label_53"));

        gridLayout_6->addWidget(label_53, 4, 4, 1, 1);

        progressBar_play = new QProgressBar(sd);
        progressBar_play->setObjectName(QString::fromUtf8("progressBar_play"));
        progressBar_play->setValue(24);

        gridLayout_6->addWidget(progressBar_play, 5, 0, 1, 2);

        Btn_draw_auto = new QPushButton(sd);
        Btn_draw_auto->setObjectName(QString::fromUtf8("Btn_draw_auto"));

        gridLayout_6->addWidget(Btn_draw_auto, 5, 3, 1, 1);

        tabWidget_2->addTab(sd, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        gridLayout_5 = new QGridLayout(tab_5);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_40 = new QLabel(tab_5);
        label_40->setObjectName(QString::fromUtf8("label_40"));

        gridLayout_5->addWidget(label_40, 0, 0, 1, 1);

        line_batch = new QLineEdit(tab_5);
        line_batch->setObjectName(QString::fromUtf8("line_batch"));
        line_batch->setStyleSheet(QString::fromUtf8(""));

        gridLayout_5->addWidget(line_batch, 0, 1, 1, 1);

        label_41 = new QLabel(tab_5);
        label_41->setObjectName(QString::fromUtf8("label_41"));

        gridLayout_5->addWidget(label_41, 1, 0, 1, 1);

        line_frame = new QLineEdit(tab_5);
        line_frame->setObjectName(QString::fromUtf8("line_frame"));

        gridLayout_5->addWidget(line_frame, 1, 1, 1, 1);

        label_42 = new QLabel(tab_5);
        label_42->setObjectName(QString::fromUtf8("label_42"));

        gridLayout_5->addWidget(label_42, 2, 0, 1, 1);

        line_channel = new QLineEdit(tab_5);
        line_channel->setObjectName(QString::fromUtf8("line_channel"));

        gridLayout_5->addWidget(line_channel, 2, 1, 1, 1);

        label_43 = new QLabel(tab_5);
        label_43->setObjectName(QString::fromUtf8("label_43"));

        gridLayout_5->addWidget(label_43, 3, 0, 1, 1);

        line_MeaV = new QLineEdit(tab_5);
        line_MeaV->setObjectName(QString::fromUtf8("line_MeaV"));

        gridLayout_5->addWidget(line_MeaV, 3, 1, 1, 1);

        label_44 = new QLabel(tab_5);
        label_44->setObjectName(QString::fromUtf8("label_44"));

        gridLayout_5->addWidget(label_44, 4, 0, 1, 1);

        line_MerV = new QLineEdit(tab_5);
        line_MerV->setObjectName(QString::fromUtf8("line_MerV"));

        gridLayout_5->addWidget(line_MerV, 4, 1, 1, 1);

        Btn_draw = new QPushButton(tab_5);
        Btn_draw->setObjectName(QString::fromUtf8("Btn_draw"));

        gridLayout_5->addWidget(Btn_draw, 5, 1, 1, 1);

        tabWidget_2->addTab(tab_5, QString());

        verticalLayout->addWidget(tabWidget_2);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 2);
        verticalLayout->setStretch(2, 2);

        gridLayout_2->addWidget(groupBox, 0, 0, 2, 1);

        groupBox2 = new QGroupBox(centralwidget);
        groupBox2->setObjectName(QString::fromUtf8("groupBox2"));
        QFont font;
        font.setFamily(QString::fromUtf8("Consolas"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        groupBox2->setFont(font);

        gridLayout_2->addWidget(groupBox2, 0, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox4 = new QGroupBox(centralwidget);
        groupBox4->setObjectName(QString::fromUtf8("groupBox4"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Adobe Devanagari"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        groupBox4->setFont(font1);
        verticalLayout_5 = new QVBoxLayout(groupBox4);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        textBrowser = new QTextBrowser(groupBox4);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_5->addWidget(textBrowser);


        horizontalLayout->addWidget(groupBox4);

        groupBox3 = new QGroupBox(centralwidget);
        groupBox3->setObjectName(QString::fromUtf8("groupBox3"));
        groupBox3->setFont(font1);
        verticalLayout_6 = new QVBoxLayout(groupBox3);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        tableView = new QTableView(groupBox3);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setStyleSheet(QString::fromUtf8(""));
        tableView->setFrameShape(QFrame::StyledPanel);

        verticalLayout_6->addWidget(tableView);


        horizontalLayout->addWidget(groupBox3);

        horizontalLayout->setStretch(0, 2);
        horizontalLayout->setStretch(1, 3);

        gridLayout_2->addLayout(horizontalLayout, 1, 1, 1, 1);

        gridLayout_2->setRowStretch(0, 3);
        gridLayout_2->setRowStretch(1, 2);
        gridLayout_2->setColumnStretch(0, 1);
        gridLayout_2->setColumnStretch(1, 3);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);
        tabWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QString());
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\350\275\275\345\205\245", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266\350\267\257\345\276\204\357\274\232", nullptr));
        Btn_GetDir->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        Btn_Proc->setText(QCoreApplication::translate("MainWindow", " \350\275\275\345\205\245\345\271\266\345\244\204\347\220\206", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "\345\217\202\346\225\260\350\256\276\347\275\256", nullptr));
#if QT_CONFIG(tooltip)
        tabWidget->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_2->setText(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\345\270\247\346\225\260\357\274\232", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "\345\270\247", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\344\277\241\345\217\267\345\270\246\345\256\275\357\274\232", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "MHz", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\345\244\251\347\272\277\351\230\265\345\210\227\346\225\260\357\274\232", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "\344\270\252", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "PRT\357\274\232", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "us", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\350\260\203\351\242\221\350\204\211\345\206\262\346\225\260\357\274\232", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "\344\270\252", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\350\204\211\345\256\275\357\274\232", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "us", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\350\204\211\345\206\262\351\207\207\346\240\267\346\225\260\357\274\232", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "\344\270\252", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "\351\207\207\346\240\267\347\216\207\357\274\232", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "ksps", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\350\265\267\345\247\213\350\275\275\351\242\221\357\274\232", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "GHz", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "\345\270\247\351\227\264\351\227\264\351\232\224\357\274\232", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "ms", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "\351\233\267\350\276\276\345\217\202\346\225\260", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "\347\247\257\347\264\257\345\270\247\346\225\260\357\274\232", nullptr));
        label_31->setText(QCoreApplication::translate("MainWindow", "\345\270\247", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "\350\241\245\345\205\205\345\210\207\345\220\221\351\200\237\345\272\246\357\274\232", nullptr));
        label_32->setText(QCoreApplication::translate("MainWindow", "\344\270\252", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "\347\212\266\346\200\201\350\275\254\347\247\273\347\251\272\351\227\264\357\274\232", nullptr));
        label_33->setText(QCoreApplication::translate("MainWindow", "\344\270\252", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "\346\243\200\346\265\213\351\227\250\351\231\220\357\274\232", nullptr));
        label_34->setText(QString());
        label_26->setText(QCoreApplication::translate("MainWindow", "\345\271\262\346\211\260\345\210\240\351\231\244\350\267\235\347\246\273\357\274\232", nullptr));
        label_35->setText(QCoreApplication::translate("MainWindow", "\344\270\252", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "\346\211\251\345\261\225\345\277\253\346\213\215\346\225\260\357\274\232", nullptr));
        label_36->setText(QCoreApplication::translate("MainWindow", "\344\270\252", nullptr));
        label_28->setText(QCoreApplication::translate("MainWindow", "\345\217\226\345\270\247\351\227\264\351\232\224\357\274\232", nullptr));
        label_37->setText(QCoreApplication::translate("MainWindow", "\345\270\247", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "MSKCF-TBD\345\217\202\346\225\260", nullptr));
        label_46->setText(QCoreApplication::translate("MainWindow", "\345\244\204\347\220\206\346\211\271\346\254\241\357\274\232", nullptr));
        label_50->setText(QCoreApplication::translate("MainWindow", "\345\210\260", nullptr));
        label_45->setText(QCoreApplication::translate("MainWindow", "\345\270\247\345\272\217\357\274\232", nullptr));
        label_51->setText(QCoreApplication::translate("MainWindow", "\345\210\260", nullptr));
        label_47->setText(QCoreApplication::translate("MainWindow", "RD\350\260\261\345\244\251\347\272\277\351\200\232\351\201\223\345\217\267\357\274\232", nullptr));
        label_48->setText(QCoreApplication::translate("MainWindow", "\351\207\217\346\265\213\345\271\263\351\235\242\351\200\237\345\272\246\345\217\267\357\274\232", nullptr));
        label_49->setText(QCoreApplication::translate("MainWindow", "\345\200\274\345\207\275\346\225\260\345\271\263\351\235\242\351\200\237\345\272\246\345\217\267\357\274\232", nullptr));
        label_52->setText(QCoreApplication::translate("MainWindow", "\346\227\266\345\273\266\357\274\232", nullptr));
        label_53->setText(QCoreApplication::translate("MainWindow", "ms", nullptr));
        Btn_draw_auto->setText(QCoreApplication::translate("MainWindow", "\350\207\252\345\212\250\347\273\230\345\210\266", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(sd), QCoreApplication::translate("MainWindow", "\350\207\252\345\212\250\345\233\236\346\224\276", nullptr));
        label_40->setText(QCoreApplication::translate("MainWindow", "\345\244\204\347\220\206\346\211\271\346\254\241\357\274\232", nullptr));
        label_41->setText(QCoreApplication::translate("MainWindow", "\345\270\247\345\272\217\357\274\232", nullptr));
        label_42->setText(QCoreApplication::translate("MainWindow", "RD\350\260\261\345\244\251\347\272\277\351\200\232\351\201\223\345\217\267\357\274\232", nullptr));
        label_43->setText(QCoreApplication::translate("MainWindow", "\351\207\217\346\265\213\345\271\263\351\235\242\351\200\237\345\272\246\345\217\267\357\274\232", nullptr));
        label_44->setText(QCoreApplication::translate("MainWindow", "\345\200\274\345\207\275\346\225\260\345\271\263\351\235\242\351\200\237\345\272\246\345\217\267\357\274\232", nullptr));
        Btn_draw->setText(QCoreApplication::translate("MainWindow", " \346\211\213\345\212\250\347\273\230\345\210\266", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_5), QCoreApplication::translate("MainWindow", "\346\211\213\345\212\250\345\233\236\346\224\276", nullptr));
        groupBox2->setTitle(QCoreApplication::translate("MainWindow", "\347\273\223\346\236\234\346\230\276\347\244\272\345\214\272", nullptr));
        groupBox4->setTitle(QCoreApplication::translate("MainWindow", " \346\227\245\345\277\227\350\276\223\345\207\272", nullptr));
        groupBox3->setTitle(QCoreApplication::translate("MainWindow", "\347\233\256\346\240\207\350\210\252\350\277\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
