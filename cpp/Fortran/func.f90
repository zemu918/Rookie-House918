program translate
    implicit none
    real,external ::func
    real,intrinsic ::sin
    call test(func)
    call test(sin)
    stop
    end program

    subroutine test(f)
    implicit none
    real, external :: f
    write(*,*) f(1.0)
    return
    end subroutine

    real function func(num)
    implicit none
    real :: num
    func=num*2
    return
    end function



