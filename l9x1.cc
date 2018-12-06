# include <iostream> 
# include <cmath>
using std::cout;
using std::endl;
using std::cin;

struct vector {double x; double y;};


double angle(double x, double y) {
	return (atan(x/y));
}

int main() {
	double x, y;
	cout << "Give an X coordinate: " << endl;
	cin >> x;
	cout << "Give a Y coordinate: " << endl;
	cin >> y;
	struct vector a = {x,y};
	double alpha = angle(a.x, a.y);
	double pifrac = (4.*atan(1.0))/alpha;
	cout << "Angle of (" << a.x << "," << a.y << ") is " << angle(a.x, a.y) << ", or pi/" << pifrac << endl;
}





