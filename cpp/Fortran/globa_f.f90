module glob
    implicit none
    contains
        function arr(num)
            implicit none
            integer ::num
            integer ::i
            integer ::arr(10)
            arr =num
            return
        end function
end module


program main
    use glob
    implicit none
    write(*,"(10I4)") arr(7)
end program

