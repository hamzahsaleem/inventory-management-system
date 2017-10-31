#include "Category.h"


Category::Category(string n, int items) {
	name.assign(n);
	current_items = 0;
	max_items = items;
	item_ptr_array = new Item*[max_items];
}

void Category::viewItems() {
	for (int i = 0; i<current_items; i++) {
		item_ptr_array[i]->viewDetailsforCustomer();
	}
}

void Category::deleteCategory()
{

	for (int i = 0; i<current_items; i++) {
		item_ptr_array[i]->setQuantity(0);
	}


}

string Category::getName()
{
	return name;
}

bool Category::viewItemsbyName(string n) {
	for (int i = 0; i<current_items; i++) {
		if (n == item_ptr_array[i]->getName()) {
			item_ptr_array[i]->viewDetailsforCustomer();
			return true;
		}
	}
	return false;
}

bool Category::viewItemsbyPrice(double price) {
	bool flag = false;
	for (int i = 0; i<current_items; i++) {
		if (price == item_ptr_array[i]->getSalePrice()) {
			item_ptr_array[i]->viewDetailsForAdmin();
			flag = true;
		}
	}
	if (!flag)
		return false;
	else
		return true;
}

void Category::viewItemsbyId(string id) {
	for (int i = 0; i<current_items; i++) {
		if (id == item_ptr_array[i]->getId()) {
			item_ptr_array[i]->viewDetailsforCustomer();
		}
	}
}

bool Category::addItem(Item *it) {
	if (current_items != max_items) {

		bool flag = false;

		for (int i = 0; i < current_items; i++)
		{

			if (item_ptr_array[i] == it)
			{
				flag = true;
				break;
			}

		}

		if (flag == false)
		{

			item_ptr_array[current_items] = it;
			++current_items;
			it->setCategory(this);
			return true;
		}
	}
	return false;
}

bool Category::deleteItem(string iname)
{
	int flag = false;
	for (int i = 0; i < current_items; i++)
	{

		if (item_ptr_array[i]->getName() == iname)
		{
			item_ptr_array[i]->setQuantity(0);
		}

	}



	return flag;
}

void Category::addDiscount(double rate)
{
	for (int i = 0; i<current_items; i++) {
		item_ptr_array[i]->offerItemDiscount(rate);

	}


}

int Category::getItemCount() { return current_items; }

Item* Category::getItemById(string id) {
	for (int i = 0; i<current_items; i++) {
		if (id == item_ptr_array[i]->getId())
			return item_ptr_array[i];
	}
	return nullptr;
}

Item* Category::getItemByName(string name) {
	for (int i = 0; i<current_items; i++) {
		if (name == item_ptr_array[i]->getName())
			return item_ptr_array[i];
	}
	return nullptr;
}

vector<Item*> Category::returnAllItems() {
	vector<Item*> allItems;

	for (int i = 0; i<current_items; i++) {
		allItems.push_back(item_ptr_array[i]);
	}

	return allItems;

}

Category::~Category()
{

	delete[]item_ptr_array;
	item_ptr_array = nullptr;

}

void Category::setAdmin(Admin* a)
{

	admin = a;
	a->addCategory(this);

}
