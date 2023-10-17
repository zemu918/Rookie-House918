module over
    implicit none
    interface show
        module procedure show_int
        module procedure show_char
    end interface
    contains
    
    subroutine show_int(n)
        implicit none
        integer,intent(in)::n
        write(*,"('n=',I1)") n
        return
    end subroutine show_int
    
    subroutine show_char(str)
        implicit none
        character(len=*),intent(in)::str
        write(*,"('str=',A)") str
        return
    end subroutine show_char
end module

program overide
    use over
    implicit none
    call show(1)
    call show("hello")
    stop
 end program

