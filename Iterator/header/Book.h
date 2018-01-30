#pragma once
#include<string>
class Book {
private:
	std::string name;
public:
	Book(std::string name);
	Book(void);
	std::string getName();
};