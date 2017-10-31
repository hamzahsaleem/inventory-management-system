#pragma once

#include<iostream>
#include"Customer.h"
using namespace std;

class Customer;

class Cashier : public Staffmember
{
private:
	Customer* c;

public:
	Cashier(string cnic, string name, string phno, string id);
	~Cashier();
	void setCustomer(Customer*);

	double generateBill();
};