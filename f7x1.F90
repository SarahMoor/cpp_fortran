Program Pointers
        implicit none
       
        real(8), dimension(5) :: point_array = [1, 3, 5, 4, 2]
        real, pointer :: largest
        real, target :: current_largest
        integer :: i=1

        largest => current_largest
        do while (i <= 5)
                if (point_array(i) > largest) then
                        current_largest = point_array(i)
                        largest => current_largest
                end if
                i = 1 + i
        end do

        print *, largest

End Program Pointers
