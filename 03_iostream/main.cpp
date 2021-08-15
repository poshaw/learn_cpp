#include<iostream>

int main( [[maybe_unused]] int argc, [[maybe_unused]] char *argv[]) {
	std::cout << "Enter a number: "; // ask user for a number

	// define variable x to hold user input (and zero-initialize it)
	int x{ };                                 

	// get number from keyboard and store it in variable x
	std::cin >> x;

	std::cout << "You entered " << x << '\n';

	return 0;
}
