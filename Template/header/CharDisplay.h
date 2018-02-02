#pragma once
#include"AbstractDisplay.h"
#include<iostream>

class CharDisplay : public AbstractDisplay {
private:
	char ch;
public:
	CharDisplay(char init_char);
	void open();
	void print();
	void close();
};