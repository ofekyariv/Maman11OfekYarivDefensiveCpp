#pragma once
#include "User.h"
#include "Message.h"
class BusinessUser : public User
{
public:
	void sendMessage(User* user, Message* message);
};

