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
	vector<vector<int>> matrix;
	int row_num;
public:
	Pascal (int n)  {
		row_num = n;
		matrix = vector<vector<int>>(n, vector<int>(n));
	};


	// gets pascal triangle value
	double get_ij (double i, double j) {
		if (j == 0)
			return 0;
		else if (i == 1 or i == j)
			return 1;
		else
			return (get_ij(i-1, j-1) + get_ij(i-1, j));
	};
	
	void populate () {
                for (int i = 1; i <= row_num; i++) {
                        vector<int> row(0);
                        for (int j = 1; j <= i; j++) {
                                row.push_back(get_ij(i,j));
                        };
                        matrix.push_back(row);
                };
        };

	/*	
	// sets value in 2d array	
	void set(int i, int j, double value) {
		matrix.at(i).at(j) = value;
	};
	*/

	// retrieves value from 2d array
	double get(int i, int j) {
		return matrix.at(i-1).at(j-1);
	};


	// prints triangle	
	void print () {
		for (int i = 1; i <= row_num; i++) {
			cout << "Row " << i << " : ";
			for (int j = 1; j <= i; j++) {
				cout << get_ij(i,j);
			};
			cout << " " << endl;
		};
	};
	
	
	// prints triangle made of stars
	void print_star (int mod) {
		for (int i = 1; i <= row_num; i++) {
			for (int j = 1; j <= i; j++) {
				int check = get(i,j);
				cout << check << endl;
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
	triangle.populate();
	triangle.print();	
	triangle.print_star(mod);
	

}

