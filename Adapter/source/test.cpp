#include"PrintBanner.h"
#include"Adapter.h"
#include<iostream>
int main() {	
	//ʹ�ü̳еķ�ʽ
	Print* pa = new Adapter("qwq");
	pa->printWeak();
	pa->printStrong();
	delete pa;

	std::cout << "-------------------division---------------------" << std::endl;

	//������Bannerʵ����ͨ��ָ�����(ί��)
	Print* pb = new PrintBanner("quq");
	pb->printWeak();
	pb->printStrong();
	delete pb;
	
	return 0;
}