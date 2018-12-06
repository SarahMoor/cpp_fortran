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
		if (trav < highest) {
			highest = trav;
			break;
		};
	};
	cout <<"First Negative: " << highest << endl;		

}





