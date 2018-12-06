# include <iostream> 
using std::cout;
using std::endl;
using std::cin;

double is_prime (int prime_num) {
	bool prime = false;
	if (prime_num%2==0)
		prime = true;
	return prime;
}

int main() {
	int num;
	cout << "Type in a number: " << endl;
	cin >> num;
	bool prime;
	if (is_prime(num))
		cout << "no its not prime" << endl;
	else
		cout << "yes its prime" << endl;

}





