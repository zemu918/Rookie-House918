#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<typeinfo>

template<typename T,char str>
void play(T elem){
	std::cout<<str<<elem<<std::endl;
}

int main()
{
    int a[] = {1, 3, 4, 5};
    std::vector<int> vc(a, a+sizeof(a)/sizeof(int));
    std::for_each(vc.begin(), vc.end(), play<int, 'a'>);
}









