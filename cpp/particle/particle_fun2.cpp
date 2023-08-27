#include<iostream>
#include<vector>
#include"particle.h"

void container()
{
  std::vector<Particle> v;
  
  Particle p1("electron",0.511,-1,1);
  Particle p2("muon",105.66,-1,1);
  Particle p3("tau",1776.8,-1,1);
  Particle p4("elneutrino",0,0,1);
  Particle p5("muneutrino",0.17,0,1);
  Particle p6("tauneutrino",18.2,0,1);
  Particle p7("up",2.2,2,3);
  Particle p8("down",4.7,-1,3);
  Particle p9("charm",1280,2,3);
  Particle p10("strange",96,-1,3);
  Particle p11("top",173100,-1,3);
  Particle p12("bottom",4180,-1,3);
  Particle p13("photon",0,0,1);
  Particle p14("gluon",0,0,1);
  Particle p15("Zboson",91190,0,1);
  Particle p16("Wboson+",80390,-1,1);
  Particle p17("Wboson-",80390,1,1);
  Particle p18("higgs",124970,0,1);
  v.emplace_back(p1);
  v.emplace_back(p2);
  v.emplace_back(p3);
  v.emplace_back(p4);
  v.emplace_back(p5);
  v.emplace_back(p6);
  v.emplace_back(p7);
  v.emplace_back(p8);
  v.emplace_back(p9);
  v.emplace_back(p10);
  v.emplace_back(p11);
  v.emplace_back(p12);
  v.emplace_back(p13);
  v.emplace_back(p14);
  v.emplace_back(v[14]);
  v.emplace_back("Wboson+",80390,-1,1);
  v.emplace_back("Wboson-",80390,1,1);
  v.emplace_back("higgs",124970,0,1);   

  for(const auto vec: v)std::cout << vec <<"  " << std::endl;
  }  
  
  
  /*std::cout << "Please enter the particle you want to query:";
std::string name1;
std::cin >> name1;
  for (std::vector<Particle>::iterator it =v.begin();it !=v.end(); it++)
{
  if (it->m_name == name1 && it->c_den == 1)
    {
    std::cout << "name:" << it->m_name << "   mass:" << it->m_mass << "Mev" <<"   charge:" << it->c_num << std::endl;
    }
  else if (it->m_name == name1)
  {
    std::cout << "name:" << it->m_name << "   mass:" << it->m_mass << "Mev" <<"   charge:" << it->c_num<< "/" << it->c_den << std::endl;
    }
}*/


