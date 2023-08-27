//#ifndef _template_h 
//#define _template_h 1
//#include "template_fun.cpp"
#include "template.h"
#include <string>

void test(){
	Byd<std::string, int> b("tang",20);
	b.showByd();
	}

int main(){
	test();
	return 0;
}

//#endif







