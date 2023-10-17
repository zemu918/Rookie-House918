module pars
    implicit none
    real,intent(in)::m_tau,m_pi,
                    pow_tau,pow_pi,pow_r_2,
                    x,y
    parameter(pi = 3.1415926)
    parameter(Gf = 1.166E-11)
    parameter(V_ud = 0.9745)
    parameter(f_pi = 130.41)
    parameter(alph = 1.0/133.6)
end module

program evtgen
    use pars
    implicit none
    m_tau = 1776.86
    pow_tau = m_tau*m_tau
    pow_pi = m_pi*m_pi
    pow_r_2 = pow_pi/pow_tau
    type::LorVec
        real::p0
        real::px
        real::py
        real::pz
    end type LorVec
    type(LorVec)::_pd[0],_pd[1],_pd[2]
    _pd[0]=LorVec(e[0],e[1],e[2],e[3])

    x = 2.0*_pd[0]*_pd[2]/pow_tau
    y = 2.0*_pd[0]*_pd[1]/pow_tau
    gam_tau2pinu = Gf**2 *V_ud**2 *f_pi**2* m_tau**3* (1-pow_r_2)**2/(8*pi)
    
end program

    real function f_IB(x,y)
        use pars
        implicit none
        real ::x,y
        TERM1 = pow_r_2**2*(x+2.0) - 2*pow_r_2*(x+y)
        TERM2 = (x+y-1.0)*(2.0-3.0*x+x*x+x*y)
        TERM3 = (pow_r_2-x-y+1.0)**2*x*x  
        f_IB = (TERM1+TERM2)*(pow_r_2+1.0)/TERM3
      return
    end function

    real function f_VV(x,y)
        use pars
        implicit none
        real ::x,y
        TERM1 = pow_r_2**2*(x+y) + 2.0*pow_r_2
        TERM2 = (x+y-1.0)*(-x+x**2-y-y**2)
        f_VV = -TERM1 -TERM2
      return 
    end function

    real function f_AV(x,y)
        use pars
        implicit none
        real ::x,y
        TERM1 = pow_r_2*(x+y) +(1.0-x-y)*(y-x)
        TERM2 = pow_r_2-x-y+1.0
        f_AV = -TERM1*TERM2
      return
    end function

    real function f_AA(f_VV)
        implicit none
        real ,external ::f_VV
        f_AA = f_VV
      return 
    end function

    real function f_IB_V(x,y)
        use pars
        implicit none
        real ::x,y
        f_IB_V = (pow_r_2-x-y+1.0)*(pow_r_2 +1.0)/x 
      return 
    end function

    real function f_IB_A(x,y)
        use pars
        implicit none
        real ::x,y
        TERM1 = pow_r_2**2-2.0*pow_r_2*(x+y) +(1.0-x-y)*(x+y-1.0)
        TERM2 = (pow_r_2-x-y+1.0)*x
        f_IB_A = TERM1*(pow_r_2-y+ 1.0)/TERM2
      return
    end function
    
    real function Gam_IB(x,y,gam_tau2pinu)
        use pars
        implicit none
        real ::x,y,gam_tau2pinu
        TERM1 = gam_tau2pinu/(1.0-pow_r_2)**2
        Gam_IB = alph*f_IB(x,y)*TERM1/(2.0*pi)
      return
    end function

    real function Gam_SD(x,y,gam_tau2pinu)
        use pars
        implicit none
        real ::x,y,gam_tau2pinu
        real ::RefacV,ImfacV,RefacA,ImfacV
        TERM1 = (RefacV**2+ImfacV**2)*f_VV(x,y)+2.0*(RefacV*RefacA +- ImfacV*ImfacA)*f_AV(x,y)+(RefacA**2+ImfacA**2)*f_AA(x,y);
        TERM2 = gam_tau2pinu/(1.0-pow_r_2)**2
        Gam_SD = alph*m_tau**4*TERM1*TERM2/(8*pi*f_pi)
      return 
    end function 

    real function Gam_int(x,y,gam_tau2pinu)
        use pars
        implicit none
        real ::x,y,gam_tau2pinu
        TERM1 = f_IB_V(x,y)*RefacV +f_IB_A(x,y)*RefacA
        TERM2 = gam_tau2pinu/(1.0 - pow_r_2)**2
        Gam_int = alph*pow_tau*TERM1*TERM2/(2.0*pi*f_pi)
      return 
    end function
        
        











