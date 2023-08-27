#include <iostream>
#include <vector>

int main(){
	int a[]={1,2,3,4,5,6,7,8,9,10};
        std::vector<int> v;
	for (auto arr:a) v.push_back(arr);
        /*for (int i = 0;i < 10; i++){
                v.push_back(i);
        }*/
        for (auto vec:v) std::cout<< vec <<"  ";std::cout<<std::endl;
	std::cout <<"---------------------" << std::endl;
	for (auto &v1:v) std::cout << v1 <<"  ";std::cout<<std::endl;//can modify

return 0;

}

















