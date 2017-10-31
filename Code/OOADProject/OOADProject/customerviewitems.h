#ifndef CUSTOMERVIEWITEMS_H
#define CUSTOMERVIEWITEMS_H
#include "customerwelcomepage.h"
#include "customerviewallitems.h"
class CustomerViewAllItems;
class CustomerWelcomePage;
#include "dialoguebox.h"
class DialogueBox;
#include <QWidget>
#include "ui_customerviewitems.h"
#include <QtDebug>
#include <QFileInfo>
#include <QtSql\qsqldatabase.h>
#include <QtSql\qsqlquery.h>
#include <QtSql\qsql.h>



class CustomerViewItems : public QWidget
{
	Q_OBJECT

public:
	CustomerViewItems(QWidget *parent = 0);
	~CustomerViewItems();
	public slots:
	void BackButton();
	void ViewByName();
	void ViewByCategory();
private:


	QSqlDatabase mydb;
	Ui::CustomerViewItems ui;
	CustomerWelcomePage * custmoerWelcomePage;
	DialogueBox * dialogueBox;
	CustomerViewAllItems * custmoerViewAllItems;
	bool checkint(string no);
};

#endif // CUSTOMERVIEWITEMS_H
