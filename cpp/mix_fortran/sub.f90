subroutine Sub_Fortran(NumInt,NumFloat,NumDouble)
      implicit none
      integer :: NumInt
      real :: NumFloat
      real(8) :: NumDouble
      NumDouble=NumFloat**NumInt
end subroutine

real(8) function Function_Fortran(NumDouble)
      implicit none
      real(8) :: NumDouble
      Function_Fortran=sqrt(NumDouble)
end function

