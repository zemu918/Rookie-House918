
#include <iostream>	
template <class T>
void printarg(T t)
{
	std::cout << t << std::endl;
}

template <class ...Args>
void expand(Args... args)
{
   int arr[] = {(printarg(args), 0)...};
}
int main(void){
	expand(1,2,3,4);
}


