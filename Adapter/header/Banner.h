#pragma once
#include<string>

class Banner {
private:
	std::string str;
public:
	Banner(std::string init);
	void showWithParen();
	void showWithAster();
};