#include "User.h"
#include<string>
using namespace std;

User::User() {
	//this->uId++;
}
User::~User() {
	//somthing;
}
unsigned long User::getId() {
	return this->uId;
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
