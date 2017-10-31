#include "customercheckout.h"

CustomerCheckout::CustomerCheckout(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

CustomerCheckout::~CustomerCheckout()
{

}

void CustomerCheckout::setData(Customer* c)
{
	customer = c;
}

void CustomerCheckout::LogOutPage()
{
	this->close();
	Logout = new OOADProject();
	Logout->show();

}
void CustomerCheckout::Customerwelcomepage()
{
	this->close();
	customerwelcomepage = new CustomerWelcomePage();
	customerwelcomepage->setData(customer);
	customerwelcomepage->show();
}