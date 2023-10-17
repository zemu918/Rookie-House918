#include "EvtGenBase/EvtPatches.hh"
#include <math.h>
#include <stdlib.h>
#include "EvtGenBase/EvtParticle.hh"
#include "EvtGenBase/EvtKine.hh"
#include "EvtGenBase/EvtVector4C.hh"
#include "EvtGenBase/EvtVector4R.hh"
#include "EvtGenBase/EvtTensor4C.hh"
#include "EvtGenBase/EvtHelSys.hh"
#include "EvtGenBase/EvtComplex.hh"
#include <string>
#include "TMath.h"


using namespace std;
   
class Tau2Pigamnu{
    public:
        double m_tau = 1776.86;
        double m_pi = 139.57018;
        double m_k = 493.677;
        double pow_tau = m_tau*m_tau;
        double pow_pi = m_pi*m_pi;
        double pow_r_2 = pow_pi/pow_tau; 
        double pi = 3.141592653589793238;
        double G_F = 1.166E-11;
        double V_ud = 0.9745;
        double alph = 1.0/133.6;
    double TERM_c5,TERM_c3,TERM_c6,TERM_d3;
    double F = 90; //in the chiral limit
    double F_pi = 92.4; //pion decay constant
    double F_V = sqrt(3.0)*F;
    double M_V = 764.3;
    double N_c = 3.0;
    double d3 = -1.0/8.0; //N_c*M_V*M_V/(64.0*pi*pi*F_V*F_V);
    double F_A = sqrt(2.0)*F;
    double G_V = F/sqrt(3.0);
    double M_phi = 1019.461;
    double M_omega = 782.66;
    double M_rho = 775.26;
    double M_a1 = 1230;
    double lambda_apos = 1.0/(4.0*sqrt(3.0));//(2.0*G_V-F_V)/(2.0*sqrt(2.0)*F_A);
    double lambda0 = 1.0/(8.0*sqrt(3.0)); //G_V/(4.0*sqrt(2.0)*F_A);
    double sin = sqrt(1.0/3.0);
    double cos = sqrt(2.0/3.0);
    double t = m_tau*m_tau*(x+y-1.0);
               //pow(_pd[1]+_pd[2],2.0)
    double s = pow(_pd[1]+_pd[2],2.0);
    double sigma_kk = sqrt((s-pow(2.0*m_k,2))*s)*step(m_k,m_k)/s;
    double sigma_pipi = sqrt((s-pow(2.0*m_pi,2))*s)*step(m_pi,m_pi)/s;
    double Gam_rho = s*M_rho(pow(sigma_pipi,3)+0.5*pow(sigma_kk,3))/(96.0*pi*F*F);
    double Gam_a1 =//250-600

    //double D_rho = 1.0/(M_rho-t-i*M_rho*Gam_rho);
    double D_rho_r = (M_rho*M_rho-t)/(pow(M_rho,4)-2.0*M_rho*M_rho*t
                     +t*t+M_rho*M_rho*Gam_rho*Gam_rho)
    double D_rho_i = (M_rho*Gam_rho)/(pow(M_rho,4)-2.0*M_rho*M_rho*t
                     +t*t+M_rho*M_rho*Gam_rho*Gam_rho)
    //double D_a1 = 1.0/(M_a1-t-i*M_a1*Gam_a1);
    double D_a1_r = (M_a1*M_a1-t)/(pow(M_a1,4)-2.0*M_a1*M_a1*t
                    +t*t+M_a1*M_a1*Gam_a1*Gam_a1)
    double D_a1_i = (M_a1*Gam_a1)/(pow(M_a1,4)-2.0*M_a1*M_a1*t
                    +t*t+M_a1*M_a1*Gam_a1*Gam_a1)

    TERM_c5 = 0; // c2-c1-c5
    TERM_c3 = 0; // c5-c1-c2-8c3
    TERM_c6 = 3.0*sqrt(2.0)*F*F/(4.0*F_V*M_V) + sqrt(2.0)*F_V*d3/M_V; //c1-c2-c5+2c6
    TERM_d3 = F*F/(8.0*F_V*F_V); //d1+8d2-d3
    
    public:
        Tau2Pigamnu(EvtVector4R pd1, EvtVector4R pd2,EvtVector4R pd3){
             _pd[0]=pd1; //tau
             _pd[1]=pd2; //pi
             _pd[2]=pd3; //gam
        }
        double xx = 2.0*_pd[0]*_pd[2]/pow_tau; 
        double yy = 2.0*_pd[0]*_pd[1]/pow_tau;
        double gam_tau2pinu = pow(G_F, 2)*pow(V_ud, 2) *pow(F_pi, 2)
                             *pow(m_tau, 3)*pow(1-pow_r_2, 2)/(8*pi)

        double amps();

};

        double Tau2Pigamnu::f_IB(double x,double y){            
            double TERM1,TERM2,TERM3,tmp;
            TERM1 = pow_r_2*pow_r_2*(x+ 2.0) - 2*pow_r_2*(x+y);
            TERM2 = (x+y-1.0)*(2.0-3.0*x+x*x+x*y);
            TERM3 = pow(pow_r_2-x-y+1.0,2)*x*x; 
            tmp = (TERM1+TERM2)*(pow_r_2-y+1.0)/TERM3;
          return tmp;
        }

        double Tau2Pigamnu::f_VV(double x,double y){
            double TERM1,TERM2,tmp;P
            TERM1 = pow_r_2*pow_r_2*(x+y) + 2.0*pow_r_2
            TERM2 = (x+y-1.0)*(-x+x*x-y+y*y);
            tmp = -TERM1 -TERM2;
          return tmp; 
        }

        double Tau2Pigamnu::f_AV(double x,double y){
            double TERM1,TERM2,tmp;
            TERM1 = pow_r_2*(x+y) +(1.0-x-y)*(y-x);
            TERM2 = pow_r_2-x-y+1.0;
            tmp = -TERM1 *TERM2;
          return tmp;
        }

        double Tau2Pigamnu::f_AA(double x,double y){
          return f_VV(x,y);
        }

        double Tau2Pigamnu::f_IB_V(double x,double y){
            double tmp;
            tmp = (pow_r_2-x-y+1.0)*(pow_r_2-y+1.0)/x;
          return tmp;
        }

        double Tau2Pigamnu::f_IB_A(double x,double y){
            double TERM1,TERM2,tmp;
            TERM1 = pow_r_2*pow_r_2-2.0*pow_r_2*(x+y) + (1.0-x+y)*(x+y-1.0);
            TERM2 = (pow_r_2-x-y+1.0)*x;
            tmp = TERM1*(pow_r_2-y+1.0)/TERM2;
          return tmp;
        }
        
         EvtComplex Tau2Pigamnu::formfactor_V(){
             EvtComplex D_rho(D_rho_r,D_rho_i),tmpC(0.0,0.0);
             double TERM_theta,TERM1,TERM2,TERM3,TERM4R,tmpR;
             EvtComplex tmpC(0.0,0.0),TERM4C(0.0,0.0) ;
             TERM_theta = cos*cos*(1.0-sqrt(2.0)*(sin/cos))/(M_phi*M_phi)+
                     sin*sin*(1.0+sqrt(2.0)*(cos/sin))/(M_omega*M_omega);
             TERM1 = N_c/(24.0*pi*pi*F_pi);
             TERM2 = 2.0*sqrt(2.0)*F_V*(TERM_c5*t + TERM_c3*pow_pi)
                     * TERM_theta/(3.0*F_pi*M_V);
             TERM3 = 2.0*sqrt(2.0)*F_V* D_rho *(TERM_c6*t
                     + TERM_c3*pow_pi)/(3.0*F_pi*M_V);
             TERM4R = 4.0*F_V*F_V * (d3*t+TERM_d3*pow_pi)*TERM_theta/(3.0*F_pi);
             TERM4C = D_rho * TERM4R
             tmpR = TERM1 + TERM2 + TERM3;
             tmpC = TERM4C += tmpR;
           return tmpC;
         }

        EvtComplex Tau2Pigamnu::formfactor_A(){
            EvtComplex D_a1 (D_a1_r,D_a1_i):
            double TERM1,TERM2R,TERM3R,TERM_lambda;
            EvtComplex tmpC(0.0,0.0),TERM2C(0.0,0.0),TERM3C(0.0,0.0);
            TERM1 = F_V*F_V*(1.0-2.0*G_V/F_V)/(2.0*F_pi*M_rho*M_rho);
            TERM2R = F_A*F_A/(2.0*F_pi);
            TERM2C = D_a1 * TERM2R;
            TERM3R = sqrt(2.0)*F_A*F_V/(F_pi*M_rho*M_rho);
            TERM3C = D_a1 * TERM3R;
            TERM_lambda = -lambda_apos*t + lambda0*m_pi*m_pi;
            tmpC = TERM1 - TERM2C + TERM3C * TERM_lambda;
          return tmpC;
        }

    bool step(M_P,M_Q){
         if(s-pow(M_P+M_Q,2)>0)
            return true;
         else
            return false;
    }

        double Tau2Pigamnu::Gam_IB(double x,double y,gam_tau2pinu){
            double TERM1,tmp;
            TERM1 = gam_tau2pinu/pow(1.0- pow_r_2, 2);
            tmp = alph*f_IB(xx,yy)*TERM1/(2.0*pi);
          return tmp;
        }
        
        
        double Tau2Pigamnu::Gam_SD(double x,double y,gam_tau2pinu){
            EvtComplex facV(0.0,0.0) = formfactor_V;
            EvtComplex facA(0.0,0.0) = formfactor_A;
            double TERM1,tmp;
            double absV_2 = EvtComplex::abs2(facV);
            double absA_2 = EvtComplex::abs2(facA);
            double coupl = EvtComplex::real(facV*facA);
            TERM1 = absV_2*f_VV(xx,yy)+2.0*coupl*f_AV(xx,yy)+
                    absA_2*f_AA(xx,yy);                       
            TERM2 = gam_tau2pinu/pow(1.0 - pow_r_2, 2);
            tmp = alph*pow(m_tau,4)*TERM1*TERM2/(8*pi*F_pi);   
          return tmp;
        }   

        double Tau2Pigamnu::Gam_int(double x,double y,gam_tau2pinu){
            double TERM1,TERM2,tmp;
            EvtComplex facV(0.0,0.0) = formfactor_V;
            EvtComplex facA(0.0,0.0) = formfactor_A;
            double RealA =  EvtComplex::real(facA);
            double RealV =  EvtComplex::real(facV);
            TERM1 = f_IB_V(xx,yy)* RealV + f_IB_A(xx,yy)* RealA;
            TERM2 = gam_tau2pinu/pow(1.0- pow_r_2, 2);
            tmp = alph*pow_tau*TERM1*TERM2/(2.0*pi*F_pi);
          return tmp;
        }

        double Tau2Pigamnu::amps(){
            double Gam = Gam_IB + Gam_SD + Gam_int;
            double Amp = 256.0*pow(pi,3)/m_tau;
          return Amp;
        }
        
        double EvtDIYTau2Pigamnu::AmplitudeSquare(){
            EvtVector4R dp1=GetDaugMomLab(0);
            EvtVector4R dp2=GetDaugMomLab(1),dp3=GetDaugMomLab(2);
            Tau2Pigamnu tmp(dp1,dp2,dp3);
            return tmp.amps();
            }
















