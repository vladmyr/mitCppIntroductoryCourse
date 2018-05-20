#include <iostream>

using namespace std;

int raiseToPower (int base, int exponent) {
	int result = 1;
	for (int i = 0; i < exponent; i++) {
		result = result * base;
	}
	return result;
}

/**
 * Function overloading
 */

void printOnNewLine (int x) {
	cout << x << endl;
}

void printOnNewLine (char *x) {
	cout << x << endl;
}

/**
 * Recursion
 */

int fibonacci (int n) {
	if (n == 0 || n == 1) {
		return 1;
	}

	return fibonacci (n - 2) + fibonacci (n - 1);
}

int main () {
	int threeExpFour = raiseToPower (3, 4);
	int sixExpFive = raiseToPower (6, 5);
	int twelveExpTen = raiseToPower (12, 10);

	printOnNewLine ((char *)"3^4 is:");
	printOnNewLine (threeExpFour);
	
	printOnNewLine ((char *)"6^5 is:");
	printOnNewLine (sixExpFive);
	
	printOnNewLine ((char *)"12^10 is:");
	printOnNewLine (twelveExpTen);

	printOnNewLine ((char *)"Fibonacci value of index 5 is:");
	printOnNewLine (fibonacci (5));

	printOnNewLine ((char *)"Fibonacci value of index 14 is:");
	printOnNewLine (fibonacci (14));

	cin.clear();
	cin.ignore (32767, '\n');
	cin.get();

	return 0;
}