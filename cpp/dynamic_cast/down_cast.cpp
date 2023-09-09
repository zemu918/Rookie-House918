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
    Base* base = new Derived;
    if(Derived *der = dynamic_cast<Derived*>(base)){
        std::cout<<"first success:";
        der->Show();
    }
    Base * base1 = new Base;
    if(Derived *der1 = dynamic_cast<Derived*>(base1)){
        std::cout<<"second success:";
        der1->Show();
    }
    else{
        std::cout<<"second failure"<<std::endl;  
    }
}










