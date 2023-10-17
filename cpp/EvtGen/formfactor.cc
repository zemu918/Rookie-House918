#include<iostream>
#include<math.h>
using namespace std;
    
    double TERM_c5,TERM_c3,TERM_c6,TERM_d3; 
    double F = 90.8;
    double F_V = sqrt(3.0)*F;
    double M_V = 764.3;
    double N_c = 3.0;
    double d3 = N_c*M_V*M_V/(64.0*pi*pi*F_V*F_V);
    double F_pi = 92.4;
    double F_A = 2.0*F*F;
    double G_V = F/sqrt(3.0);
    double M_phi = 1019.461;
    double M_omega = 782.66;
    double M_rho = 775.26;
    double M_a1 = 1230;
    double lambda_apos = (2.0*G_V-F_V)/(2.0*sqrt(2.0)*F_A);
    double lambda0 = G_V/(4.0*sqrt(2.0)*F_A);
    double sin = sqrt(1.0/3.0);
    double cos = sqrt(2.0/3.0);
    double t = m_tau*m_tau*(x+y-1.0);
               //pow(_pd[1]+_pd[2],2.0)
    double s = pow(_pd[1]+_pd[2],2.0);
    double sigma_kk = sqrt((s-pow(2.0*m_k,2))*s)*step(m_k,m_k);
    double sigma_pipi = sqrt((s-pow(2.0*m_pi,2))*s)*step(m_pi,m_pi);
    double Gam_rho = s*M_rho(pow(sigma_pipi,3)+0.5*pow(sigma_kk,3))/(96.0*pi*F*F);
    double Gam_a1 = 

    double D_rho = 1.0/(M_rho-t-i*M_rho*Gam_rho);         
    double D_rho_r = (M_rho*M_rho-t)/(pow(M_rho,4)-2.0*M_rho*M_rho*t + t*t+M_rho*M_rho*Gam_rho*Gam_rho) 
    double D_rho_i = (M_rho*Gam_rho)/(pow(M_rho,4)-2.0*M_rho*M_rho*t + t*t+M_rho*M_rho*Gam_rho*Gam_rho)
    double D_a1 = 1.0/(M_a1-t-i*M_a1*Gam_a1);
    double D_a1_r = (M_a1*M_a1-t)/(pow(M_a1,4)-2.0*M_a1*M_a1*t + t*t+M_a1*M_a1*Gam_a1*Gam_a1)
    double D_a1_i = (M_a1*Gam_a1)/(pow(M_a1,4)-2.0*M_a1*M_a1*t + t*t+M_a1*M_a1*Gam_a1*Gam_a1) 

    TERM_c5 = 0;
    TERM_c3 = 0;
    TERM_c6 = 3.0*sqrt(2.0)*F*F/(4.0*F_V*M_V) + sqrt(2.0)*F_V*d3/M_V;
    TERM_d3 = F*F/(8.0*F_V*F_V);
        
    double formfactor_V(){

        EvtComplex D_rho (D_rho_r,D_rho_i);
        double TERM_theta,TERM1,TERM2,TERM3,TERM4R,
        EvtComplex tmp(0.0,0.0),TERM4C(0.0,0.0) ;
        TERM_theta = cos*cos*(1.0-sqrt(2.0)*(sin/cos))/(M_phi*M_phi)+ 
                     sin*sin*(1.0+sqrt(2.0)*(cos/sin))/(M_omega*M_omega);
        TERM1 = N_c/(24.0*pi*pi*F_pi);
        TERM2 = 2.0*sqrt(2.0)*F_V*(TERM_c5*t + TERM_c3*pow_pi)*
                TERM_theta/(3.0*F_pi*M_V);
        TERM3 = 2.0*sqrt(2.0)*F_V* D_rho *(TERM_c6*t + TERM_c3*pow_pi)/(3.0*F_pi*M_V);
        TERM4R = 4.0*F_V*F_V * (d3*t+TERM_d3*pow_pi)*TERM_theta/(3.0*F_pi);
        TERM4C = D_rho *= TERM4R
        tmp = TERM1 + TERM2 + TERM3 +=TERM4C;
        return tmp;
    }
    
    double formfactor_A(){
        EvtComplex D_a1 (D_a1_r,D_a1_i):
        double TERM1,TERM2,TERM3,TERM_lambda,tmp;
        TERM1 = F_V*F_V*(1.0-2.0*G_V/F_V)/(2.0*F_pi*M_rho*M_rho);
        TERM2 = F_A*F_A*D_a1/(2.0*F_pi);
        TERM3 = sqrt(2.0)*F_A*F_V*D_a1/(F_pi*M_rho*M_rho); 
        TERM_lambda = -lambda_apos*t + lambda0*m_pi*m_pi;  
        tmp = TERM1 - TERM2 + TERM3*TERM_lambda;
        return tmp;
    }

    bool step(M_P,M_Q){
         if(s-pow(M_P+M_Q,2)>0)
            return true;
         else
            return false;
    }

    
