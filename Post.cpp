#include "Post.h"
#include <string>
#include <iostream>

using namespace std;
//create post
Post::Post(string text) {
	this->text = text;
}
//create post with media
Post::Post(string text, Media* media) {
	this->text = text;
	this->media = media;
}
string Post::getText() {
	return this->text;
}
Media* Post::getMedia() {
	return this->media;
}