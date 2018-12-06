# include <iostream> 
# include <cmath>
using std::cout;
using std::endl;
using std::cin;


class Point {
private:
	double x, y;
public:
	Point (float xcoordinate, float ycoordinate) {
		x = xcoordinate; y = ycoordinate;
	};
	float distance_to_origin () {
		return  (sqrt((x * x) + (y * y)));
	};
	void printout() {
	cout << x << y << endl;
	};

};

class Rectangle {
private:
	float height;
	float width;
public:
	Rectangle (Point b1, float w, float h) {
		width = w; height = h;
	};

	float area() {
		return (width * height);
	};

	float get_width () {
		return width;
	};

	float get_height () {
		return height;
	};
};


class Square : public Rectangle {
public:
	Square (Point p1, float w) : Rectangle (p1, w, w) {
	};
};

int main() {
	Point p1(1.0, 1.0);
	Rectangle r1(p1, 3.0, 3.0);
	Square s1 (p1, 2.0);
	cout << s1.area() << endl;
	cout << r1.area() << endl;
}





