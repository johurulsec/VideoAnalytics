#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "QDebug"
#include <QMainWindow>
#include "QStringList"
#include "face.h"
#include <QScrollBar>
#include "QFileDialog"
#include "QMessageBox"

class QGridLayout;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    QGridLayout *mainLayout;
    void showDifferentTypeImage();
    void showVideoFiles();

private slots:
    void on_pushButton_select_video_file_clicked();

private:
    Ui::MainWindow *ui;
    QStringList colors, category, vehicles_type;

    QGridLayout *grid_show_all_faces; // faces show in Grid layout
    int row_index = 0; int column_index = 0; // Grid layout index
    QList<Face*> faceList;

    QGridLayout *grid_show_all_video; // faces show in Grid layout
    int row_index_ = 0; int column_index_ = 0; // Grid layout index
    QList<Face*> videoList;

    QString file_name;
    bool valid;
    QPixmap image;

};

#endif // MAINWINDOW_H
