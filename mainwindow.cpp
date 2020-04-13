#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    qDebug()<<"Mainwindow call";

    ui->face_check->setChecked(true);//default
    ui->male_check->setChecked(true);//default

    colors << "Red" << "Green" <<"Blue" << "Black" <<"White";
    ui->pick_color_combobox->addItems(colors);

    category<<"Large Vehicle"<<"Sedan";
    ui->category_combobox->addItems(category);

    vehicles_type<<"Car"<<"Bus"<<"Truck"<<"CNG"<<"Bicycle";
    ui->vehicles_combobox->addItems(vehicles_type);

    mainLayout = new QGridLayout;
    grid_show_all_faces = new QGridLayout;
    ui->scrollAreaWidgetContents->setLayout(grid_show_all_faces);
    for(int i=0;i<27;i++)
        showDifferentTypeImage();


    grid_show_all_video = new QGridLayout;
    ui->scrollAreaWidgetContents_2->setLayout(grid_show_all_video);

    for(int i=0;i<4;i++){
        showVideoFiles();
    }
}

MainWindow::~MainWindow()
{
    qDebug()<<"destructor of mainwindow";
    delete ui;
}

void MainWindow::showDifferentTypeImage()
{
    Face *newFace = new Face();

    QPixmap pic;
    pic.load("/home/sigmind/WC-Tegra-DS/faces/us/xhuvom.png");

    newFace->setObject(pic, "name", 1);

    if (!pic.isNull()){
        //qDebug()<<"pic is not null"<<" faceList.size() >>"<<faceList.size();
        if (faceList.size() < 25){// Checked size of list is 100 or not!
            qDebug()<<"facelist less than 25";
            faceList.push_back(newFace); // Added face in Lists
            grid_show_all_faces->addWidget(newFace, row_index, column_index); // load data into grid layout.

        }else {
            qDebug()<<"face list greater than 25";
            delete faceList.at(0); // deallocation done
            faceList.removeFirst(); // remove first element
            faceList.push_back(newFace); // face added into list

            QListIterator<Face*> iter(faceList); // iterator
            iter.toFront(); // iterator start from first


            // set face into grid layout which are new come
            for (int i = 0; i < 5; ++i){
                for (int j = 0; j < 5; ++j){
                    // for 100 cell
                    grid_show_all_faces->addWidget(iter.next(), i, j); // load data into grid layout.

                }

            }

        }
        //  Grid index customize
        if(column_index == 5){
            qDebug()<<"colum index equal 10";
            row_index++;
            column_index = -1;
        }

        if(row_index == 5){
            qDebug()<<"row equal 10";
            row_index = 0;
        }
        column_index++;
    }

    ui->scrollArea->verticalScrollBar()->setSliderPosition(ui->scrollArea->verticalScrollBar()->maximum());

}

void MainWindow::showVideoFiles()
{
    Face *videoObj = new Face();

    QPixmap pic = image;
    //pic.load("/home/sigmind/AnalyticsDemo/video.jpeg");

    videoObj->setObject(pic, "name", 1);

    if (!pic.isNull()){
        //qDebug()<<"pic is not null"<<" faceList.size() >>"<<faceList.size();
        if (videoList.size() < 4){// Checked size of list is 100 or not!
            qDebug()<<"facelist less than 25";
            videoList.push_back(videoObj); // Added face in Lists
            grid_show_all_video->addWidget(videoObj, row_index_, column_index_); // load data into grid layout.

        }else {
            qDebug()<<"face list greater than 25";
            delete videoList.at(0); // deallocation done
            videoList.removeFirst(); // remove first element
            videoList.push_back(videoObj); // face added into list

            QListIterator<Face*> iter(videoList); // iterator
            iter.toFront(); // iterator start from first


            // set face into grid layout which are new come
            for (int i = 0; i < 1; ++i){
                for (int j = 0; j < 4; ++j){
                    // for 100 cell
                    grid_show_all_video->addWidget(iter.next(), i, j); // load data into grid layout.

                }

            }

        }
        //  Grid index customize
        if(column_index_ == 0){
            qDebug()<<"colum index equal 10";
            row_index_++;
            column_index_ = -1;
        }

        if(row_index_ == 4){
            qDebug()<<"row equal 10";
            row_index_ = 0;
        }
        column_index_++;
    }

    ui->scrollArea_2->verticalScrollBar()->setSliderPosition(ui->scrollArea_2->verticalScrollBar()->maximum());

}

void MainWindow::on_pushButton_select_video_file_clicked()
{
    qDebug()<<"video file select here";
    file_name = QFileDialog::getOpenFileName(this, tr("choose"), "", tr("videos (*.*)"));

    if(QString::compare(file_name, QString()) != 0){
        valid = image.load(file_name);
        qDebug()<<"valid check >>";

        if(valid){
            qDebug()<<"valid check if >>";
            showVideoFiles();
//            image = image.scaledToWidth(ui->label_image_show->width(), Qt::SmoothTransformation);
//            image = image.scaledToHeight(ui->label_image_show->height(), Qt::SmoothTransformation);
//            ui->label_image_show->setPixmap(QPixmap::fromImage(image));

        }
        else {
            QMessageBox msg_box;
            msg_box.setText("Take a video file");
            msg_box.exec();
            //ui->label_image_show->setFocus();
        }
    }
}
