Program Ex1
        implicit none

        type Point
                real :: x, y
        end type Point
        
        type Rectangle
                type(Point) :: p1, p2
        end type Rectangle                

        type (Point) :: p1, p2
        type (Rectangle) :: r1

        p1 = Point(2.5, 3.7)
        p2 = Point(1.0, 3.0)

        r1 = Rectangle(p1, p2)        

        print *, area(r1)
contains
        real(4) function area (rect)
                implicit none
                type (Rectangle) :: rect
                area = (rect%p1%x-rect%p2%x) * (rect%p1%y - rect%p2%y)
        end function area 
End Program Ex1

