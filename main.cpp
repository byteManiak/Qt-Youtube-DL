#include "qtdl.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QtDL w;
    w.show();

    return a.exec();
}
