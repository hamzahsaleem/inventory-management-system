#pragma once
#include "Person.h"
#include "Admin.h"

class Admin;

class Staffmember : public Person {
private:
	Admin* admin;
	string staffID;

public:
	Staffmember(string a, string b, string c, string d);
	string get_staffID();
	void setAdmin(Admin*);
	bool set_staffID(string a);
};