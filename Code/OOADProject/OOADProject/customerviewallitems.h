#ifndef CUSTOMERVIEWALLITEMS_H
#define CUSTOMERVIEWALLITEMS_H
#include "customerviewitems.h"
class CustomerViewItems;
#include <QWidget>
#include "ui_customerviewallitems.h"
#include <QWidget>
#include "ui_customerviewitems.h"
#include <QtDebug>
#include <QFileInfo>
#include <QtSql\qsqldatabase.h>
#include <QtSql\qsqlquery.h>
#include <QtSql\qsql.h>

class DialogueBox;

class CustomerViewAllItems : public QWidget
{
	Q_OBJECT

public:
	CustomerViewAllItems(QWidget *parent = 0);
	~CustomerViewAllItems();
	public slots:
	void backpage();
	void viewByName(string name);
	void viewByCategory(string name);


private:
	QSqlDatabase mydb;
	string itemName;
	string categoryName;

	Ui::CustomerViewAllItems ui;
	CustomerViewItems * customerviewitems;
	DialogueBox * dialogueBox;

};

#endif // CUSTOMERVIEWALLITEMS_H
