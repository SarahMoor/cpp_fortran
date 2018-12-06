Program is_a_divisor
        implicit none
        integer :: num1, counter, divisor = 0
        logical :: is_prime = .TRUE.

        print *, "Type in a number: "
        read *, num1


        do counter=2, (num1 / 2)
                if (mod(num1, counter) == 0) then
                        is_prime = .FALSE.
                        divisor = counter
                        exit
                end if
        end do

        if (is_prime == .TRUE.) then
                print *, "Your number is prime"
        else
                print *, "Your number is not prime: it is divisible by", divisor
        end if

End Program is_a_divisor
