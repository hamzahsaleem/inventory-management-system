#ifndef CUSTOMERCHECKOUT_H
#define CUSTOMERCHECKOUT_H
#include "ooadproject.h"
#include "customerwelcomepage.h"
#include <QWidget>
#include "ui_customercheckout.h"

class CustomerWelcomePage;
class OOADProject;
class Customer;
class CustomerCheckout : public QWidget
{
	Q_OBJECT

public:
	CustomerCheckout(QWidget *parent = 0);
	void setData(Customer*);
	~CustomerCheckout();
	public slots:
	void LogOutPage();
	void Customerwelcomepage();
private:
	Ui::CustomerCheckout ui;
	Customer* customer;
	OOADProject *Logout;
	CustomerWelcomePage *customerwelcomepage;
};

#endif // CUSTOMERCHECKOUT_H
