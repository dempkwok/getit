#include <QtGui/QApplication>
#include "getit.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    getit w;
    w.show();
    return a.exec();
}
