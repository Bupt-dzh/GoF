#include"CharDisplay.h"

using namespace std;

CharDisplay::CharDisplay(char init_char) {
	ch = init_char;
}

void CharDisplay::open() {
	cout << "<<";
}

void CharDisplay::print(){
	cout << ch;
}

void CharDisplay::close(){
	cout << ">>" << endl;
}
