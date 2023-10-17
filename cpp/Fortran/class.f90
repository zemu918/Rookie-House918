program _class
    implicit none
    type::person
        character(len=10)::name
        integer::age
        real::height
        real::weight
        character(len=50)::address
        end type person
      type(person)::a,b
      a=person("Peter",20,170,60,"China")
      b%name="Fortran"
      write(*,*)a
      write(*,*)b%name
end program
