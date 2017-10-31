#include "Item.h"


Item::Item(string name, string id,int quan,double sale,double cost , string pkg)
{
	this->name = name;
	this->id = id;
	quantity = quan;
	soldQuantity = 0;
	salePrice = sale;
	costPrice = cost;
	packageQuantity = pkg;


}

void Item::setCategory(Category * cat)
{
	itemCategory = cat;

	cat->addItem(this);


}

void Item::viewDetailsForAdmin()
{
	cout << "Item name: " << name.c_str() << endl << "Item ID: " << id.c_str() << endl << "Sale price: " << salePrice << endl << "Cost price: " << costPrice << endl << "Quantity Available: " << endl << quantity << "Package quantity: " << endl << packageQuantity.c_str() << endl << "Discount offered: " << discount << endl << "Quantity Sold: " << soldQuantity << " items" << endl<<"................................................";


}

void Item::addQuantity(int quantity)
{
	this->quantity = this->quantity + quantity;


}

void Item::setQuantity(int q)
{
	quantity = q;
}

string Item::getName()
{
	return name;
}

string Item::getId()
{
	return id;
}

double Item::getCostPrice()
{
	return costPrice;
}

double Item::getSalePrice()
{
	return (salePrice - salePrice*discount);
}

void Item::setCostPrice(double c)
{
	costPrice = c;

}

void Item::setSalePrice(double s)
{
	salePrice = s;

}

int Item::getQuantity()
{
	return quantity;
}

string Item::getPackageQuantity()
{
	return packageQuantity;
}

void Item::setPackageQuantity(string pkg)
{
	packageQuantity = pkg;

}

int Item::getSoldQuantity()
{
	return soldQuantity;
}

void Item::offerItemDiscount(float d)
{

	discount = d;

	salePrice = (salePrice - salePrice*discount);


}

void Item::viewDetailsforCustomer()
{
	cout << "Item name: " << name.c_str() << endl << "Item ID: " << id.c_str() << endl << "Sale price: " << salePrice << endl  << "Quantity Available: " << endl << quantity << "Package quantity: " << endl << packageQuantity.c_str() << endl << "Discount offered: " << discount << endl  << "................................................";

}

bool Item::buyItem(int quan)
{


	if (quantity > quan)
	{
	
		quantity = quantity - quan;
		soldQuantity = soldQuantity + quan;
	
		return true;
	}


	return false;
}

Item::~Item() {


}