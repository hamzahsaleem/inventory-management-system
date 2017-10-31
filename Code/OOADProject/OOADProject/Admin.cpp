#include "Admin.h"

Admin::Admin(string uname, string pass)
{
	username = uname;
	password = pass;
	categoryCount = 0;
	staffCount = 0;
	categories = new Category*[50];
	staff = new Staffmember*[100];


}

Admin::~Admin()
{


	delete categories;
	categories = nullptr;

}

bool Admin::deleteMember(string cnic)
{

	bool flag = false;

	for (int i = 0; i < staffCount; i++)
	{


		if (staff[i]->get_cnic() == cnic)
		{

			for (int j = i; j < staffCount; j++)
			{

				staff[j] = staff[j + 1];
			}
			staffCount--;
			flag = true;
			break;
		}

	}


	return flag;
}

int Admin::getCategoryCount()
{
	return categoryCount;
}

void Admin::addStockExistingItem(string itemID, int quantity)
{

	for (int i = 0; i < categoryCount; i++)
	{

		if (categories[i]->getItemById(itemID) != nullptr)
		{

			categories[i]->getItemById(itemID)->addQuantity(quantity);
			break;

		}

	}




}

void Admin::generateItemsSaleReport()
{


}

void Admin::generateProfitReport()
{


}

void Admin::offerDiscountOnItem(string itemID, float rate)
{
	for (int i = 0; i < categoryCount; i++)
	{

		if (categories[i]->getItemById(itemID) != nullptr)
		{

			categories[i]->getItemById(itemID)->offerItemDiscount(rate);
			break;

		}

	}



}

void Admin::offerDiscountOnCategory(string categoryName, float rate)
{


	for (int i = 0; i < categoryCount; i++)
	{

		if (categories[i]->getName() == categoryName)
		{

			categories[i]->addDiscount(rate);
			break;

		}

	}



}

void Admin::promoteMember(Customer* c)
{
	c->promoteMember();

}

string Admin::getUsername()
{
	return username;
}

string Admin::getPassword()
{
	return password;
}

void Admin::viewStockByName(string itemName)
{

	for (int i = 0; i < categoryCount; i++)
	{

		if (categories[i]->getItemByName(itemName) != nullptr)
		{


			cout << categories[i]->getItemByName(itemName)->getName() << " : " << categories[i]->getItemByName(itemName)->getQuantity();

			break;

		}




	}



}

void Admin::viewStockByCategory(string categoryName)
{

	for (int i = 0; i < categoryCount; i++)
	{

		if (categories[i]->getName() == categoryName)
		{

			vector<Item*> items = categories[i]->returnAllItems();

			for (int j = 0; j < items.size(); j++)
			{


				cout << items.at(j)->getName() << " : " << items.at(j)->getQuantity();

			}


			break;
		}

	}


}

void Admin::viewStockByID(string itemID)
{


	for (int i = 0; i < categoryCount; i++)
	{

		if (categories[i]->getItemById(itemID) != nullptr)
		{


			cout << categories[i]->getItemById(itemID)->getName() << " : " << categories[i]->getItemById(itemID)->getQuantity();
			break;

		}



	}

}

void Admin::addCategory(Category* c)
{
	if (categoryCount < 50)
	{
		bool flag = false;

		for (int i = 0; i < categoryCount; i++)
		{


			if (categories[i] == c)
			{
				flag = true;
				break;
			}

		}

		if (flag == false)
		{

			categories[categoryCount++] = c;

			c->setAdmin(this);

		}

	}





}

void Admin::addItem(string categoryName, Item* it)
{
	for (int i = 0; i < categoryCount; i++)
	{
		if (categories[i]->getName() == categoryName)
		{

			categories[i]->addItem(it);

		}

	}

}

bool Admin::deleteCategory(string categoryName)
{

	bool flag = false;

	for (int i = 0; i < categoryCount; i++)
	{
		if (categories[i]->getName() == categoryName)
		{
			categories[i]->deleteCategory();

			for (int j = i; j < categoryCount; j++)
			{

				categories[j] = categories[j + 1];
			}
			categoryCount--;
			flag = true;
		}



	}



	return flag;
}

void Admin::deleteItem(string itemName)
{
	Item* item;


	for (int i = 0; i < categoryCount; i++)
	{


		if (categories[i]->deleteItem(itemName))
			break;


	}


}

void Admin::addMember(Staffmember* s)
{
	if (staffCount < 100)
	{
		bool flag = false;

		for (int i = 0; i < staffCount; i++)
		{


			if (staff[i] == s)
			{
				flag = true;
				break;
			}

		}

		if (flag == false)
		{

			staff[staffCount++] = s;

			s->setAdmin(this);

		}

	}




}

