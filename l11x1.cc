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
	float width, height;
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


class twoP_Rectangle {
public:
	Rectangle (Point b1, Point b2) {
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

int main() {
	Point p1(1.0, 1.0);
	Rectangle r1(p1, 3.0, 3.0);
	cout << r1.area() << endl;
}





