#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <opencv2/opencv.hpp>
#include "cvmattoqimage.h"

using namespace cv;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    // leeres Bild definieren
    Mat image(400, 400, CV_8UC3);

    // set background color
    Scalar yellow = Scalar(0, 200, 200);
    image.setTo(yellow);

    // draw a red rectangle
    Scalar red = Scalar(0, 0, 255);
    rectangle(image, Point(100,100), Point(200,200), red, 3);

    // draw cyan colored text
    Scalar cyan = Scalar(255, 255, 0);
    putText(image, "Hello World", Point(50, 150), FONT_HERSHEY_SIMPLEX, 2, cyan, 2);

    // Mat-Objekt darstellen
    // convert Mat object to QPixmap object
    QPixmap pixmap = cvMatToQPixmap(image);

    // set QPixmap object for QLabel
    ui->imageLabel->setPixmap(pixmap);

}

MainWindow::~MainWindow()
{
    delete ui;
}
