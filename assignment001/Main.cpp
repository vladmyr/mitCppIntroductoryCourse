#include <iostream>

using namespace std;

#define PI 3.14159
#define NEWLINE '\n'

int main () {
	// *** 1. Additional information
	double r = 5.0;
	double circle;

	circle = 2 * PI * r;
	cout << circle << NEWLINE;

	const int pathWidth = 100;
	const char tabulator = '\t';
	
	// L-value, R-value
	// addition

	for (int i = 0; i < 10;) {
		cout << i++ << endl;
	}

	for (int i = 0; i < 10;) {
		cout << ++i << endl;
	}

	// type conversions
	int x = (int)5.0;
	short s = 3;
	long l = s;
	float y = s + 3.4;
	
	cin.clear ();
	cin.ignore (32767, '\n');
	cin.get ();

	// *** 2. "Hello, World!"
	// 2.1 Hello World I
	const char * helloWorld = "Hello, World";

	return 0;
}