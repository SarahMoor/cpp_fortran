# include <iostream> 
using std::cout;
using std::endl;
using std::cin;

int main() {
	int prime_num; // initialize variable
	cout << "Type in a number" << endl;
	cin >> prime_num;
	bool prime = true;

	for (int i=2; i<prime_num; i++) {
		if (prime_num%i==0) {
			cout << "Your number is not prime prime: it is divisible by " << i << endl;
			prime = false;
		}
	}
	
	if (prime == true)
		cout << "Your number is prime!" << endl;

}




