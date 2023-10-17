program file1
Integer :: i
Character(len=12) :: cFile
Do i = 1, 10
  write( cFile , * ) i
  Open( 10+i , File = trim(cFile)//'.txt')
End do
stop
end program
