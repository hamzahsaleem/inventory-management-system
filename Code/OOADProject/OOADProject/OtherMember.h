#pragma once
#include "StaffMember.h"


class Othermember : public Staffmember {
private:
	enum memberType { GUARD, SWEEPER, HELPER };
	memberType type;

public:
	Othermember(string a, string b, string c, string d, memberType t);
	bool set_memberType(memberType t);
	
	


};