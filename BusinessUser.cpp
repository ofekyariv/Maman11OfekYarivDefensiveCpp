#include "BusinessUser.h"
using namespace std;

void BusinessUser::sendMessage(User* user, Message* message) {
	//send message;
	user->receiveMessage(message);
}