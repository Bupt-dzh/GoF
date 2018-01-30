#pragma once
#include"Iterator.h"
#include"BookShelf.h"
class BookShelfIterator :public Iterator{
private:
	BookShelf* bookShelf;
	int index;
public:
	BookShelfIterator(BookShelf *bookShelf);
	bool hasNext();
	void* next();
};