program switcheroo
        implicit none
        integer :: i, j
        
        read *, i
        read *, j
        
        print *, i , j
        call swap(i,j)
        print *, i, j

contains
        subroutine swap(i,j,i_old, j_old)
                implicit none
                integer :: i, j
                integer :: holder
                holder = i
                i = j
                j = holder
        end subroutine swap
end program switcheroo
