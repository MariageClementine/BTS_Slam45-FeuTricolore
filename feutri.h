#ifndef FEUTRI_H
#define FEUTRI_H

#include <QLabel>
#include <QString>

class feuTri : public QLabel
{
    Q_OBJECT
public:
    explicit feuTri(QWidget *parent = 0);

signals:

public slots:

private:
    QString etat;
    void mousePressEvent(QMouseEvent *ev);
    void mouseReleaseEvent(QMouseEvent *ev);

    QPixmap vert;
    QPixmap rouge;
    QPixmap orange;

};

#endif // FEUTRI_H
