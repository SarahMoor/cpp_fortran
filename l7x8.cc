# include <iostream> 
using std::cout;
using std::endl;
using std::cin;


double sum_of_squares (int n) {
	if (n == 1)
		return 1;

	else
		return ((n*n) + sum_of_squares(n-1));			

}


int main() {
	for (int start = 1; start <=100; start++) {
		cout << sum_of_squares(start) << endl;
		
	}
}





