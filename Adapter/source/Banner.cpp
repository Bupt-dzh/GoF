#include"Banner.h"
#include<iostream>
Banner::Banner(std::string init) {
	str = init;
}

void Banner::showWithParen() {
	std::cout << "(" << str << ")" << std::endl;
	}
void Banner::showWithAster() {
	std::cout << "*" << str << "*" << std::endl;
}

