#include "OPD3Cards.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    OPD3Cards w;
    w.show();
    return a.exec();
}
