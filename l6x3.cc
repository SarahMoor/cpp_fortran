# include <iostream> 
using std::cout;
using std::endl;
using std::cin;

int main() {
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <=10; j++) {
			if (abs(i-j)<2)
				cout << "i, j = " << i << " , " << j << endl;
		}
	}


}




