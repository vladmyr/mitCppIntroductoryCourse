#include <iostream>

using namespace std;

int main () {
	int x = 6;
	int y = 2;

	if (x > y) {
		cout << "x is greater than y" << endl;
	}
	else if (y > x) {
		cout << "y is greater than x" << endl;
	}
	else {
		cout << "x and y are equal" << endl;
	}

	std::cin.clear ();
	std::cin.ignore (32767, '\n');
	std::cin.get ();

	return 0;
}