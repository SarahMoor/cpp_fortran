# include <iostream> 
using std::cout;
using std::endl;
using std::cin;

int main() {
	int remainder; // initialize variable
	cout << "Type in a number" << endl;
	cin >> remainder;

	if (remainder%5==0 && remainder%3==0)
		cout << "Fizzbuzz!" << endl;

	else if ((remainder%3)==0)
                cout << "Fizz!" << endl;

        else if ((remainder%5)==0)
                cout << "Buzz!" << endl;
 
}


