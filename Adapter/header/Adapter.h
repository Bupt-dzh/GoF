//ʹ�ú���ָ��(ί��)
//�������������һ��Bannerʵ��
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
