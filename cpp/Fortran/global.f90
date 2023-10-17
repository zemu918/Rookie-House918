module global
    implicit none
    integer a,b
end module

program example
    use global
    implicit none
    a=1
    b=2
    write(*,*) a,b
    call sub()
    write(*,*) a,b
end program

subroutine sub()
    use global
    implicit none
    a=5
    b=9
  return
end subroutine

