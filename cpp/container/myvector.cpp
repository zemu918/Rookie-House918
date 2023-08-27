#include <string>
#include "myvector.h"
#include <iostream>

void printIntVec(myvector<int>& myv){
	for(int i = 0; i< myv.getSize();i++){
		std::cout << myv[i] << "  ";
	}
	std::cout << std::endl;
}
void test(){
	myvector<int> vect1(10);
	for (int i = 0;i < 10; i++){
		vect1.Push_back(i);
	}  
	std::cout << "vect1 print:" << std::endl;
	printIntVec(vect1);
	std::cout << "vect1 size:" <<vect1.getSize() << std::endl;
	std::cout << "vect1 capacity:" <<vect1.getCapacity()<<std::endl;
	std::cout << "-------------------" << std::endl;
	myvector<int> vect2(vect1);
	vect2.Pop_back();
	std::cout << "vect2 print:" << std::endl;
        printIntVec(vect2);
        std::cout << "vect2 size:" <<vect2.getSize() << std::endl;
	std::cout << "vect2 capacity:" <<vect2.getCapacity()<<std::endl; 
}
int main(){

    test();
return 0;

}





