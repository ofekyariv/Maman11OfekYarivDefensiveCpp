#include "User.h"
#include <algorithm>
#include <iostream>
#include<string>
#include "USocial.h"
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
void User::addFriend(User* user){
	//addFriend;
	if (std::find(friends.begin(), friends.end(), user->getId()) != friends.end()) {
		std::cout << "You are alredy friends!!" << std::endl;
	}
	else {
		friends.push_back(user->getId());
		std::cout << "Friend " + user->getName() + " added" << std::endl;
	}
}
void User::removeFriend(User* user)
{

	if (std::find(friends.begin(), friends.end(), user->getId()) != friends.end()) {
		friends.remove(user->getId());
		std::cout << "Friend " + user->getName() + " remvoved" << std::endl;
	}
	else {
		std::cout << "You are alredy friends!!" << std::endl;
	}
}
void User::post(string text) {
	Post* post = new Post(text);
	posts.push_front(post);
	
	delete post;
}
void User::post(string text, Media* media) {
	Post* post = new Post(text, media);
	posts.push_front(post);
	delete post;
}
list<Post*> User::getPosts() {
	return posts;
}
void User::viewFriendsPosts() {
	//viewFriendsPosts;
	for (auto const& i : friends) {
		User* user = us->getUserById(i);
		for (auto const& j : user->getPosts()) {
			cout << j->getText() << endl;
			if (j->getMedia())
				cout << j->getText() << endl;
			cout << "\n" << endl;
		}
	}
}
void User::receiveMessage(Message* message) {
	//receiveMessage
	receivedMsgs.push_back(message);
}
void User::sendMessage(User* user, Message* message) {
	//sendMessage
	if (find(friends.begin(), friends.end(), user->getId()) != friends.end()) {
		user->receiveMessage(message);
	}
	else
	{
		cout << "Only premium users can send to not friend, upgrade? its only 100$ a day" << endl;
	}
}
void User::viewReceivedMessages() {
	//viewReceivedMessages;
	for (auto const& message : receivedMsgs) {
		cout << message->getText() << endl;
	}
}
