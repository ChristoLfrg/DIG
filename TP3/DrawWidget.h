#pragma once
#include <QtWidgets>

class DrawWidget : public QWidget
{
public:
    DrawWidget();

    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);

private :
    QWidget* fenetre;
    std::vector<QPoint> ligne;
};
