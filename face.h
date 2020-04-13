#ifndef FACE_H
#define FACE_H

#include <QWidget>
#include <QDateTime>
#include <QMouseEvent>
#include "QDebug"
#include "QThread"

namespace Ui {
class Face;
}

class Face : public QWidget
{
    Q_OBJECT

public:
    explicit Face(QWidget *parent = 0);
    ~Face();

    void setObject(QPixmap , QString, int);

private:
    Ui::Face *ui;
};

#endif // FACE_H
