#include "BusinessUser.h"
using namespace std;
//send message as a business user, without checking for friendship
void BusinessUser::sendMessage(User* user, Message* message) {
	user->receiveMessage(message);
}