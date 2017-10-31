#pragma once
#include<iostream>
#include<string>

using namespace std;


class SublineItem
{
private:
	string name;
	string package_quantity;
	int quantity;
	double unit_price;
	double total_price;

public:
	SublineItem(string n, string pq, int q, double u_price);
	void calculateSubTotal();
	double getSubtotal();
	double getunitprice();
	string getName();
	string getpackagequantity();
	void displayList();
	int getQuantity();


};