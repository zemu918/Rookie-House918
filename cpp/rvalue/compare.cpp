#include <iostream>

template<typename T>
void print(T& t){
	std::cout << "lvalue" << std::endl;
}
template<typename T>
void print(T&& t){
	std::cout << "rvalue" << std::endl;
}

template<typename T>
void TestForward(T && v){
    print(v);
    print(std::forward<T>(v));
    print(std::move(v));
}

int main(){
    TestForward(1);
    int x = 1;
    TestForward(x);
    TestForward(std::forward<int>(x));
    return 0;
}
