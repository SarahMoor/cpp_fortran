# include <iostream> 
# include <cmath>
# include <iomanip>
using std::setbase;
using std::setw;
using std::setfill;
using std::cout;
using std::endl;
using std::cin;


int main() {
	cout << setbase(16) << setfill(' ');
	for (int i=0; i<16; i++) {
		for (int j=0; j<16; j++)
			cout << setfill('0') << setw(2) << i*16+j << " " ;
		cout << endl;
	};
	
}





