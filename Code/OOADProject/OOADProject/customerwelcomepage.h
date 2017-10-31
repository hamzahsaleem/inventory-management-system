#ifndef CUSTOMERWELCOMEPAGE_H
#define CUSTOMERWELCOMEPAGE_H
#include "ooadproject.h"
#include "customercart.h"
#include "customerviewitems.h"
#include <QWidget>
#include "ui_customerwelcomepage.h"
class CustomerCart;
class CustomerViewItems;
class OOADProject;
class Customer;
class CustomerWelcomePage : public QWidget
{
	Q_OBJECT

public:
	CustomerWelcomePage(QWidget *parent = 0);
	void setData(Customer*);
	~CustomerWelcomePage();
	public slots :
	void customercartPage();
	void CustomerviewItemsPage();
	void LogoutPage();
private:
	Customer* customer;
	Ui::CustomerWelcomePage ui;
	CustomerCart * customercart;
	CustomerViewItems * CustomerviewItems;
	OOADProject * Logout;
};

#endif // CUSTOMERWELCOMEPAGE_H
