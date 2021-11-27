#ifndef RECORDTABLE_H
#define RECORDTABLE_H

#include <QWidget>
#include <QTableWidget>

class RecordTable : public QWidget
{
    Q_OBJECT
public:
    explicit RecordTable(int, int, int, QWidget *parent = nullptr);

signals:

public slots:

private:
    void _init();

private:
    int _width;
    int _height;
    int _count_record;

    QTableWidget * _record_table;
};

#endif // RECORDTABLE_H
