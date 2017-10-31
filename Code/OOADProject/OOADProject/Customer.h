#pragma once
#include<iostream>
#include<stdio.h>
#include<string>
#include"Item.h"
#include<vector>
#include"Category.h"
#include"SublineItem.h"
#include "Person.h"

using namespace std;


class Category;
class Item;
class SublineItem;


class Customer : public Person
{
	int membershipNO;
	bool Member;
	vector<Category*> categories;
	vector<SublineItem*> shoppingCart;


public:
	Customer(string cnic, string name, string phno, bool ismem, int no, vector<Category*> c);
	bool promoteMember();
	void viewCategory(string c);
	void viewItembyName(string i);
	bool checkOut();
	bool isMember();
	void addItem(SublineItem*);
	vector<SublineItem*> getShoppingCart();


	~Customer();
};