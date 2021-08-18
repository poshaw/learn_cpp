#include <iostream>

int main( [[maybe_unused]] int argc, [[maybe_unused]] char *argv[]) {
	// define & initialize a variable
	int a{ 0 }; // define the variable a as an int and set it's value to 0
	// print a
	std::cout<<"The value of a is: " << a << '\n';

	return 0;
}
