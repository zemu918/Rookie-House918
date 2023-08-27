#include <iostream>
#include "myvector.h"
#include <string>

class Particle{
	public:
              std::string m_Name;
              int m_Mass;
	Particle(){}
	Particle(std::string name,double mass):m_Name(name),m_Mass(mass){}	
};
	void printParticlevec(myvector<Particle>& Par_vec){
		for (int i = 0; i<Par_vec.getSize();i++ ){
	std::cout << "name: " << Par_vec[i].m_Name << "  mass: "<< Par_vec[i].m_Mass<< std::endl;
		}
	}
void test(){
	myvector<Particle>pvec (20);
 	Particle p1("electron",0.511);
 	Particle p2("muon",105.66);
 	Particle p3("tau",1776.8);
 	Particle p4("elneutrino",0);
 	Particle p5("muneutrino",0.17);
 	Particle p6("tauneutrino",18.2);
 	Particle p7("up",2.2);
 	Particle p8("down",4.7);
 	Particle p9("charm",1280);
	pvec.Push_back(p1);
	pvec.Push_back(p2);
	pvec.Push_back(p3);
	pvec.Push_back(p4);
	pvec.Push_back(p5);
	pvec.Push_back(p6);
	pvec.Push_back(p7);
	pvec.Push_back(p8);
	pvec.Push_back(p9);
	pvec.emplace_back("Wboson+",80390);
	pvec.emplace_back("strange",96);
	pvec.emplace_back("top",173100);
	pvec.emplace_back("bottom",4180);
	pvec.emplace_back("photon",0);
	pvec.emplace_back("gluon",0);
	pvec.emplace_back("Zboson",91190);
	pvec.emplace_back("Wboson-",80390);
	pvec.emplace_back("higgs",124970);

	printParticlevec(pvec);

	std::cout << "size ：" << pvec.getSize() << std::endl;
	std::cout << "capacity：" << pvec.getCapacity() << std::endl;
}

int main(){
	test();
	return 0;
}













