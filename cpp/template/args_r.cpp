#include <iostream>

void print()
{
	std::cout << "empty" << std::endl;
}

	template <class T, class ...Args>
	void print(T head, Args... args){
	std::cout << "parameter: " << head << std::endl;
   	print(args...);
}


int main(void)
{
   print(1,2,3,4);
   return 0;
}
