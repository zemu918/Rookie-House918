#include "polymorphism.h"
#include "polymorphism2.h"

void write_ana()
    {
        ChargedTrack* ChgTrk = new Tautau_ChargedTrack;
        GoodGamma* Ggam = new Rhopi_GoodGamma;
        ParticleID* PID = new Rhopi_ParticleID;
        Vertexfit* Vfit = new Rhopi_Vertexfit;
        Momentumfit* Mfit = new Rhopi_Momentumfit;
        
	Analysis* Analysis1 = new Analysis(ChgTrk, Ggam, PID, Vfit,Mfit);
        Analysis1->calculate();
        
	if (ChgTrk != NULL) { delete ChgTrk; ChgTrk = NULL; }
        if (Ggam != NULL) { delete Ggam; Ggam = NULL; }
        if (PID != NULL) { delete PID; PID = NULL; }
        if (Vfit != NULL) { delete Vfit; Vfit = NULL; }
        if (Mfit != NULL) { delete Mfit; Mfit = NULL; }
        delete Analysis1;
    }
