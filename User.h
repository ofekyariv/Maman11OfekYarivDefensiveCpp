#pragma once
#include<list>
#include<string>
#include"Post.h"
#include"Message.h"

using namespace std;
class User
{
protected:
	//?
	USocial* us;
	static unsigned long uId;
	string uName;
	list<unsigned long> friends;
	list<Post*> posts;
	list<Message*> receivedMsgs;
	User();
	//User(string uName);
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
	virtual void sendMessage(User* user, Message* message);
	void viewReceivedMessages();
};

