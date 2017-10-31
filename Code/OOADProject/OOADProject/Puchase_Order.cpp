#include"Purchase_Order.h"

Purchase_Order::Purchase_Order(string date, Customer* cus, Cashier* cash)
{
	dop = date;
	grandTotal = 0;

	customer = cus;
	cashier = cash;

}

Purchase_Order::~Purchase_Order()
{}
double Purchase_Order::calculate_total()
{
	vector<SublineItem>* cart;
	
		cart = customer->getShoppingCart();



		for (int i = 0; i < cart->size(); i++)
		{

			grandTotal = grandTotal + cart->at(i).getSubtotal();
		}

		return grandTotal;

	
}