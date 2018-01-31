#include"PrintBanner.h"
#include<iostream>
PrintBanner::PrintBanner(std::string pb) : Banner(pb) {}

void PrintBanner::printWeak() {
	Banner::showWithParen();
}

void PrintBanner::printStrong() {
	Banner::showWithAster();
}