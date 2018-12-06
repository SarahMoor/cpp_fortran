# include <iostream> 
# include <cmath>
using std::cout;
using std::endl;
using std::cin;

struct primesequence {double number_of_primes_found=0; double last_number_tested=1;};

bool is_prime (int target_num) {
	bool prime = true;
	for (int start = 2; start < target_num; start++) { // start at first possible divisor of non-primes (2)
		if (target_num % start == 0) { // check if its prime
			prime = false;
		}
	}
	return prime;
}

/* determines next prime in the sequence and increments number of primes found and returns next
 * prime found in the sequence
 */


int nextprime (struct primesequence &sequence) {
	sequence.last_number_tested++;

	while (!is_prime(sequence.last_number_tested)) {
		sequence.last_number_tested++;
	}

	sequence.number_of_primes_found += 1;
	return sequence.last_number_tested;
}

int main() {
	int nprimes;
	cin >> nprimes;
	struct primesequence sequence;

	while (sequence.number_of_primes_found < nprimes) {
		int number = nextprime(sequence);
		cout << "Number " << number << " is prime" << endl;
	}
}



