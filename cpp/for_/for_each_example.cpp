#include <algorithm>
#include <iostream>
#include <vector>
/* 
int main()
{
    std::vector<int> v {3, -4, 2, -8, 15, 267};
    auto print = [](const int& n) { std::cout << n << ' '; };
 
    std::cout << "before: ";
    std::for_each(v.begin(), v.end(), print);
    std::cout << std::endl;
 
    // increment elements in-place
    std::for_each(v.begin(), v.end(), [](int &n) { n++; });
 
    std::cout << "after: ";
    std::for_each(v.begin(), v.end(), print);
    std::cout << std::endl;
}
*/
class Sum
{
public:
        void operator()(int n) { sum += n; }
        int sum = 0;
};
 
int main(){
    std::vector<int> v {3, -4, 2, -8, 15, 267};
    // invoke Sum::operator() for each element
    Sum s = std::for_each(v.begin(), v.end(), Sum());    
    std::cout << "sum:  " << s.sum << std::endl;
}






