#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>

template<typename T, typename S>
struct Play
{
    S _str;
    Play(S str):_str(str) {}
    void operator() (T elem){
	    std::cout<<_str<<elem<<std::endl;
    }
};
int main()
{
    int a[] = {1, 3, 4, 5};
    std::vector<int> vc(a, a+sizeof(a)/sizeof(int));
    std::for_each(vc.begin(), vc.end(), Play<int, const char*>("Element "));
}






