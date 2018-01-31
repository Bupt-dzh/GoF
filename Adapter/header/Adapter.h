//使用函数指针(委托)
//这个方法创建了一个Banner实例
#pragma once
#include"Banner.h"
#include"Print.h"
typedef 
class Adapter :public Print {
private:
	Banner* pBanner;
public:
	Adapter(std::string astr) {
		pBanner = new Banner(astr);
	}
	~Adapter(){
		delete pBanner;
	}
	void printWeak();
	void printStrong();
};
