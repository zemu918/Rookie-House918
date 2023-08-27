#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int sum = 0;
	int std = 1;
 	std::vector<int> vec{3,4};
	for_each(vec.begin(),vec.end(),[&sum,std](int x){sum += (x+std);});
	     //default [&]refer [=]copy //[&,!&] [=,&]
	std::cout << sum << std::endl;
}








