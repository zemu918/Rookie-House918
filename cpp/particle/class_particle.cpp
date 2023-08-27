#include<iostream>
#include<string>
#include<iomanip>
#include<ratio>
#include<vector>
/*class frac
{
public: 
     int above;
     int below;
  frac add(frac) ;
  frac sub(frac) ;  
 
frac::frac(int i,int j)
   {
    above=i; belowj;
   }
frac frac::add(frac f)
  {
     frac f1(above below);
     f1.above +=f.above;
     return f1;
  }  
void frac::display()
{
   reduction()
   if (above == 0)
    std::cout << "0" << std::endl;
   else if (above%3 == 0)
    std::cout << "自旋为整数" << std::endl;
   else 
    std::cout << above << "/" << below <<std::endl; 

 }

};*/


class Particle
 {
public:
     std::string m_name;
     float m_mass;
     int c_num,c_den; 
     int s_num,s_den;
     
public:
     //int a,b;

     // std::ratio<a,b> Charge;
     /*  void setName(std::string name)
	 {    m_name = name;
	 }
     std::string getName()
     {    return m_name;  
     }
     void setMass(float mass)
     {    m_mass = mass;
     } 
      float getMass()
     {    return m_mass; 
     }*/

     
  //  void setSpin(float spin)
    // {    m_spin = spin;
    // }  
     // float getSpin()
    // {     return m_spin;
     //}


    // void setCharge(int a,int b)
    // {     std::ratio<a,b> m_charge;      
    // }
     
   //  float getCharge()
   // {     return m_charge
    //}
public: 
   Particle(std::string name,float mass,int cnum,int cden,int snum,int sden)
{
	 this->m_name = name;
	 this->m_mass = mass;
	 this->c_num = cnum;
	 this->c_den = cden;
	 this->s_num = snum;
         this->s_den = sden;
}

};

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

std::cout << "Please enter the particle you want to query:";
std::string name1;
std::cin >> name1;
  for (std::vector<Particle>::iterator it =v.begin();it !=v.end(); it++)
{
  if (it->m_name == name1 && it->c_den == 1)
    {
    std::cout << "name:" << it->m_name << "   mass:" << it->m_mass << "Mev" <<"   charge:" << it->c_num <<"   spin:" /*std::ratio<1,2>*/<< it->s_num << "/" << it->s_den << std::endl;
    }
  else if (it->m_name == name1)
  {
    std::cout << "name:" << it->m_name << "   mass:" << it->m_mass << "Mev" <<"   charge:" << it->c_num<< "/" << it->c_den <<"   spin:" << it->s_num << "/" << it->s_den << std::endl;
    }
}
}       

int main()
{   
    container();
 
 
 
 
 
 
    std::ratio<1,1> one;
    std::ratio<-1,1> negativeone;	    
    std::ratio<0,1> zero;	
    std::ratio<2,3> twothird;
    std::ratio<-1,3> negativeonethird;	    
    
    std::ratio<1,2> onesecond;

/*
    Particle p1;
    p1.setName("electron");
    p1.setMass(0.511);
    //p1.Charge(a=1,b=2);
    
    //p1.setSpin(0.5)     

    Particle p2;
    p2.setName("muon");
    p2.setMass(105.66);
    //p2.setCharge(-1);
        

    Particle p3;
    p3.setName("tau");
    p3.setMass(1776.8);
    // p3.setCharge(-1);

    Particle p4;
    p4.setName("elneutrino");
    p4.setMass(0);
    //p4.setCharge(0);

    Particle p5;
    p5.setName("muneutrino");
    p5.setMass(0.17);
    //p5.setCharge(0);

    Particle p6;
    p6.setName("tauneutrino");
    p6.setMass(18.2);
    //p6.setCharge(0);
 
    Particle p7;
    p7.setName("up");
    p7.setMass(2.2);
    //p7.setCharge(-1);

    Particle p8;
    p8.setName("down");
    p8.setMass(4.7);
   // p8.setCharge(-1);

    Particle p9;
    p9.setName("charm");
    p9.setMass(1280);
    //p9.setCharge(-1);

    Particle p10;
    p10.setName("strange");
    p10.setMass(96);
    //p1.setCharge(-1);

    Particle p11;
    p11.setName("top");
    p11.setMass(173100);
    //p1.setCharge(-1);

    Particle p12;
    p12.setName("bottom");
    p12.setMass(4180);
    //p1.setCharge(-1);
*/
    
//std::cout << "Please enter the particle you want to query:";
//std::string name1; 
//std::cin >> name1;
//int i;
//for(i=1;i<=12;i++)
//{
//if(name1 == "tau")
//{
// std::cout << "查询的粒子为：" << std::setw(11) << p3.getName() << "  质量为： "<< p3.getMass() << "Mev " << std::endl;
//}
//}



//std::cout << "粒子名：" << std::setw(11) << p1.getName() << "   charge=： "<< (p1.setCharge).num() << "/ " <<(p1.setCharge).den << std::endl;

//std::cout << "粒子名：" << std::setw(11) << p1.getName() << "   质量： "<< p1.getMass() << "Mev " << std::endl;
//std::cout << "粒子名：" << std::setw(11) <<p2.getName() << "   质量： "<< p2.getMass() << "Mev " << std::endl;
//std::cout << "粒子名：" << std::setw(11) <<p3.getName() << "   质量： "<< p3.getMass() << "Mev " << std::endl;
//std::cout << "粒子名：" <<  std::setw(11) <<p4.getName() << "   质量： "<< p4.getMass() << "Mev " << std::endl;
//std::cout << "粒子名：" << std::setw(11) << p5.getName() << "   质量： "<< p5.getMass() << "Mev " << std::endl;
//std::cout << "粒子名：" << std::setw(11) << p6.getName() << "   质量： "<< p6.getMass() << "Mev " << std::endl;
//std::cout << "粒子名：" << std::setw(11) << p7.getName() << "   质量： "<< p7.getMass() << "Mev " << std::endl;
//std::cout << "粒子名：" << std::setw(11) << p8.getName() << "   质量： "<< p8.getMass() << "Mev " << std::endl;
//std::cout << "粒子名：" << std::setw(11) << p9.getName()  << "   质量： "<< p9.getMass() << "Mev " << std::endl;
//std::cout << "粒子名：" << std::setw(11) << p10.getName() << "   质量： "<< p10.getMass() << "Mev " << std::endl;
//std::cout << "粒子名：" << std::setw(11) << p11.getName() << "   质量： "<< p11.getMass() << "Mev " << std::endl;
//std::cout << "粒子名：" << std::setw(11) << p12.getName() << "   质量： "<< p12.getMass() << "Mev " << std::endl;






  return 0;
}


