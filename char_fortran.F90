Program Concat_Strings

        implicit none
        character (len=10) :: first,last
        character (len=20) :: full
        first = ""
        first = "John"
        last = "Doe"
        full = first
        full = first // last
        print *, full
        full = trim(first) // " " // trim(last)
        print *, full

End Program Concat_Strings
