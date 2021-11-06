#pragma once
#include <string>
using namespace std;

class Message
{
private:
	string text;
public:
	Message(string Text);
	string getText();
};

