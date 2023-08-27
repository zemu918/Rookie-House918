#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> vec{3,4,6,8,5};
	sort(vec.begin(),vec.end(),[](int a,int b){return a>b;});
	                         //[]( )->typename{ };  
	for (size_t i=0; i<vec.size(); i++)
	{
		std::cout << vec[i] << " ";
	}
	std::cout << std::endl;
}

