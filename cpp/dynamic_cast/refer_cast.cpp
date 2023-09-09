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
    Derived der;
    Derived & der1= der;
    Base & base= dynamic_cast<Base&>(der1);
    base.Show();
}









