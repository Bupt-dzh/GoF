#include"Book.h"
Book::Book(std::string name) {
	this->name = name;
}
Book::Book(void){
	this->name = "null";
}
std::string Book::getName() {
	return this->name;
}