Module definitions
        type point
                real :: x,y
        end type point
        
        type rectangle
                type (point) :: p1, p2
        end type rectangle

contains
        real(4) function area (rect)
                implicit none
                type (Rectangle) :: rect
                area = (rect%p1%x-rect%p2%x) * (rect%p1%y - rect%p2%y)
        end function area 
end Module definitions


Program Ex1
        use definitions
        implicit none

        type (Point) :: p1, p2
        type (Rectangle) :: r1

        p1 = Point(3.0, 3.0)
        p2 = Point(0.0, 0.0)

        r1 = Rectangle(p1, p2)        

        print *, area(r1)
End Program Ex1

