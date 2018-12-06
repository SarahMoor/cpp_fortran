# include <iostream> 
# include <cmath>
# include <vector>
# include <random>
using std::vector;
using std::cout;
using std::endl;
using std::cin;

void L2_normalization (vector<double> &numbers) {
	double total = 0;
	for (auto num : numbers) {
		total += (num * num);
		cout << total << endl;
	};
	for (auto &num : numbers) {
		num = num / sqrt(total);
		cout << num << endl;
	};
};

int main() {
	int x;
	cout << "Type in X: " << endl;
	cin >> x;
	vector<double> numbers(x, 4);
	L2_normalization(numbers);
	double total = 0;
	for (auto num : numbers) {
		total += (num * num);
	};
	cout << total << endl;
}



