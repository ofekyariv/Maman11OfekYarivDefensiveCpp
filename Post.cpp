#include "Post.h"
#include <string>
#include <iostream>

using namespace std;

Post::Post(string text) {
	this->text = text;
	cout << text << endl;
}
Post::Post(string text, Media* media) {
	this->text = text;
	cout << text << endl;
	this->media = media;
	media->display();
}
string Post::getText() {
	return this->text;
}
Media* Post::getMedia() {
	return this->media;
}