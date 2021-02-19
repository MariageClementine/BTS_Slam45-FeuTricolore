#include "feutri.h"
#include <QDebug>

feuTri::feuTri(QWidget *parent) :
    QLabel(parent)
{
    etat="vert";
    vert = QPixmap(":/images/vert");
    orange = QPixmap(":/images/orange");
    rouge = QPixmap(":/images/rouge");
}

void feuTri::mousePressEvent(QMouseEvent *ev)
{
    qDebug()<<"void feuTri::mousePressEvent(QMouseEvent *ev)";
    //on vient de cliquer sur le feu
    setPixmap(orange);
}

void feuTri::mouseReleaseEvent(QMouseEvent *ev)
{
    qDebug()<<"void feuTri::mouseReleaseEvent(QMouseEvent *ev)";
    //on vient de relacher le clic sur le feu
    if (etat == "vert")
    {
       etat="rouge";
       setPixmap(rouge);
    }

    else
    {
        etat="vert";
        setPixmap(vert);
    }
    //dans tous les cas
  //  setText(etat);
}
