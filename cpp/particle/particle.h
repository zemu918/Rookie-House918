#include<string>
#include<iostream>
#include<vector>
#include<math.h>
#include<utility>
class Particle
{
public:
     std::string m_name;
     float m_mass;
     int c_num,c_den;
     float v,mIn,m0;  
public:
     Particle(std::string name,float mass,int cnum,int cden):
      m_name(name),m_mass(mass),c_num(cnum),c_den(cden){
	      std::cout << "default Particle" << std::endl;
      }
/*     void correct(){
       std::cout<<"Please enter the velocity of the particle:" << std::endl;
       std::cin>> v;
       m0=m_mass;
       mIn= m0 / sqrt(1 - pow(v,2));
       std::cout<< mIn <<" Mev" << std::endl;
       }
*/
     Particle(const Particle & p){
   	     std::cout << "copy Particle" << std::endl;
                     m_name = p.m_name;
                     m_mass = p.m_mass;
                     c_num = p.c_num;
                     c_den = p.c_den;
     }
	Particle(Particle && p){
             std::cout << "move Particle" << std::endl;
                     m_name = std::move(p.m_name);
                     m_mass = std::move(p.m_mass);
                     c_num = std::move(p.c_num);                                 c_den = std::move(p.c_den);
	}
    //  ~Particle(){std::cout << "destruct Particle" << std::endl;}
};
class Fermi:public Particle
  {
public:
	int s_num;
        int s_den;
     Fermi(int snum,int sden,std::string name,float mass,int cnum,int cden):
	     s_num(snum),s_den(sden),Particle(name,mass,cnum,cden){} 
     ~Fermi(){std::cout << "destruct Fermi" << std::endl; }
  };

class Lepton:public Fermi
  {
  public:
       int m_lepnum;
       int m_ellepnum;
       int m_mulepnum;
       int m_taulepnum;
   Lepton(int lepnum,int ellepnum,int mulepnum,int taulepnum,int snum,int sden,std::string name,float mass,int cnum,int cden):m_lepnum(lepnum),m_ellepnum(ellepnum),m_mulepnum(mulepnum),m_taulepnum(taulepnum),Fermi(snum,sden,name,mass,cnum,cden){}
     ~Lepton(){std::cout << "destruct Lepton" << std::endl; }
 
  };

void container2(std::vector<Lepton> &v2);
void query(std::vector<Lepton> v,std::string name1);
void container();
