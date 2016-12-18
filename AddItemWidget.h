#ifndef ADDITEMWIDGET_H
#define ADDITEMWIDGET_H

#include <QWidget>

namespace Ui {
	class AddItemWidget;
}

class AddItemWidget : public QWidget
{
		Q_OBJECT

	public:
		explicit AddItemWidget(QWidget *parent = 0);
		~AddItemWidget();

	signals:
		void itemAdd(QString str);

	private slots:
		void on_btnAddItem_clicked();

	private:
		Ui::AddItemWidget *ui;
};

#endif // ADDITEMWIDGET_H
