program example
    implicit none
    integer::f
    integer::a=1
    write(*,*) a
    call sub(a)
    write(*,*) a
    f = func(a)
    write(*,*) a
 end program

    subroutine sub(num)
    integer::num
    num =3
    return
    end subroutine

    integer function func(num)
    integer::num
    num=7
    return
    end function


