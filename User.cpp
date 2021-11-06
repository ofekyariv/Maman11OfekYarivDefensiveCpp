#include "User.h"
#include<string>
using namespace std;
User::User() {
	//create user;
}
User::~User() {
	//somthing;
}
string User::getName() {
	return this->name;
}
void User::addFriend(User* user){
	//addFriend;
}
void User::post(string text) {
	//post;
}
void User::post(string text, Media* media) {
	//post;
}
list<Post*> User::getPosts() {
	return this->posts;
}
void User::viewFriendsPosts() {
	//viewFriendsPosts;
}
void User::receiveMessage(Message* message) {
	//receiveMessage
}
void User::sendMessage(User* user, Message* message) {
	//sendMessage
}
void User::viewReceivedMessages() {
	//viewReceivedMessages;
}
