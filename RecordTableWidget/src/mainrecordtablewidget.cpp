#include "mainrecordtablewidget.h"

MainRecordTableWidget::MainRecordTableWidget(QString title, QList<QString> labels, QWidget *parent):
    QWidget(parent)
{
    this->_title = title;
    this->_labels = labels;
    this->_init();
}

MainRecordTableWidget::~MainRecordTableWidget()
{

}

void MainRecordTableWidget::_init()
{
    this->setFixedWidth(300);
    this->setFixedHeight(400);

    this->setWindowTitle(this->_title);

    this->_main_tab = new QTabWidget(this);
    this->_main_tab->setGeometry(5, 5, 290, 390);
    foreach (QString name, this->_labels)
    {
        this->_main_tab->addTab(new QWidget(), name);
    }
}
