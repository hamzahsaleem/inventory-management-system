#include "StaffMember.h"



Staffmember::Staffmember(string a, string b, string c, string d) :Person(a, b, c) {
	staffID.assign(d);
}
bool Staffmember::set_staffID(string a) {
	staffID.assign(a);
	return true;
}
string Staffmember::get_staffID() { return staffID; }

void Staffmember::setAdmin(Admin* a)
{
	admin = a;
	a->addMember(this);
}

