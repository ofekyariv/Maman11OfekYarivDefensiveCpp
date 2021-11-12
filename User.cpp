#include "User.h"
#include "USocial.h"
#include <iostream>
#include<string>
using namespace std;

User::User() {
}
User::~User() {
}
unsigned long User::getId() {
	return uId;
}
string User::getName() {
	return uName;
}
//add friend, check if he is not in my friend list already
void User::addFriend(User* user){
	if (std::find(friends.begin(), friends.end(), user->getId()) != friends.end()) {
		std::cout << "Error: Alredy friends" << std::endl;
	}
	else {
		friends.push_back(user->getId());
	}
}
//remove friend, check if he is in my friend list
void User::removeFriend(User* user)
{
	if (std::find(friends.begin(), friends.end(), user->getId()) != friends.end()) {
		friends.remove(user->getId());
	}
	else {
		std::cout << "Error: Not friends" << std::endl;
	}
}
//post for a specific user
void User::post(string text) {
	Post* post = new Post(text);
	posts.push_front(post);
}
void User::post(string text, Media* media) {
	Post* post = new Post(text, media);
	posts.push_front(post);
}
list<Post*> User::getPosts() {
	return posts;
}
//view friends posts
void User::viewFriendsPosts() {
	for (auto const& i : friends) {
		User* user = us->getUserById(i);
		for (auto const& j : user->getPosts()) {
			cout << j->getText() << endl;
			if (j->getMedia())
				j->getMedia()->display();
		}
	}
}
//receive message
void User::receiveMessage(Message* message) {
	receivedMsgs.push_back(message);
}
//send message as a regular user. check if the message is sent to a friend
void User::sendMessage(User* user, Message* message) {
	if (find(friends.begin(), friends.end(), user->getId()) != friends.end()) {
		user->receiveMessage(message);
	}
	else
	{
		cout << "Error: You are not a Business user. you cannot send this massage, he is not your friend." << endl;
	}
}
//view received messages
void User::viewReceivedMessages() {
	for (auto const& message : receivedMsgs) {
		cout << message->getText() << endl;
	}
}
