#include "AddItemWidget.h"
#include "ui_AddItemWidget.h"

AddItemWidget::AddItemWidget(QWidget *parent) :
	QWidget(parent),
	ui(new Ui::AddItemWidget)
{
	ui->setupUi(this);
}

AddItemWidget::~AddItemWidget()
{
	delete ui;
}

void AddItemWidget::on_btnAddItem_clicked()
{
	emit itemAdd(ui->lineEdit->text());
}
