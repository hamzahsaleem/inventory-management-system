#include"Cashier.h"

Cashier::Cashier(string cnic, string name, string phno, string id) :Staffmember(cnic, name, phno, id)
{



}
Cashier::~Cashier(){}



void Cashier::setCustomer(Customer * c)
{
	this->c = c;

}

double Cashier::generateBill()
{
	vector<SublineItem*> cart;

	cart = c->getShoppingCart();

	for (int i = 0; i < cart.size(); i++)
	{
		cart.at(i)->displayList();
	}

	double bill = 0;

	for (int i = 0; i < cart.size(); i++)
	{
		bill = bill + cart.at(i)->getSubtotal();
	}

	return bill;
}