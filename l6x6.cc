# include <iostream> 
using std::cout;
using std::endl;
using std::cin;

int main() {
	int old_counter = 0;
	for (int tests = 1; tests <= 1000; tests++) {
		int new_counter = 0;
		int start_num;
		start_num = tests;
		while (start_num != 1) {
			if ((start_num % 2) == 0) {
				start_num = start_num / 2;
			}
			else {
				start_num = (start_num * 3) + 1;
			}
			new_counter += 1;
		}
		if (new_counter > old_counter) {
			cout << "new longest path" << tests << endl;
			old_counter = new_counter;
		}
	}

}





