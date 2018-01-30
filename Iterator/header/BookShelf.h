#pragma once
#include"Aggregate.h"
#include"Book.h"
class BookShelf :public Aggregate {
private:
	int maxsize;
	int last;
	Book* books;
public:
	BookShelf(int maxsize);
	~BookShelf();
	Book *getBookAt(int index);
	bool appendBook(const Book &book);
	int getLength();
	Iterator* getIterator();
};