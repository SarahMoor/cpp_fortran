# include <iostream> 
# include <cmath>
# include <memory>
using std::cout;
using std::endl;
using std::cin;
using std::shared_ptr;
using std::make_shared;

class Node {
private:
	int datavalue{0};
	shared_ptr<Node> tail_ptr{nullptr};
public:
	Node() {};
	Node (int value) {
		datavalue = value;
	};
	void set_tail(shared_ptr<Node> tail) {
		tail_ptr = tail;
	};
	void print() {
		cout << datavalue;
		if (has_next()) {
			cout << ", ";
		};
	};

};

int main() {
	

}





