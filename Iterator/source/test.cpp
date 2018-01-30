#include"Aggregate.h"
#include"Iterator.h"
#include"Book.h"
#include"BookShelf.h"
#include"BookShelfIterator.h"

#include<iostream>

int main() {
	
	BookShelf myBookShelf(10);
	myBookShelf.appendBook(*new Book("Phantom"));
	myBookShelf.appendBook(*new Book("TigerxGragon"));
	myBookShelf.appendBook(*new Book("Koto no ha no niwa"));
	myBookShelf.appendBook(*new Book("The Shape of Voice"));
	
	Iterator* it = myBookShelf.getIterator();
	while (it->hasNext()) {
		std::cout<<((Book*)it->next())->getName()<<std::endl;
	}
	
	return 0;
}