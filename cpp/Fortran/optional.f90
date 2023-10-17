program option
    implicit none
    interface 
        subroutine sub(a,b)
            implicit none
            integer ::a
            integer,optional ::b
            end subroutine
    end interface
    call sub(1)
    call sub(2,3)
    stop
end program

subroutine sub(a,b)
    implicit none
    integer ::a
    integer,optional ::b
    if(present(b)) then
      write(*,"('a=',I3,' b=',I3)") a,b
    else
      write(*,"('a=',I3,' b=none')") a
      end if 
      return
end subroutine sub




