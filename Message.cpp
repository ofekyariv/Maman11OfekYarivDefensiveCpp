#include "Message.h"
#include <string>

using namespace std;
Message::Message(string text) {
	this->text = text;
}
string Message::getText() {
	return text;
}
