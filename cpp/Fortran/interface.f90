program inter
    implicit none
    interface
        function random10(lbound,ubound)
        implicit none
        real:: lbound,ubound
        real:: random10(10)
    end function
    end interface
    real :: a(10)
    call random_seed()
    a=random10(1.0,10.0)
    write(*,"(10F6.2)") a
    end program

  function random10(lbound,ubound)
    implicit none
    real :: lbound,ubound
    real :: len
    real :: random10(10)
    real t
    integer i
    len=ubound-lbound
    do i=1,10
        call random_number(t)
        random10(i)=lbound+len*t
        end do
        return
   end function












   
