#include<iostream>
#include<math.h>




  void correct(float mass0, float velocity,float &massIn)
{
       massIn= mass0 / sqrt(1 - pow(velocity,2));
}
int main()
{
	std::cout<<"Please enter the velocity of the particle:" << std::endl;
        float v ,mp;
        correct(mimass,v,mp);
       std::cout << "2\n" << mp <<std::endl;

return 0;
}
