Program Trip_Int

        implicit none
        integer(8) :: u=1, v=1, w=1

        do while (w<=100)
                u = 1
                do while (u <= 100)
                        v = 1
                        do while (v<=100)
                                if (((u**2)+(v**2))==(w**2)) then
                                        print *, u, v, w
                                end if
                                v = v + 1
                        end do
                        u = u+1
                end do
                w = w+1
        end do

        

End Program Trip_Int
