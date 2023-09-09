#include <iostream>
class Base
{
public:
    virtual void Show(){
        std::cout<<"This is Base calss"<<std::endl;
    }
};
class Derived:public Base
{
public:
    void Show(){
        std::cout<<"This is Derived class"<<std::endl;
    }
};

int main(){
    Base *base;
    Derived *der = new Derived;
    base = dynamic_cast<Base*>(der);
    base->Show();
return 0;
}













