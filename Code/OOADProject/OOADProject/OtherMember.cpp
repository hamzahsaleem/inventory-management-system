#include "OtherMember.h"

Othermember::Othermember(string a, string b, string c, string d, memberType t) : Staffmember(a, b, c, d) {
	type = t;
}

bool Othermember::set_memberType(memberType t) {
	type = t;
	return true;
}

