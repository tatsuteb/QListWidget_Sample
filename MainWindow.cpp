#include "MainWindow.h"
#include "ui_MainWindow.h"

#include "CustomWidget.h"
#include "AddItemWidget.h"

MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::MainWindow)
{
	ui->setupUi(this);

	// Add an item to list widget.
	QListWidgetItem *item = new QListWidgetItem();
	item->setSizeHint(QSize(50, 50));
	ui->listWidget->addItem(item);

	// Set up AddItemWidget for the item.
	AddItemWidget *addItemWidget = new AddItemWidget();
	connect(addItemWidget, &AddItemWidget::itemAdd, this, &MainWindow::addCustomItem);

	// Set the widget to be displayed in the given item.
	ui->listWidget->setItemWidget(item, addItemWidget);

}

MainWindow::~MainWindow()
{
	delete ui;
}

void MainWindow::addCustomItem(QString str)
{
	QListWidgetItem *item = new QListWidgetItem();
	item->setSizeHint(QSize(50, 50));

	// Insert new item before the AddItemWidget.
	auto row = (ui->listWidget->count() == 0) ? 0 : ui->listWidget->count() - 1;
	ui->listWidget->insertItem(row, item);

	CustomWidget *customWidget = new CustomWidget(str, item);
	connect(customWidget, &CustomWidget::removeItem, this, &MainWindow::removeCustomItem);
	ui->listWidget->setItemWidget(item, customWidget);
}

void MainWindow::removeCustomItem(QListWidgetItem *item)
{
	auto idx = ui->listWidget->row(item);
	ui->listWidget->takeItem(idx);
	delete item;
}
