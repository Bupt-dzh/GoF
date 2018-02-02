#include"StringDisplay.h"

using namespace std;

StringDisplay::StringDisplay(string init_str){
	str = init_str;
	len = str.size();
}

void StringDisplay::open(){
	splitter();
}

void StringDisplay::print() {
	cout <<"|"+ str+"|" << endl;
}

void StringDisplay::close(){
	splitter();
}

void StringDisplay::splitter(){
	cout << "+";
	for (int i = 0; i < len; i++)
		cout << "-";
	cout << "+" << endl;
}
