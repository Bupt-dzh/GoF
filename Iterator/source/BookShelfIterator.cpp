#include"BookShelfIterator.h"

BookShelfIterator::BookShelfIterator(BookShelf* bookShelf) {
	this->bookShelf = bookShelf;
	index = 0;
}

bool BookShelfIterator::hasNext() {
	if (index < bookShelf->getLength())
		return true;
	return false;
}

void* BookShelfIterator::next() {
	index++;
	return bookShelf->getBookAt(index - 1);
}