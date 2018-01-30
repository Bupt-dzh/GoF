#include"BookShelf.h"
#include"BookShelfIterator.h"

BookShelf::BookShelf(int maxsize) :last(0){
	this->books = new Book[maxsize];
	this->maxsize = maxsize;
}

BookShelf::~BookShelf() {
	delete[] books;
}

Book* BookShelf::getBookAt(int index) {
	return books + index;
}
 
bool BookShelf::appendBook(const Book &book) {
	if (last < maxsize) {
		*(books + last) = book;
		last++;
		return true;
	}
	return false;
}
 
 int BookShelf::getLength() {
	 return last;
 }
 
 Iterator* BookShelf::getIterator(){
	 return new BookShelfIterator(this);
 }