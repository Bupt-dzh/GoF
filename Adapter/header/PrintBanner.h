//ʹ�ü̳еķ�ʽ
#pragma once
#include"Banner.h"
#include"Print.h"
class PrintBanner :public Banner,public Print{
public:
	PrintBanner(std::string pb);
	void printWeak();
	void printStrong();
};