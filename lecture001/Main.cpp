#include <iostream>

int main () {
	std::cout << "*** TASK #0: Hello World ***" << std::endl;
	std::cout << "Hello World! ";
	std::cout << "I'm a C++ program" << std::endl;
	
	// press enter to continue
	std::cin.ignore(32767, '\n');

	std::cout << "*** TASK #1: Using variables ***" << std::endl;
	int x;
	x = 4 + 2;

	std::cout << x / 3 << ' ' << x * 2 << std::endl;

	std::cin.ignore (32767, '\n');

	std::cout << "*** TASK #2: Input ***" << std::endl;
	std::cout << "Enter integer value to perform math compulation on: ";

	std::cin >> x;
	std::cout << x / 3 << ' ' << x * 2 << std::endl;

	// universal solution for windows environment 
	// to press enter before exiting
	std::cin.clear ();
	std::cin.ignore (32767, '\n');
	std::cin.get ();

	return 0;
}