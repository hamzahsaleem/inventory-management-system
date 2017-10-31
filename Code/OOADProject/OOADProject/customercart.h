#ifndef CUSTOMERCART_H
#define CUSTOMERCART_H
#include "billing.h"
#include "dialoguebox.h"
class DialogueBox;
#include <QWidget>
#include "ui_customercart.h"
#include "ui_customerviewitems.h"
#include <QtDebug>
#include <QFileInfo>
#include <QtSql\qsqldatabase.h>
#include <QtSql\qsqlquery.h>
#include <QtSql\qsql.h>

class Customer;
class Billing;
class CustomerCart : public QWidget
{
	Q_OBJECT

public:
	CustomerCart(QWidget *parent = 0);
	~CustomerCart();
	public slots :
	void BillingPage();
	void addCartSubmit();
	void showItems();
	void showPackageQuantity();
	void setData(Customer*);

private:
	int count;
	Customer* customers;
	QSqlDatabase mydb;
	Ui::CustomerCart ui;
	Billing  *billingcustomer;
	bool checkint(string no);
	DialogueBox * dialogueBox;
};

#endif // CUSTOMERCART_H
