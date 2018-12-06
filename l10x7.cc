# include <iostream> 
# include <cmath>
using std::cout;
using std::endl;
using std::cin;


bool isprime (int target_num) {
        bool prime = true;
        for (int start = 2; start < target_num; start++) { // start at first possible divisor of non-primes (2)
                if (target_num % start == 0) { // check if its prime
                        prime = false;
                }
        }
        return prime;
}


class primegenerator {
private:
	int how_many_primes_found, last_number_tested;
public:
	primegenerator () {
		last_number_tested = 1;
		how_many_primes_found = 0;		
	};	

	int number_of_primes_found () {
		return how_many_primes_found;
	};

	
	int nextprime () {
		last_number_tested++;
		while (not isprime(last_number_tested)) {
			last_number_tested++;
		}
		how_many_primes_found ++;
		return last_number_tested;
	};
};


int main() {
/*	int nprimes;
	cin >> nprimes;
	primegenerator sequence;
	while (sequence.number_of_primes_found()<nprimes) {
		int number = sequence.nextprime();
		cout << " NUMBER " << number << " IS PRIME " << endl;

	}
*/

	int upper_bound;
	cout << "Enter an upper bound: " << endl;
	cin >> upper_bound;

	int start = 4;
	while (start <= upper_bound) {
		primegenerator prime;
		int next_prime = prime.nextprime();
		while (next_prime <= (start/2)) { // optimizing bounds
			if (isprime(start - next_prime)) {
				cout << start << " = " << next_prime << " + " << (start-next_prime) << endl;
				break;
			}
			next_prime = prime.nextprime();
		}
	
		start += 2;
	}
}





