#include "Post.h"
#include <string>

using namespace std;

Post::Post(string text) {
	this->text = text;
}
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