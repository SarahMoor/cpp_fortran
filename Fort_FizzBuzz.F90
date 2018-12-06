Program fizzbuzz
        implicit none
        
        integer :: num
        integer :: num_3
        integer :: num_5

        READ *, num
        
        if (mod(num,3)==0 .and. mod(num,5)==0) then
                print *, "Fizz Buzz!"
        else if (mod(num,3)==0) then
                print *, "Buzz!"
        else if (mod(num,5)==0) then
                print *, "Fizz!"
        end if 
        
        
End Program fizzbuzz
