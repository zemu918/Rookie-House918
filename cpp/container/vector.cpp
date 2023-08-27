#include<iostream>
#include<vector>


class Cube
{
public:
	int len;
	int wid;
	int hig;
public:
     Cube(int l,int w,int h)
     {
        this-> len = l;
        this-> wid = w;
	this-> hig = h;
     }	     

};

void test01()
{
   std::vector<Cube> v;
   Cube c1(10,10,10);
   Cube c2(11,11,11);
   Cube c3(12,12,12);

   v.push_back(c1);
   v.push_back(c2);
   v.push_back(c3);

   for(std::vector<Cube>::iterator it = v.begin(); it != v.end(); it++)
   {
    std::cout << "len:" << (*it).len << "wid:" << (*it).wid << "hig:" << (*it).hig << std::endl;  
   }

}  

int main()
{
   
 test01();
return 0;


}
