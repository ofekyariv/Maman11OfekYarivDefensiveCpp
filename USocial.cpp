#include "USocial.h"
#include "BusinessUser.h"
#include<string>
#include <iostream>

using namespace std;
unsigned long USocial::uId = 0;
User* USocial::registerUser(string uName) {
	return registerUser(uName, false);

}
User* USocial::registerUser(string uName, bool isBusiness) {

	User* user;
	if (isBusiness)
		user = new BusinessUser();
	else
		user = new User();
	user->uName = uName;
	user->uId = uId;
	user->us = this;
	++uId;
	users.insert({ uId, user });
	return user;
}
void USocial::removeUser(User* user) {
	//remove user;
	if (users.erase(user->getId()) == 0) {
		std::cout << "no such user" << std::endl;
	}
	else
	{
		std::cout << "user " + user->getName() + " was deleted" << std::endl;
	}
}
User* USocial::getUserById(unsigned long uId) {
	//getUserById;
	return users[uId];
}