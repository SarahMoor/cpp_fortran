Module definitions
        type point
                real :: x,y
        contains
                procedure, public :: Distance
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
        real (4) function Distance (me, point2)
                implicit none
                class (Point) :: me, point2
                Distance = (((me%x - point2%x)**2) + ((me%y- point2%y)**2))**0.5
        end function Distance
end Module definitions


Program Ex1
        use definitions
        implicit none

        type (Point) :: p1, p2
        type (Rectangle) :: r1
        real(4) :: dist

        p1 = Point(3.0, 3.0)
        p2 = Point(0.0, 0.0)

        r1 = Rectangle(p1, p2)        
        dist = p1%Distance(p2)

        print *,"area: ", area(r1), " distance: ", dist
End Program Ex1

