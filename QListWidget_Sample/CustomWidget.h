#ifndef CUSTOMWIDGET_H
#define CUSTOMWIDGET_H

#include <QWidget>
#include <QListWidgetItem>

namespace Ui {
	class CustomWidget;
}

class CustomWidget : public QWidget
{
		Q_OBJECT

	public:
		explicit CustomWidget(QString str, QListWidgetItem *item, QWidget *parent = 0);
		~CustomWidget();

	signals:
		void removeItem(QListWidgetItem *item);

	private slots:
		void on_btnRemoveItem_clicked();

	private:
		Ui::CustomWidget *ui;
		QListWidgetItem *m_item;
};

#endif // CUSTOMWIDGET_H
