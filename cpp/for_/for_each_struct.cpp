#include<iostream>
#include<vector>
#include<algorithm>

struct Play
{
    const char* str;
    Play(){}
    Play(const char* s):str(s) {}
    void operator () (int i){
	    std::cout<<str<<i<<std::endl;
    }
};

int main(){  
    int a[] = { 1, 2, 3, 4, 5};
    std::vector<int> vc(a, a+sizeof(a)/sizeof(int));
    for_each(vc.begin(), vc.end(), Play("element: "));
}
