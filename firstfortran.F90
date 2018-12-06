Program foo
        implicit none
        real :: age, years_left
        real, parameter :: ret_age = 62.
        
        !ASSIGN AGE!!!

        age = 27.35
        
        ! Calculate years to retirement
        years_left = ret_age - age

        print *, "Years to retirement: " , years_left

End Program foo
