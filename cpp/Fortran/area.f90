Program area
    !Use func
    Implicit None 
    Real, Parameter :: pi = acos(-1.)
    Character (Len=:),Allocatable :: keywd
    Real, Allocatable :: pars(:)

    read(*, *)keywd
    read(*, *)pars(:)
    
    if (keywd=='cir' .OR. keywd=='sqr')Then
        if (size(pars) /= 1) stop 'incorrect number of parameters.'
    else if (keywd=='rect') then
        if (size(pars) /= 2) stop 'incorrect number of parameters'
    else 
        stop 'keyword unknown...'
    end if

    if (keywd=='cir') then
        write (*, *) 'Area = ', pi*pars(1)**2.
    else if (keywd=='sqr') then
        write (*, *) 'Area = ', pars(1)**2
    else if (keywd=='rect') then
        write (*, *) 'Area = ', pars(1)*pars(2)
    end if
end program
