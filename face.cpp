#include "face.h"
#include "ui_face.h"

Face::Face(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Face)
{
    ui->setupUi(this);
}
void Face::setObject(QPixmap pic, QString name, int cam)
{
    qDebug()<<"set object call"<<cam++;;

    //pictr = pic;
    ui->faceLabel->setPixmap(pic);
    ui->faceLabel->setScaledContents( true );
    ui->faceLabel->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );
    //ui->faceLabel->setToolTip("Name: "+ name + "\n" + "camera: " + QString::number(cam) + "\n" + getCurrentTime());

}

Face::~Face()
{
    delete ui;
}
