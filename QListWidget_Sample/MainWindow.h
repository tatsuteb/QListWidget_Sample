#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
	class MainWindow;
}

class QListWidgetItem;

class MainWindow : public QMainWindow
{
		Q_OBJECT

	public:
		explicit MainWindow(QWidget *parent = 0);
		~MainWindow();

	private:
		Ui::MainWindow *ui;

	private slots:
		void addCustomItem(QString str);
		void removeCustomItem(QListWidgetItem *item);
};

#endif // MAINWINDOW_H
