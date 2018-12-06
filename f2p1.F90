Program is_a_divisor
        implicit none
        integer :: num1, num2

        print *, "Type in two numbers: "
        read *, num1, num2

        if (mod(num1, num2) == 0) then
                print *, num2, "is a divisor of", num1
        else
                print *, num2, "is not a divisor of", num1
        end if

End Program is_a_divisor
