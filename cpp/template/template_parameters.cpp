#include <iostream>
#include <iomanip>

void print() {}

template<typename T, typename... Types>// more than 1
void print(const T& firstArg, const Types&... args) {
       std::cout << std::setw(4) << firstArg << std::setw(4) << sizeof...(args) << std::endl;
       print(args...);
}

template <typename... Types>// more than 0
void print(const Types&... args) {
  std::cout << "print(...)" << std::endl;
}

int main(void) 
{
	print(1,"STCF",2,"CEPC",3,"LHCb");
	return 0;
}



template<typename T, typename ... Types>
T sum (T first, Types ... rest){
	return first + sum <T> (rest...);
}
sum(1,2,3,4);





