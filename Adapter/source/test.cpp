#include"PrintBanner.h"
#include"Adapter.h"
#include<iostream>
int main() {	
	//使用继承的方式
	Print* pa = new Adapter("qwq");
	pa->printWeak();
	pa->printStrong();
	delete pa;

	std::cout << "-------------------division---------------------" << std::endl;

	//创建了Banner实例并通过指针调用(委托)
	Print* pb = new PrintBanner("quq");
	pb->printWeak();
	pb->printStrong();
	delete pb;
	
	return 0;
}