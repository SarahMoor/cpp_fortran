Program in_fortran
        implicit none
        integer :: a, b, c, v, vol_cube
        read *, a, b, c
        v = (4/3)*3.14*(a**3)
        vol_cube = a * b *c
        print *, v
        print *, vol_cube

End Program in_fortran
