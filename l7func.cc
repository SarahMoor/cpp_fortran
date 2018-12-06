# include <iostream> 
using std::cout;
using std::endl;
using std::cin;


# include <cmath>
double get_distance (float x, float y) {
	float distance;
	float x1;
	float y1;
	x1 = (x-0) * (x-0);
	y1 = (y-0) * (y-0);
	distance = sqrt(x1 + y1);
	return distance;
}


int main() {
	float x;
	float y;
	cout << "type in a number" << endl;
	cin >> x;
	cin >> y;
	cout << "the distance is " <<  get_distance(x,y) << endl;


}





