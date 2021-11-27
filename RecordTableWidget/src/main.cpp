#include "mainrecordtablewidget.h"
#include <QApplication>

#include <QList>
#include <QString>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QList<QString> labels =  { "one", "two", "three" };
    MainRecordTableWidget w("Record Table", labels);
    w.show();
    return a.exec();
}
