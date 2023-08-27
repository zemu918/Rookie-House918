class ChargedTrack {
public:
    virtual void findarea() = 0;
};
class GoodGamma {
public:
    virtual void findangle() = 0;
};
class ParticleID {
public:
    virtual void findmomentum() = 0;
};
class Vertexfit {
public:
    virtual void findvertex() = 0;
};
class Momentumfit {
public:
    virtual void findtrack() = 0;
};
class Analysis
{
public:
    ChargedTrack* m_chgtrk;
    GoodGamma* m_gdgam;
    ParticleID* m_PID;
    Vertexfit* m_Vfit;
    Momentumfit* m_Mfit;

    Analysis(ChargedTrack* chgtrk, GoodGamma* gdgam, ParticleID* PID, Vertexfit* Vfit, Momentumfit* Mfit):
            m_chgtrk(chgtrk), m_gdgam(gdgam), m_PID(PID), m_Vfit(Vfit), m_Mfit(Mfit) {}

    void calculate() {
        m_chgtrk->findarea();
        m_gdgam->findangle();
        m_PID->findmomentum();
        m_Vfit->findvertex();
        m_Mfit->findtrack();
    }
};
void write_ana();
