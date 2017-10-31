#include"Customer.h"
#include<string>

Customer::Customer(string cnic, string name, string phno, bool ismem, int no, vector<Category*> c) :Person(cnic, name, phno)
{
	Member = ismem;
	membershipNO = no;
	categories = c;


}

bool Customer::promoteMember()
{
	Member = true;

	return Member;

}

void Customer::viewCategory(string c)
{
	for (int i = 0; i < categories.size(); i++)
	{
		if (categories[i]->getName() == c)
		{
			categories[i]->viewItems();
		}
	}

}

void Customer::viewItembyName(string in)
{
	for (int i = 0; i < categories.size(); i++)
	{

		categories[i]->viewItemsbyName(in);
	}
}




bool Customer::isMember()
{
	return Member;
}

void Customer::addItem(SublineItem* item)
{

	if (isMember())
	{
		shoppingCart.push_back(item);
	}
	else
	{
		shoppingCart.push_back(item);
	}




}

bool Customer::checkOut()
{



	shoppingCart.erase(shoppingCart.begin(), shoppingCart.end());

	return true;

}
vector<SublineItem*> Customer::getShoppingCart()
{
	return shoppingCart;

}
Customer::~Customer()
{
	shoppingCart.erase(shoppingCart.begin(), shoppingCart.end());
	categories.erase(categories.begin(), categories.end());

}