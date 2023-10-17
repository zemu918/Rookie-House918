program test


implicit none
integer::n,i
real*8::array(3)

interface
function plusfun(a, b) bind ( c )
use iso_c_binding
integer (c_int), VALUE::a
integer (c_int), VALUE::b
integer (c_int)::plusfun
end function
end interface

interface
function multiplyfun(a, b )  bind ( c )
use iso_c_binding
integer (c_int), VALUE::a
real (c_double)::b(*)
real (c_double)::multiplyfun
end function
end interface

n=10
do i=1,n
print *,'i=',i
end do

print *,plusfun(1,2)

n=3
array=(/2.0,3.0,4.0/)
print *,multiplyfun(n,array)



end program 


