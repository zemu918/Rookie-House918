#include "particle.h"
#include <string>
#include <vector> 
#include <iostream>
/*
void container()
{
  std::vector<Particle> v;
  Particle p1("electron",0.511,-1,1,1,2);
  Particle p2("muon",105.66,-1,1,1,2);
  Particle p3("tau",1776.8,-1,1,1,2);
  Particle p4("elneutrino",0,0,1,1,2);
  Particle p5("muneutrino",0.17,0,1,1,2);
  Particle p6("tauneutrino",18.2,0,1,1,2);
  Particle p7("up",2.2,2,3,1,2);
  Particle p8("down",4.7,-1,3,1,2);
  Particle p9("charm",1280,2,3,1,2);
  Particle p10("strange",96,-1,3,1,2);
  Particle p11("top",173100,-1,3,1,2);
  Particle p12("bottom",4180,-1,3,1,2);
  Particle p13("photon",0,0,1,1,1);
  Particle p14("gluon",0,0,1,1,1);
  Particle p15("Zboson",91190,0,1,1,1);
  Particle p16("Wboson+",80390,-1,1,1,1);
  Particle p17("Wboson-",80390,1,1,1,1);
  Particle p18("higgs",124970,0,1,0,1);
  v.push_back(p1);
  v.push_back(p2);
  v.push_back(p3);
  v.push_back(p4);
  v.push_back(p5);
  v.push_back(p6);
  v.push_back(p7);
  v.push_back(p8);
  v.push_back(p9);
  v.push_back(p10);
  v.push_back(p11);
  v.push_back(p12);
  v.push_back(p13);
  v.push_back(p14);
  v.push_back(p15);
  v.push_back(p16);
  v.push_back(p17);
  v.push_back(p18);
std::cout << "Please enter the particle you want to query:";
std::string name1;
std::cin >> name1;
  for (std::vector<Particle>::iterator it =v.begin();it !=
v.end(); it++)
{
  if (it->m_name == name1 && it->c_den == 1)
    {
    std::cout << "name:" << it->m_name << "   mass:" << it->m_mass << "Mev" <<"   charge:" << it->c_num <<"   spin:" std::ratio<1,2><< it->s_num << "/" << it->s_den << std::endl;
    }
  else if (it->m_name == name1)
  {
    std::cout << "name:" << it->m_name << "   mass:" << it->m_mass << "Mev" <<"   charge:" << it->c_num<< "/" << it->c_den <<"   spin:" << it->s_num << "/" << it->s_den << std::endl;
    }
}
}

*/

void container2(std::vector<Lepton> &v2){

  v2.emplace_back(1,1,0,0,1,2,"electron",0.511,-1,1);
  Lepton l2(1,0,1,0,1,2,"muon",105.66,-1,1);
  Lepton l3(1,0,0,1,1,2,"tau",1776.8,-1,1);
  Lepton l4(1,1,0,0,1,2,"elneutrino",0,0,1);
  Lepton l5(1,0,1,0,1,2,"muneutrino",0.17,0,1);
  Lepton l6(1,0,0,1,1,2,"tauneutrino",18.2,0,1);
  Lepton l7(0,0,0,0,1,2,"up",2.2,2,3);
  Lepton l8(0,0,0,0,1,2,"down",4.7,-1,3);
  Lepton l9(0,0,0,0,1,2,"charm",1280,2,3);
  Lepton l10(0,0,0,0,1,2,"strange",96,-1,3);
  Lepton l11(0,0,0,0,1,2,"top",173100,-1,3);
  Lepton l12(0,0,0,0,1,2,"bottom",4180,-1,3);
  //v2.push_back(l1);
  std::cout <<"size:" << v2.size() << "   capacity:" << v2.capacity() << std::endl;
  v2.push_back(l2);
  std::cout <<"size:" << v2.size() << "   capacity:" << v2.capacity() << std::endl;
  v2.push_back(l3);
  std::cout <<"size:" << v2.size() << "   capacity:" << v2.capacity() << std::endl;
  v2.push_back(l4);
  std::cout <<"size:" << v2.size() << "   capacity:" << v2.capacity() << std::endl;
  v2.push_back(l5);
  std::cout <<"size:" << v2.size() << "   capacity:" << v2.capacity() << std::endl;
  v2.push_back(l6);
  std::cout <<"size:" << v2.size() << "   capacity:" << v2.capacity() << std::endl;
  v2.push_back(l7);
  std::cout <<"size:" << v2.size() << "   capacity:" << v2.capacity() << std::endl;
  v2.push_back(l8);
  std::cout <<"size:" << v2.size() << "   capacity:" << v2.capacity() << std::endl;   
  v2.push_back(l9);
  std::cout <<"size:" << v2.size() << "   capacity:" << v2.capacity() << std::endl;
  v2.push_back(l10);
  std::cout <<"size:" << v2.size() << "   capacity:" << v2.capacity() << std::endl;
  v2.push_back(l11);
  std::cout <<"size:" << v2.size() << "   capacity:" << v2.capacity() << std::endl;
  v2.push_back(l12);
  std::cout <<"size:" << v2.size() << "   capacity:" << v2.capacity() << std::endl;
}




void query(std::vector<Lepton> v,std::string name1)
{
   //std::cout << "Please enter the particle you want to query:";
  // std::string name1;
  // std::cin >> name1;
   
   for (std::vector<Lepton>::iterator it =v.begin();it != v.end(); it++){
     if (it->m_name == name1 && it->c_den == 1){
       std::cout << "name:" << it->m_name << "   mass:" << it->m_mass << "Mev" <<"   charge:" << it->c_num <<"   spin:" /*std::ratio<1,2>*/<< it->s_num << "/" << it->s_den <<"   lepnum:" << it->m_lepnum << "   ellepnum:" << it->m_ellepnum << "   mulepnum:" << it->m_mulepnum  << "   taulepnum:" << it->m_taulepnum <<std::endl;
     }
     else if (it->m_name == name1){
       std::cout << "name:" << it->m_name << "   mass:" << it->m_mass << "Mev" <<"   charge:" << it->c_num<< "/" << it->c_den <<"   spin:" << it->s_num << "/" << it->s_den << "   lepnum:" << it->m_lepnum << "   ellepnum:" << it->m_ellepnum << "   mulepnum:" << it->m_mulepnum  << "   taulepnum:" << it->m_taulepnum << std::endl;
     }
   } 
}


