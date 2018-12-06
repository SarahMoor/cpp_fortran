# include <iostream> 
using std::cout;
using std::endl;
using std::cin;

double is_prime (int target_num) {
	bool prime = true;
	for (int start = 2; start < target_num; start++) { // start at first possible divisor of non-primes (2)
		if (target_num % start == 0) { // check if its prime
			prime = false;
		}
	}
	return prime;
}

int main() {
	int how_many;
	cout << "Type in the number of primes you would like printed: " << endl;
	cin >> how_many;
	int number_of_primes = 0;
	int start = 2;
	while (number_of_primes != how_many) { // keep printing primes until target number is reached
		if (is_prime(start)) {
			cout << start << endl;
			number_of_primes += 1;
		}
		start += 1;
	}
}





