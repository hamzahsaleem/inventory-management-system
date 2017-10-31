#include "Person.h"

Person::Person(string a, string b, string c) {
	cnic.assign(a);
	name.assign(b);
	phoneNo.assign(c);
}

bool Person::set_cnic(string a) {
	cnic.assign(a);
	return true;
}

bool Person::set_name(string a) {
	name.assign(a);
	return true;
}

bool Person::set_phoneNo(string a) {
	phoneNo.assign(a);
	return true;
}

string Person::get_cnic() { return cnic; }
string Person::get_phoneNo() { return phoneNo; }
string Person::get_name() { return name; }

