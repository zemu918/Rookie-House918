#include <iostream>

template<class head,class...Args>
void expand(const head& h,Args&&...args){
	std::initializer_list<int>{(h(std::forward<Args>(args)),0)...};
}

int main(void){
  expand([](auto i){std::cout<< i <<std::endl;},1,2.2,"test");
return 0;


}
