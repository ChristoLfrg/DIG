#include "DrawWidget.h"

DrawWidget::DrawWidget() :
    QWidget(),
    QPaintEngine(),
    fenetre(new QWidget(this))
{
    fenetre->
}

void DrawWidget::mousePressEvent(QMouseEvent *event)
{
    ligne.push_back(event->pos());
    update();
}

void DrawWidget::mouseMoveEvent(QMouseEvent *event)
{
    ligne.push_back();
}

void DrawWidget::mouseReleaseEvent(QMouseEvent *event)
{

}
