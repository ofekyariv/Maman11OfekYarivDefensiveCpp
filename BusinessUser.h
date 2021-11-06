#pragma once
#include "User.h"
class BusinessUser : public User
{
	void sendMessage(User* user, Message* message);
};

