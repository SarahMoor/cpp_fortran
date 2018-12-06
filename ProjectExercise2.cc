# include <iostream> 
using std::cout;
using std::endl;
using std::cin;

int main() {
	int number1; // initialize variable
	int number2; // initialize variable
	int remainder; // initialize variable
	cout << "Type in two numbers" << endl;
	cin >> number1;
	cin >> number2;
	remainder = (number2 % number1);
	
	if (remainder == 0)
		cout << number1 << " is a divisor of " << number2 << endl;
	else
		cout << number1 << " is not a divisor of " << number2 << endl;
}

