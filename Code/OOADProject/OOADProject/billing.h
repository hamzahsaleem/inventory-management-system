#ifndef BILLING_H
#define BILLING_H
#include "customercheckout.h"
#include <QWidget>
#include "ui_billing.h"
#include "ui_customercart.h"
#include "ui_customerviewitems.h"
#include <QtDebug>
#include <QFileInfo>
#include <QtSql\qsqldatabase.h>
#include <QtSql\qsqlquery.h>
#include <QtSql\qsql.h>
#include "SublineItem.h"

class SublineItem;
class Customer;
class CustomerCheckout;
class Billing : public QWidget
{
	Q_OBJECT

public:
	Billing(QWidget *parent = 0);
	~Billing();
	public slots:
	void CheckoutPage();
	void setData(Customer* c);
private:

	QSqlDatabase mydb;
	Customer* customer;
	Ui::Billing ui;
	CustomerCheckout *customercheckout;
};

#endif // BILLING_H
