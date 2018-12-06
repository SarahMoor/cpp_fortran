# include <iostream> 
# include <cmath>
using std::cout;
using std::endl;
using std::cin;


class Point {
public:
	double x, y;
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

class LinearFunction {
private:
	double b, slope;
public:
	LinearFunction (Point input_p1, Point input_p2) {
		slope = (input_p1.x - input_p2.x) / (input_p1.y - input_p2.y);
		b = (input_p2.y - (slope * input_p2.x));
	};
	float evaluate_at (float x) {
		double y = (slope * x) + b;
		return y;

	};
};

int main() {
	Point p1(1.0, 1.0);
	Point p2(0.0, 0.0);
	LinearFunction line (p1, p2);
	cout << "Value at 4.0: " << line.evaluate_at(1.0) << endl;
	float dist = p1.distance_to_origin(p2);
	cout << dist << endl;
}





