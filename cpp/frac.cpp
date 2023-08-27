#include<iostream>
#include<ratio>


int main()
{
  std::ratio<1,2> onesecond;
  std::cout << onesecond.num << "/" << onesecond.den << std::endl;
return 0;

}
