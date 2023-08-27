#include<iostream>


class ChargedTrack{
public:
        virtual void findarea()= 0;
};

class GoodGamma{
public:
        virtual void findangle() = 0;
};
class ParticleID{
public:
        virtual void findmomentum() = 0;
};

class Vertexfit{
public:
        virtual void findvertex() = 0;
};

class Momentumfit{
public:
 	virtual void findtrack() = 0;
};

class Analysis
{
public:
        ChargedTrack *m_chgtrk;
	GoodGamma *m_gdgam;
	ParticleID *m_PID;
	Vertexfit *m_Vfit;
	Momentumfit *Mfit;
        Analysis(ChargedTrack *chgtrk,GoodGamma *gdgam,ParticleID *PID,Vertexfit *Vfit,Momentumfit *Mfit):m_chgtrk(chgtrk),m_gdgam(gdgam),m_PID(PID),m_Vfit(Vfit),m_Mfit(Mfit){}

void calculate(){
    m_chgtrk->findarea();
    m_gdgam->findangle();
    m_PID->findmomentum();
    m_Vfit->findvertex();
    m_Mfit->findtrack();
    }
   ~Analysis(){
     if (m_chgtrk!=Null){delete m_chgtrk;m_chgtrk=Null;}
     if (m_gdgam!=Null){delete{}


   }
};
class Rhopi_ChargedTrack:public ChargedTrack{
public:
        virtual void findarea(){
		std::cout << "Phopi find chaged track" << std::endl;
	}
};
class Rhopi_GoodGamma:public GoodGamma{
public:
        virtual void findangle(){
                std::cout << "Phopi find good gamma" << std::endl;
        }
};
class Rhopi_ParticleID:public ParticleID{
public:
        virtual void findmomentum(){
                std::cout << "Phopi particle identify" << std::endl;
        }
};
class Rhopi_Vertexfit:public Vertexfit{
public:
        virtual void findvertex(){
                std::cout << "Phopi fit in vertex" << std::endl;
        }
};
class Rhopi_Momentumfit:public Momentumfit{
public:
        virtual void findtrack(){
                std::cout << "Phopi find final track" << std::endl;
        }
};

void write_ana()
{
    ChargedTrack *Rhopi_ChargedTrack =new Rhopi_ChargedTrack;
    GoodGamma *Rhopi_GoodGamma =new Rhopi_GoodGamma;
    ParticleID *Rhopi_ParticleID =new Rhopi_ParticleID;
    Vertexfit *Rhopi_Vertexfit =new Rhopi_Vertexfit;
    Momentumfit *Rhopi_Momentumfit =new Rhopi_Momentumfit;

    Analysis *Analysis1 = new Analysis(Rhopi_ChargedTrack,Rhopi_GoodGamma,Rhopi_ParticleID,Rhopi_Vertexfit,Rhopi_Momentumfit);
    Analysis1->calculate();
    delete Analysis1;
} 

int main(){
    write_ana();
return 0;
}

