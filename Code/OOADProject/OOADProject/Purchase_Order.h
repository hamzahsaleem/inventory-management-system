#include<iostream>
#include"Customer.h"
#include "Cashier.h"

using namespace std;

class Customer;
class Cashier;

class Purchase_Order
{
private:
	string dop;
	double grandTotal;
	Customer* customer;
	Cashier * cashier;

public:

	Purchase_Order(string date,Customer*,Cashier*);
	~Purchase_Order();
	double calculate_total();
	
};