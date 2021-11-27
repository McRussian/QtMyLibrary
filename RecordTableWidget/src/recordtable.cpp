#include "recordtable.h"

RecordTable::RecordTable(int width, int height, int count, QWidget *parent) : QWidget(parent)
{
    this->_width = width;
    this->_height = height;
    this->_count_record = count;
    this->_init();
}

void RecordTable::_init()
{
    this->setFixedHeight(this->_height);
    this->setFixedWidth(this->_width);

    this->_record_table = new QTableWidget(this);
    this->_record_table->setGeometry(2, 2, this->_width - 4, this->_height - 4);
    this->_record_table->setColumnCount(4);
    QList<QString> headers = {"N", "Name", "Score", "DateTime"};
    this->_record_table->setHorizontalHeaderLabels(headers);

    this->_record_table->setRowCount(this->_count_record);
}
