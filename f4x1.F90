Program Sections
        implicit none
        real(4), dimension(4) :: y
        real(4), dimension(5) :: x = [1,2,3,4,5]
        integer :: i
        
        do i=1, 4
                y(i) = (x(i)+x(i+1))/2     
                print *, y(i)
        end do
End Program Sections
        
