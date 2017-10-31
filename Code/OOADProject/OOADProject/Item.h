#pragma once
#include<iostream>
#include "Category.h"
using namespace std;


class Category;

class Item {

private:
	string name;
	string id;
	double salePrice;
	double costPrice;
	int quantity;
	string packageQuantity;
	float discount;
	int soldQuantity;
	Category* itemCategory;
	

public:

	Item(string, string, int, double, double, string);
	void setCategory(Category*);
	void viewDetailsForAdmin();
	void addQuantity(int);
	void setQuantity(int);
	string getName();
	string getId();
	double getCostPrice();
	double getSalePrice();
	void setCostPrice(double);
	void setSalePrice(double);
	int getQuantity();
	string getPackageQuantity();
	void setPackageQuantity(string);
	int getSoldQuantity();
	void offerItemDiscount(float);
	void viewDetailsforCustomer();
	bool buyItem(int quan);
	~Item();



};
