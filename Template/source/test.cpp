#include"AbstractDisplay.h"
#include"CharDisplay.h"
#include"StringDisplay.h"

int main() {
	AbstractDisplay* p_ch = new CharDisplay('Y');
	AbstractDisplay* p_st = new StringDisplay("(*/¦Ø£Ü*)");
	p_ch->display();
	p_st->display();
	delete p_ch;
	delete p_st;
	return 0;
}