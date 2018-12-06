# include <iostream> 
using std::cout;
using std::endl;
using std::cin;


void swapij (int &new_i, int &new_j) {
	int holder = new_i;
	new_i = new_j;
	new_j = holder;
}

int main() {
	int i=2;
	int j=3;
	cout << "i: " << i << " j: " << j << endl;
	swapij(i, j);
	cout << "i: " << i << " j: " << j << endl;

}





