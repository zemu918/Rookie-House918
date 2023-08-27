#include <iostream>

int main(){

auto str = "hello world";

std::cout << typeid(str).name() <<std::endl;

return 0;

}
