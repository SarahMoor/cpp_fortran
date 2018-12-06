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
	float distance_to_origin (Point p2) {
		float dist1 = (x + p2.x) * (x + p2.x);
		float dist2 = (y + p2.y) * (y + p2.y);
		return (sqrt(dist1 + dist2));
		
	};
	void printout() {
	cout << x << y << endl;
	};

};

int main() {
	Point p1(1.0, 1.0);
	Point p2(0.0, 0.0);
	float dist = p1.distance_to_origin(p2);
	cout << dist << endl;
}





