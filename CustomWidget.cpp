#include "CustomWidget.h"
#include "ui_CustomWidget.h"

#include <QDebug>

CustomWidget::CustomWidget(QString str, QListWidgetItem *item, QWidget *parent) :
	QWidget(parent),
	ui(new Ui::CustomWidget),
	m_item(item)
{
	ui->setupUi(this);

	ui->label->setText(str);
}

CustomWidget::~CustomWidget()
{
	delete ui;
}

void CustomWidget::on_btnRemoveItem_clicked()
{
	emit removeItem(m_item);
}
