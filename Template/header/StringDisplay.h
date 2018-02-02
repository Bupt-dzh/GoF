#pragma once
#include"AbstractDisplay.h"
#include<iostream>
#include<string>

class StringDisplay :public AbstractDisplay {
private:
	std::string str;
	unsigned int len;
	void splitter();
public:
	StringDisplay(std::string init_str);
	void open();
	void print();
	void close();
};