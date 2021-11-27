#include "recordtablewidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    RecordTableWidget w;
    w.show();

    return a.exec();
}
