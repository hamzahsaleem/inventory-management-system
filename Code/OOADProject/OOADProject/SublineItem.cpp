#include"SublineItem.h"

SublineItem::SublineItem(string n, string pq, int q, double u_price)
{
	name = n;
	package_quantity = pq;
	quantity = q;
	unit_price = u_price;
	total_price = 0;

}

void SublineItem::calculateSubTotal()
{
	total_price = unit_price*quantity;
}
double SublineItem::getSubtotal()
{
	calculateSubTotal();
	return total_price;
}

void SublineItem::displayList()
{
	cout << endl << name << " " << package_quantity << " " << quantity << " " << unit_price << " " << total_price;
}

int SublineItem::getQuantity()
{
	return quantity;

}

string SublineItem::getName()
{
	return name;
}
string SublineItem::getpackagequantity()
{
	return package_quantity;
}
double SublineItem::getunitprice()
{
	return unit_price;

}
