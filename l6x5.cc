# include <iostream> 
using std::cout;
using std::endl;
using std::cin;

int main() {
	int target;
	bool found_pair = false;
	cout << "Type in a number <= 100" << endl;
	cin >> target;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j <10; j++) {
			if (i*j>target) {
				cout << i << "," << j << endl;
				found_pair=true;
				break;
			}
		}
		if (found_pair) {
			break;
		}
	}

	int low_i = 10;
	int low_j = 10;

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if ((i*j>target) && (i+j < low_i+low_j)) {
				low_i = i;
				low_j = j;
			}
		}
	}
	
	
	cout << low_i << "," << low_j << endl;

}




