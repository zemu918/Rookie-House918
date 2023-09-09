#include <iostream>
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
class Derived1:public Base
{
public:
    Derived1(){};
    void Show(){
        std::cout<<"This is Derived1 class"<<std::endl;
    }
};

int main(){
 
    Derived *d = new Derived;
    dynamic_cast<Derived1*>(d);
     std::cout << typeid(d).name() << std::endl;
}

