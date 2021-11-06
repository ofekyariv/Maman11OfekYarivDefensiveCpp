#pragma once
#include<list>
#include"Post.h"
#include"Message.h"
using namespace std;
class User
{
protected:
	US* us;
	unsigned long id;
	string name;
	list<unsigned long> friends;
	list<Post*> posts;
	list<Message*> receivedMsgs;

	User();
	~User();
public:
	unsigned long getId();
	string getName();
	void addFriend(User* user);
	void post(string text);
	void post(string text, Media* media);
	list<Post*> getPosts();
	void viewFriendsPosts();
	void receiveMessage(Message* message);
	void sendMessage(User* user, Message* message);
	void viewReceivedMEssages();
};

