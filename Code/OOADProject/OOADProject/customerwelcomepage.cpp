#include "customerwelcomepage.h"

CustomerWelcomePage::CustomerWelcomePage(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

CustomerWelcomePage::~CustomerWelcomePage()
{

}

void CustomerWelcomePage::setData(Customer* c)
{
	customer = c;
}

void CustomerWelcomePage::CustomerviewItemsPage()
{
	this->close();
	CustomerviewItems = new CustomerViewItems();
	CustomerviewItems->show();

}
void CustomerWelcomePage::customercartPage()
{
	this->close();

	customercart = new CustomerCart();
	customercart->setData(customer);
	customercart->show();
}
void CustomerWelcomePage::LogoutPage()
{

	this->close();
	Logout = new OOADProject();
	Logout->show();

}