Program real
  Implicit None 
  !r表示最大十进制位数，p表示最小的有效位数
  Integer , parameter :: DP = Selected_Real_Kind(r=50,p=14)
  Real(Kind=DP) :: r1 = 1.0_DP , r2 , r3
  write(*,*) kind(r1) , r1
  r1 = r1 + 1.6_DP
  write(*,*) r1
  r1 = r1 + 1.6
  write(*,*) r1
  End Program real



