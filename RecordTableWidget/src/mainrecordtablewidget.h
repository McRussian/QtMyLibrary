#ifndef RECORDTABLEWIDGET_H
#define RECORDTABLEWIDGET_H

#include <QList>
#include <QWidget>
#include <QTabWidget>

class MainRecordTableWidget : public QWidget
{
    Q_OBJECT

public:
    MainRecordTableWidget(QString title, QList<QString> labels, QWidget *parent = 0);
    ~MainRecordTableWidget();

private:
    void _init();

private:
    QString _title;
    QList<QString> _labels;

    QTabWidget * _main_tab;
};

#endif // RECORDTABLEWIDGET_H
