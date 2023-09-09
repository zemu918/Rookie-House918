#include <iostream>
#include <vector>
#include "vector.h"

int main(){
    Particle *p1 = new Quark; 
    Particle *p2 = new Lepton;//up-->down 
    Boson *b1 = new Charged; 
    Particle *p3 = b1;
    Boson *b2 = new Uncharged;
    Particle *p4 = b2;//up->up->down
    std::vector<Particle*> v;
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    for (auto &vec:v) vec->show();
    if(Quark *q = dynamic_cast<Quark*>(v[0])){
        std::cout<< "particle->quark success"<<std::endl;
    }
    if(Lepton *l = dynamic_cast<Lepton*>(v[1])){
        std::cout <<"particle->lepton success"<<std::endl;
    }

        Boson *bx=dynamic_cast<Boson*>(v[2]);
    if(Charged *c = dynamic_cast<Charged*>(v[2])){
        std::cout<<"particle->boson->charged success"<<std::endl;
    }
    else if(Charged *c = dynamic_cast<Charged*>(bx)){
        std::cout<<"boson->charged success"<<std::endl;
    }
    else {std::cout<<"both failure"<<std::endl;}
    
        Boson *by=dynamic_cast<Boson*>(v[3]);
    if(Uncharged *u = dynamic_cast<Uncharged*>(v[3])){
        std::cout<<"particle->boson->uncharged success"<<std::endl;
    }
    else if(Uncharged *u = dynamic_cast<Uncharged*>(by)){
        std::cout<<"boson->ncharged success"<<std::endl;
    }
    else {std::cout<<"both failure"<<std::endl;}
return 0;
}

