//使用继承的方式
#pragma once
#include"Banner.h"
#include"Print.h"
class PrintBanner :public Banner,public Print{
public:
	PrintBanner(std::string pb);
	void printWeak();
	void printStrong();
};