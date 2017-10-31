#pragma once
#include<iostream>
#include<string>
#include<vector>
#include "Item.h"
#include "Admin.h"
using namespace std;


class Item;
class Admin;

class Category {
private:
	string name;
	Item **item_ptr_array;
	Admin* admin;

	int max_items;
	int current_items;


public:
	Category(string n, int items);
	void setAdmin(Admin*);
	void deleteCategory();
	void viewItems();
	string getName();
	bool viewItemsbyName(string n);
	bool viewItemsbyPrice(double price);
	void viewItemsbyId(string id);
	bool addItem(Item *i);
	bool deleteItem(string);
	void addDiscount(double rate);
	int getItemCount();
	Item* getItemById(string id);
	Item* getItemByName(string name);
	vector<Item*> returnAllItems();
	~Category();
};