Program Pointers
        implicit none
       
        real(8), dimension(5), target :: point_array = [1, 3, 5, 4, 2]
        real(8), pointer :: array_ptr
        integer :: i=1

        array_ptr => point_array(1)
        do while (i <= 5)
                if (point_array(i) > array_ptr) then
                        array_ptr => point_array(i)
                end if
                i = 1 + i
        end do

        print *, array_ptr

End Program Pointers
