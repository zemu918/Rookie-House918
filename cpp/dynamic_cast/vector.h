#include<string>
#include<iostream>
#include<vector>
class Particle
{
public:
    Particle(){};
    virtual void show(){
        std::cout<<"this is particle class"<<std::endl;
    }
};
class Quark:public Particle
{
public:
    void show(){
        std::cout<<"this is quark class"<<std::endl;
    }
};
class Lepton:public Particle
{
public:
    void show(){
        std::cout<<"this is lepton class"<<std::endl;
    }
};

class Boson:public Particle 
{
public:
    void show(){
        std::cout<<"this is boson class"<<std::endl;
    }
};
class Charged:public Boson
{
public:
    void show(){
        std::cout<<"this is charged boson class"<<std::endl;
    }
};
class Uncharged:public Boson
{
public:
    void show(){
        std::cout<<"this is uncharged boson class"<<std::endl;
    }
};






