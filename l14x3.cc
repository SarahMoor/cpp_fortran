# include <iostream> 
# include <cmath>
# include <vector>
# include <random>
using std::vector;
using std::cout;
using std::endl;
using std::cin;

int main() {
	int x;
	cout << "Type in X: " << endl;
	cin >> x;
	int total = 0;
	vector<int> numbers(x, 3);
	for (auto num : numbers) {
		total += (num*num);
	};
	cout << sqrt(total) << endl;
	for (auto &num : numbers) {
		num /= sqrt(total);
	}

	int sum = 0;
	for (auto num : numbers) {
		sum += num;
		cout << num << endl;
	}
	cout << sum << endl;
}



