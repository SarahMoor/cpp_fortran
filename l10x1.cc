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

int main() {
	Point p1(1.0, 1.0);
	float dist = p1.distance_to_origin();
	cout << dist << endl;
}





