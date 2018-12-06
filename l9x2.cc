# include <iostream> 
# include <cmath>
using std::cout;
using std::endl;
using std::cin;

struct vector {double x; double y;};

void switcheroo (struct vector &a) {
	double holder = a.x;
	a.x = a.y;
	a.y = holder;

}

int main() {
	double x, y;
	cout << "Give an X coordinate: " << endl;
	cin >> x;
	cout << "Give a Y coordinate: " << endl;
	cin >> y;
	struct vector a={x, y};
	cout << a.x << " : " << a.y << endl;
	switcheroo(a);
	cout << a.x << " : " << a.y << endl;	

}





