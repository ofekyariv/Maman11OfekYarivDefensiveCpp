#pragma once
#include <map>
#include<string>
#include "User.h"

using namespace std;

class USocial
{
private:
	map <unsigned long, User*> users;
	static unsigned long uId;
public:
	User* registerUser(string uName);
	User* registerUser(string uName, bool isBusiness);
	void removeUser(User* user);
	User* getUserById(unsigned long uId);
};

