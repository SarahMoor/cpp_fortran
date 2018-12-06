# include <iostream> 
# include <cmath>
# include <vector>
using std::vector;
using std::cout;
using std::endl;
using std::cin;


int main() {
	vector<int> numbers = {1, -4, 2, -6, 5};
	int highest = 0;
	for (auto trav : numbers) {
		if (abs(trav) > highest) {
			highest = abs(trav);
		};
	};
	cout <<"Highest absolute value: " << highest << endl;		

}





