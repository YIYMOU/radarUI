#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QFileDialog>
#include <QStandardItemModel>
#include <QPainter>
#include <QtMath>
#include <QTextStream>
#include <QDebug>


#include "para.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    int countLinesL = 0; // 用于保存数据的行数=航迹点数
    int countLinesR = 0; // 用于保存数据的行数=航迹点数
//    float *data;
    float *dataL;
    float *dataR;

    QStandardItemModel *model;

    struct Radar_para radar;
    struct ProcSetting ps;


    int flag = 0;//画图标志符号 0 只画背景  1 画背景和目标

    void InitialUI();

    void setDefaultValue();

    void drawMainAreaBack();

    void paintEvent(QPaintEvent *) override;

    void plotTracks(const float *data, int count);

    void setInit3D();

    static int CountLines(const QString& fileName);

private slots:
    void on_Btn_GetDir_clicked();

};
#endif // MAINWINDOW_H
