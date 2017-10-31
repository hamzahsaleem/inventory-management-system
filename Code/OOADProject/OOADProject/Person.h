#pragma once
#include<iostream>
#include<string>

using namespace std;

class Person {
private:
	string cnic;
	string name;
	string phoneNo;

public:
	Person(string a, string b, string c);
	bool set_cnic(string a);
	bool set_name(string a);
	bool set_phoneNo(string a);
	string get_cnic();
	string get_name();
	string get_phoneNo();
};