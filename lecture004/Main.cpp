#include <iostream>

using namespace std;

int sum (const int array[], const int length) {
	// Note: arrays are passed by reference
	long sum = 0;
	for (int i = 0; i < length; sum += array[i++]);
	return sum;
}

int main () {
	int arr[4];

	cout << "Please enter 4 integers:" << endl;

	for (int i = 0; i < 4; i++) {
		cin >> arr[i];
	}

	cout << "Values in array are now: ";

	for (int i = 0; i < 4; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;

	cout << "The sum of elements is: " << sum (arr, 4) << endl;

	cin.clear ();
	cin.ignore (32767, '\n');
	cin.get ();

	return 0;
}