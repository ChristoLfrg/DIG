#include <QtWidgets>
#include "DrawWidget.h"
#include "ZoneDessin.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    DrawWidget window;
    window.setWindowTitle("Scribble");
    window.setAttribute(QPaintEngine::WA_PaintOutsidePaintEvent);
    window.show();
    return app.exec();
}
