#include "USocial.h"
#include "BusinessUser.h"
#include<string>
#include <iostream>

using namespace std;
unsigned long USocial::uId = 0;
//register user set as regualr as default
User* USocial::registerUser(string uName) {
	return registerUser(uName, false);
}
//register user and increase the static user id counter.
User* USocial::registerUser(string uName, bool business) {
	User* user;
	if (business)
		user = new BusinessUser();
	else
		user = new User();
	user->uName = uName;
	user->uId = uId;
	user->us = this;
	users.insert({ uId, user });
	uId++;
	return user;
}
//remove user
void USocial::removeUser(User* user) {
	users.erase(user->getId());
}
//get user by id (the +1 is because the uId start from 0)
User* USocial::getUserById(unsigned long uId) {
	return users[uId+1];
}