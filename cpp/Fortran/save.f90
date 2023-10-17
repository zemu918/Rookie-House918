Program save
    implicit none
    integer,external::show
    integer::a,b
    a=show()
    b=show()
    call sub()
    call sub()
    end program


subroutine sub()
    implicit none
    integer ::count =1
    write(*,*) count
    count =count+1
    return
    end subroutine

    integer function show()
    implicit none
    integer :: i=1
    write(*,*) i
    i=i+1
    return
    end function




