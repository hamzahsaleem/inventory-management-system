#pragma once
#include<iostream>
#include"Category.h"
#include "Customer.h"
#include "Item.h"
#include "StaffMember.h"
using namespace std;



class Category;
class Staffmember;
class Customer;
class Item;

class Admin {

private:

	string username;
	string password;
	int categoryCount;
	Category** categories;
	Staffmember** staff;
	int staffCount;




public:

	Admin(string, string);
	~Admin();
	int getCategoryCount();
	string getUsername();
	string getPassword();
	void viewStockByName(string);
	void viewStockByCategory(string);
	void viewStockByID(string);
	void addCategory(Category*);
	void addItem(string, Item*);
	bool deleteCategory(string);
	void deleteItem(string);
	void addMember(Staffmember*);
	bool deleteMember(string cnic);

	void addStockExistingItem(string, int);
	void generateItemsSaleReport();
	void generateProfitReport();
	void offerDiscountOnItem(string, float);
	void offerDiscountOnCategory(string, float);
	void promoteMember(Customer*);



};