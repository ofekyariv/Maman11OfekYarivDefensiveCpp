#include "Message.h"
#include <string>
using namespace std;
//create message
Message::Message(string text) {
	this->text = text;
}
string Message::getText() {
	return text;
}
