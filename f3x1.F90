Program Prime
        implicit none
        integer :: read_prime
        logical :: prime2
        read *, read_prime
        prime2 = IsPrime(read_prime)
        print *, prime2

contains
        logical function IsPrime(i) 
                implicit none
                integer, intent(in) ::  i
                integer :: counter = 2
                IsPrime = .TRUE.
                do while (counter < i)
                        if (mod(i,counter)==0) then
                                IsPrime = .FALSE.
                        end if
                        counter = counter + 1
                end do
        end function IsPrime 
End Program Prime
