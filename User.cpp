#include "User.h"
#include<string>
using namespace std;

User::User() {
	//create user;
}
//User::User(string uName) {
	//create user;
	//this->uName = uName;
	//this->uId++;
//}
User::~User() {
	//somthing;
}
string User::getName() {
	return this->uName;
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
