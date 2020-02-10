#include <QtWidgets>
#include "vue.hh"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    vue window;
    window.show();
    return app.exec();
}
