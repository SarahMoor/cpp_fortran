# include <iostream> 
# include <cmath>
# include <vector>
# include <random>
using std::vector;
using std::cout;
using std::endl;
using std::cin;

class Pascal {
private:
	vector<double> rows;
	int row_num;
public:
	Pascal (int n) : rows(vector<double>(n)) {
		row_num = n;
	};

	double get_ij (double i, double j) {
		if (j == 0)
			return 0;
		else if (i == 1 or i == j)
			return 1;
		else
			return (get_ij(i-1, j-1) + get_ij(i-1, j));
	};
	void print () {
		for (int i = 1; i <= row_num; i++) {
			cout << "Row " << i << " : ";
			for (int j = 1; j <= i; j++) {
				rows.push_back(get_ij(i,j));
				cout << get_ij(i,j);
			};
			cout << " " << endl;
		};
	};

	void print_star (int mod) {
		for (int i = 1; i <= row_num; i++) {
			for (int j = 1; j <= i; j++) {
				long check = get_ij(i,j);
				if (check % mod == 0) {
					cout << "  ";
				}
				else {
					cout << " *";
				}
			};
			cout << " " << endl;
		};
	};

};
	

int main() {
	int rows;
	int mod;
	cout << "Type the number of rows you want printed: " << endl;
	cin >> rows;
	cout << "Type in modulo number: ";
	cin >> mod;
	Pascal triangle(rows);
	// triangle.print();	
	triangle.print_star(mod);
	

}



