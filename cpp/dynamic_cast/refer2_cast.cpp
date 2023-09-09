#include<iostream>
class Base
{
public:
    Base(){};
    virtual void Show(){
        std::cout<<"This is Base calss"<<std::endl;
    }
};
class Derived:public Base
{
public:
    Derived(){};
    void Show(){
        std::cout<<"This is Derived class"<<std::endl;
    }
};
int main(){    
    Derived d;
    Base &base1= d;
    Derived &der1 = dynamic_cast<Derived&>(base1);
    std::cout<<"first status：";
    der1.Show();
  
    Base b;
    Base &base = b;
    std::cout<<"second status：";
      try{
        Derived & der = dynamic_cast<Derived&>(base);
      }
      catch(std::bad_cast){
          std::cout<<"failure,bad_cast"<<std::endl;
      }
}













