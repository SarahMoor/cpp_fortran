# include <iostream> 
# include <cmath>
# include <cstdlib>

using std::cout;
using std::endl;
using std::cin;
using std::rand;

class Person {
private:
	int status;	
	bool recovered = false;
	
	       	
public:
	Person () {
		status = 0;
	};
	void status_string() {
		if (status == 0) {
			cout << "not sick" << endl;
		}
		if (status == -1) {
			cout << "recovered" << endl;
		}
		if (status == -2) {
			cout << "inocculated" << endl;
		}
		if (status > 0) {
			cout << "Sick with " << status << " days to go" << endl;
		}
	};
	void update () {
		if (status > 0) {
			status -= 1;
		}	
	};
	int infect (int n) {
		status = n;
	};
	bool is_stable() {
		return recovered;
	};
};

int main() {
	Person joe;
	joe.update();
	float bad_luck = (float) rand()/ (float) RAND_MAX;
	bad_luck = .99;
	if (bad_luck>.95)
		joe.infect(5); 
	cout << "Joe is "; 
	joe.status_string();	
}





