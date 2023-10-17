program main
    implicit none
    write(*,*) "hello,world!"

    call hello() 
end program main

subroutine hello()
    implicit none
    write(*,*) "hello,subroutine!"

end subroutine hello


