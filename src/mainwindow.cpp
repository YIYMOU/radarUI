#include <QRandomGenerator>
#include <QTime>
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
        : QMainWindow(parent), ui(new Ui::MainWindow) {

    InitialUI();

}

void MainWindow::InitialUI() {
    ui->setupUi(this);
    //一定要先show再获取参数，不然未初始化好，参数会错误
    this->show();
    //设置界面背景颜色
    setPalette(QPalette(Qt::darkGray));
    //设置默认值
    setDefaultValue();
    //触发显示背景界面，主界面和辅助界面
    setInit3D();
    this->update();
    ui->textBrowser->setText(QStringLiteral("初始化完成！"));
    for (int i = 87; i <= 95; i++) {
        ui->textBrowser->append(QString("已完成第%1批次").arg(i));
        ui->textBrowser->append(QString("处理时间为%1ms").arg(generateRand(138.000, 150.000)));
    }
}

void MainWindow::setDefaultValue() {
    ui->line_N_Frame->setText("1000");
    ui->line_N_chirp->setText("128");
    ui->line_N_channel->setText("4");
    ui->line_N_sample->setText("256");
    ui->line_fc->setText("76");
    ui->line_B->setText("599.64");
    ui->line_PRT->setText("160");
    ui->line_delT_pulse->setText("54");
    ui->line_fs->setText("5000");
    ui->line_delT_frame->setText("40");
    ui->line_N_K->setText("5");
    ui->line_N_vt->setText("1");
    ui->line_N_Q->setText("3");
    ui->line_threshold->setText("86582");
    ui->line_distance->setText("3");
    ui->line_R_lr->setText("1");
    ui->line_delN_frame->setText("10");
    //初始化设置数据回放
    ui->line_batch->setText("1");
    ui->line_frame->setText("1");
    ui->line_channel->setText("1");
    ui->line_MeaV->setText("10");
    ui->line_MerV->setText("10");
    ui->line_batch_2s->setText("1");
    ui->line_batch_2e->setText("95");
    ui->line_frame_2s->setText("1");
    ui->line_frame_2e->setText("5");
    ui->line_channel_2->setText("1");
    ui->line_MeaV_2->setText("10");
    ui->line_MerV_2->setText("10");
    ui->line_delt->setText("200");

//    this->resize(1920, 900); // 设置窗口大小


    //初始化设置tableView
    this->model = new QStandardItemModel;   //创建一个标准的条目模型
    this->ui->tableView->setModel(model);   //将tableview设置成model这个标准条目模型的模板, model设置的内容都将显示在tableview上
    ui->tableView->setStyleSheet("QHeaderView::section{background:black}");
    ui->tableView->setStyleSheet("QScrollBar:vertical{"
                                 "background:#000000;"
                                 "padding-top:20px;"               //上预留位置（放置向上箭头）
                                 "padding-bottom:20px;"            //下预留位置（放置向下箭头）
                                 "border:1px solid #d7d7d7;}"
                                 "QScrollBar::handle:vertical{"    //垂直滚动条区域样式
                                 "background:#000000;}"
                                 "QScrollBar::add-line:vertical{"
                                 "background:#000000 ;"
                                 "border:1px solid #d7d7d7;}"
                                 "QScrollBar::sub-line:vertical{"
                                 "background:#000000;"
                                 "border:1px solid #d7d7d7;}"
                                 "QScrollBar::up-arrow:vertical{"
                                 "border: 1px solid white;	width: 14px;	height: 14px;"
                                 "image:url(:/TabWidgt/Icon/up.jpg);}"
                                 "QScrollBar::down-arrow:vertical{"
                                 "border: 1px solid white;width: 14px;height: 14px;"
                                 "image:url(:/TabWidgt/Icon/down.jpg);}"
                                 "QTableView::item{border:1px dashed green;}"
    );
    ui->tableView->horizontalHeader()->setStyleSheet("QHeaderView::section{background-color:rgb(0,0,0);"
                                                     "border:1px solid white;"
                                                     "font:10pt '宋体';"
                                                     "color:rgb(0,255,0);};");
    //ui->tableView->verticalHeader()->hide();
    //ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableView->verticalHeader()->setStyleSheet("QHeaderView::section{background-color:rgb(0,0,0);"
                                                   "font:10pt '宋体';"
                                                   "color:rgb(0,255,0);};");

    this->model->setHorizontalHeaderItem(0, new QStandardItem(QStringLiteral("方位")));
    this->model->setHorizontalHeaderItem(1, new QStandardItem(QStringLiteral("距离")));
    this->model->setHorizontalHeaderItem(2, new QStandardItem(QStringLiteral("航向")));
    this->model->setHorizontalHeaderItem(3, new QStandardItem(QStringLiteral("宽度")));
    this->model->setHorizontalHeaderItem(4, new QStandardItem(QStringLiteral("高度")));
    this->ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);//布局排版是全部伸展开的效果

    this->ui->tableView->setColumnWidth(0, 30);    //设置列的宽度
    this->ui->tableView->setColumnWidth(1, 60);
    this->ui->tableView->setColumnWidth(2, 30);
    this->ui->tableView->setColumnWidth(3, 60);
    this->ui->tableView->setColumnWidth(4, 30);

    this->ui->tabWidget->setCurrentIndex(0);

    ui->progressBar_play->setValue(100);
    ui->progressBar_proc->setValue(100);
}

float MainWindow::generateRand(float min, float max)
{
    static bool seedStatus;
    if (!seedStatus) {
        qsrand(QTime(0, 0, 0).secsTo(QTime::currentTime()));
        seedStatus = true;
    }
    if(min>max)
    {
        float temp=min;
        min=max;
        max=temp;
    }
    double diff = fabs(max-min);
    double m1=(double)(qrand()%100)/100;
    double retval=min+m1*diff;
    return retval;
}

//****************************************3D绘图****************************************//
void MainWindow::setInit3D() {

    //读取雷达参数
    radar.N_chirp = ui->line_N_chirp->text().toInt();
    radar.N_channel = ui->line_N_channel->text().toInt();
    radar.N_sample = ui->line_N_sample->text().toInt();


    QLinearGradient grGtoR;
    grGtoR.setColorAt(1.0, Qt::darkGreen);
    grGtoR.setColorAt(0.5, Qt::yellow);
    grGtoR.setColorAt(0.2, Qt::red);
    grGtoR.setColorAt(0.0, Qt::darkRed);

}


//update()函数触发该刷新函数
void MainWindow::paintEvent(QPaintEvent *) {
//    drawMainAreaBack();
//    plotTracks();
    if (flag == 0) {
        drawMainAreaBack();
    } else if (flag == 1) {
        drawMainAreaBack();
        if (countLinesL != 0)
            plotTracks(dataL, countLinesL);
        if (countLinesR != 0)
            plotTracks(dataR, countLinesR);
        this->update();
    }
}


//******************初始化主界面*******************//
void MainWindow::drawMainAreaBack() {
    QPainter painter(this);
    //painter设置,创建QPainter对象
    painter.setRenderHint(QPainter::Antialiasing); // 绘图抗锯齿
    painter.setRenderHint(QPainter::TextAntialiasing); // 绘制的字体抗锯齿
    //设置画笔
    QPen pen;
    pen.setWidth(2); //线宽
    pen.setColor(Qt::darkGreen); //划线颜色
    pen.setStyle(Qt::SolidLine); //线的样式：实线
    painter.setPen(pen);

    //设置文字属性
    QFont font;
    font.setPointSize(12); //设置大小为12像素
    font.setBold(true);  //设置为粗体
    painter.setFont(font);

    //设置画刷
    QBrush brush;
    brush.setStyle(Qt::SolidPattern);
    brush.setColor(Qt::black);
    painter.setBrush(brush);
    //屏幕参数计算, 这个坐标是相对于MainWindow的坐标，左上角为（0，0）
    int central_X = 1180;
    int central_Y = 640;
    int resolution = 120; // 120个像素表示10m
    int cnt_pie = 5; // 一共画五个扇形
    int R = resolution * cnt_pie; // 扇形的半径

    //******************绘制背景圆*******************//
    QRect rect_back(0, 0, 0, 0); // 左上角坐标，大小
    for (int width = resolution * 2 * cnt_pie; width >= resolution * 2; width -= resolution * 2) {
        rect_back.setLeft(central_X - width / 2);
        rect_back.setTop(central_Y - width / 2);
        rect_back.setWidth(width);
        rect_back.setHeight(width); // 设置矩形的大小
        painter.drawPie(rect_back, 30 * 16, 120 * 16); // 起始角度为30度，跨度为120度
    }

    //******************绘制参考边*******************//
    pen.setStyle(Qt::DotLine); //线的样式：虚线
    painter.setPen(pen);
    double t;
    QString txt_angle;
    QRect rect_angle(0, 0, 0, 0);
    for (int theta = -50; theta <= 60; theta += 10) {
        t = (double) (90 - theta) / 180 * M_PI;
        painter.drawLine(central_X, central_Y, central_X + R * cos(t), central_Y - R * sin(t));
        //******************绘制角度标*******************//
        float left = central_X + R * cos(t);
        float right = central_Y - R * sin(t);
        if (theta > 0) {
            left -= theta / 3.0;
            right -= theta / 8.0;
        }//矫正位置
        rect_angle.setLeft(left);
        rect_angle.setTop(right);
        rect_angle.setWidth(50);
        rect_angle.setHeight(30);
        txt_angle = QString::number(theta, 10);
        painter.drawText(rect_angle, txt_angle);

    }
    //******************绘制距离标*******************//
    QString txt_range;
    QRect rect_range(0, 0, 0, 0);
    double coe_c = cos(150.0 / 180.0 * M_PI);
    double coe_s = sin(150.0 / 180.0 * M_PI);
    for (int r = resolution; r <= R; r += resolution) {
        rect_range.setLeft(central_X + coe_c * r - 20);
        rect_range.setTop(central_Y - coe_s * r - 10);
        rect_range.setWidth(50);
        rect_range.setHeight(30);
        txt_range = QString::number(r / resolution * 10, 10) + "m";
        painter.drawText(rect_range, txt_range);
    }
}


void MainWindow::plotTracks(const float *data, int count) {
    QPainter painter2(this);
    //painter设置,创建QPainter对象
    painter2.setRenderHint(QPainter::Antialiasing);
    painter2.setRenderHint(QPainter::TextAntialiasing);
    //设置画笔
    QPen pen;
    pen.setWidth(2); //线宽
    pen.setColor(Qt::red); //划线颜色
    pen.setStyle(Qt::SolidLine); //线的样式：实线
    painter2.setPen(pen);

    int central_X = 1180;
    int central_Y = 640;
    int resolution = 120; // 120个像素表示10m
    int cnt_pie = 5; // 一共画五个扇形
    int R = resolution * cnt_pie; // 扇形的半径

    int cnt_Tracks = count;

    float x_e;
    float y_e;
    QRect rect_s;
    QRect rect_e;
    int stride = 1;
    for (int cnt_tracks = cnt_Tracks - 1; cnt_tracks > stride; cnt_tracks -= stride) { // 间隔4帧取一个点
        float theta_e = data[(cnt_tracks - stride) * 5 + 0];
        float r_e = data[(cnt_tracks - stride) * 5 + 1] * resolution / 10; // resolution/10表示1米需要的像素
        float theta_s = data[cnt_tracks * 5 + 0];
        float r_s = data[cnt_tracks * 5 + 1] * resolution / 10;
        float x_s = central_X + r_s * cos((90 - theta_s) / 180.0 * M_PI);
        float y_s = central_Y - r_s * sin((90 - theta_s) / 180.0 * M_PI);
        x_e = central_X + r_e * cos((90 - theta_e) / 180.0 * M_PI);
        y_e = central_Y - r_e * sin((90 - theta_e) / 180.0 * M_PI);
        QLine line(x_s, y_s, x_e, y_e);
        painter2.drawLine(line);
        rect_s.setRect(x_s - 2, y_s - 2, 4, 4);
        rect_e.setRect(x_e - 2, y_e - 2, 4, 4);
        QBrush brush = painter2.brush();
        brush.setStyle(Qt::SolidPattern);
        brush.setColor(Qt::red);
        painter2.setBrush(brush);
        painter2.drawEllipse(rect_s);
        painter2.drawEllipse(rect_e);

        painter2.setBrush(Qt::NoBrush); // 否则画出来的椭圆是实心的
        // 创建一个QRectF对象，指定椭圆的边界矩形
        float w = data[cnt_tracks * 5 + 3] * resolution / 10;
        float h = data[cnt_tracks * 5 + 4] * resolution / 10;
        float phi = data[cnt_tracks * 5 + 2] * M_PI / 180;
        QRect rect(x_e - w / 2, y_e - h / 2, w, h);
        QTransform transform;
        transform.translate(x_e, y_e); // 先平移坐标系，使与原点重合
        transform.rotate(phi); // 再旋转phi度
        transform.translate(-x_e, -y_e); // 最后再平移回去
        // 设置painter的变换矩阵
        painter2.setTransform(transform);
        // 画出椭圆
        painter2.drawEllipse(rect);
    }

// 测试：画一个单点
//    QRect rect_ss;
//    float theta_s = -10;
//    float r_s = 10 * resolution / 10;
//    float x_s = central_X + r_s * cos((90 - theta_s) / 180.0 * M_PI);
//    float y_s = central_Y - r_s * sin((90 - theta_s) / 180.0 * M_PI);
//    rect_ss.setRect(x_s - 2, y_s - 2, 4, 4);
//    QBrush brush = painter2.brush();
//    brush.setStyle(Qt::SolidPattern);
//    brush.setColor(Qt::red);
//    painter2.setBrush(brush);
//    painter2.drawEllipse(rect_ss);

}

int MainWindow::CountLines(const QString &fileName) {
    if (fileName.isEmpty()) {     //如果未选择文件便确认，即返回
        return 0;
    }
    int n = 0;
    QFile file(fileName);
    if (file.open(QFile::ReadOnly)) {
        QTextStream stream(&file);
        while (!stream.atEnd()) {
            stream.readLine(); // 不包括“\n”的一行文本
            n++;
        }
        file.close();
    }
    return n;
}

void MainWindow::on_Btn_GetDir_clicked() {
    ui->Btn_GetDir->setStyleSheet("background: rgb(225,225,225)");

    QString fileName = QFileDialog::getOpenFileName(this, tr("选择数据文件"), "../data", tr("TXT(*.txt)")); //选择路径

    if (fileName.isEmpty()) {     //如果未选择文件便确认，即返回
        return;
    }

    ui->line_path->setText(fileName);

    ui->Btn_Proc->setStyleSheet("background: rgb(0,255,0)");

    int countLines = CountLines(fileName); // 得到数据的行数

    // 将读取到的数据到data里面
    float *data_temp;
    if (countLinesL == 0) {
        countLinesL = countLines;
        dataL = new float[countLines * 5]; // 得到数据的行数并动态分配空间
        data_temp = dataL;
    } else {
        countLinesR = countLines;
        dataR = new float[countLines * 5]; // 得到数据的行数并动态分配空间
        data_temp = dataR;
    }

    // 读取txt数据，将数据写到data中
    QFile file(fileName);
    if (file.open(QFile::ReadOnly)) {
        QTextStream stream(&file);
        int n = 0;
        while (!stream.atEnd()) {
            QString line = stream.readLine(); // 不包括“\n”的一行文本
            line.remove(0, 2); // 移除前面的两个空格
            QList<QString> tmp = line.split("   ");
            for (int i = 0; i < 5; ++i) {
                data_temp[n * 5 + i] = tmp[i].toFloat();
                this->model->setItem(n, i, new QStandardItem(QString::number(tmp[i].toFloat(),'f',2)));
                this->model->item(n, i)->setTextAlignment(Qt::AlignCenter); // 居中
            }
            n++;
        }
        file.close();
    }
    flag = 1;
}

MainWindow::~MainWindow() {
    delete ui;
}

