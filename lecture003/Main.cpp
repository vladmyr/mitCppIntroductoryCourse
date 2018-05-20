#include <iostream>
#include <cmath>

using namespace std;

int raiseToPower (int base, int exponent) {
	int result = 1;
	for (int i = 0; i < exponent; i++) {
		result = result * base;
	}
	return result;
}

double fourthRoot (double num) {
	return sqrt (sqrt (num));
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

/**
 * Pass by reference
 */
void increment (int &a) {
	a++;
}

void swap (int &a, int &b) {
	int t = a;
	a = b;
	b = t;
}

int main () {
	int threeExpFour = raiseToPower (3, 4);
	int sixExpFive = raiseToPower (6, 5);
	int twelveExpTen = raiseToPower (12, 10);

	// function overloading
	printOnNewLine ((char *)"3^4 is:");
	printOnNewLine (threeExpFour);
	
	printOnNewLine ((char *)"6^5 is:");
	printOnNewLine (sixExpFive);
	
	printOnNewLine ((char *)"12^10 is:");
	printOnNewLine (twelveExpTen);

	// recursion
	printOnNewLine ((char *)"Fibonacci value of index 5 is:");
	printOnNewLine (fibonacci (5));

	printOnNewLine ((char *)"Fibonacci value of index 14 is:");
	printOnNewLine (fibonacci (14));

	// pass by reference
	int i = 0;
	increment (i);
	printOnNewLine ((char *) "Incrementing i in a function by passing by reference");
	printOnNewLine (i);

	int j = 12;
	int k = 29;
	printOnNewLine ((char *) "Swapping values using references");
	cout << "before: (" << j << ", " << k << ") ";
	swap (j, k);
	cout << "after: (" << j << ", " << k << ")" << endl;

	// using libraries
	int l = 16;
	printOnNewLine ((char *) "Square root of variable 'l' is:");
	printOnNewLine (fourthRoot (l));

	cin.clear();
	cin.ignore (32767, '\n');
	cin.get();

	return 0;
}