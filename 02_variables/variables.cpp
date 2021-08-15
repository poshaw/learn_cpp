#include<iostream>
#include <limits>

int main( [[maybe_unused]] int argc, [[maybe_unused]] char *argv[]) {
	// define & initialize a variable
	int a{ 0 }; // define the variable a as an int and set it's value to 0
	// print a
	std::cout<<"The value of a is: " << a << '\n';

	// Find this systems min and max int value
	int imin{ std::numeric_limits<int>::min() }; // minimum value
	int imax{ std::numeric_limits<int>::max() }; // maximum value
	// print minimum & maximum int values
	std::cout<<"The minimum value for int on this system is: " << imin << '\n';
	std::cout<<"The maximum value for int on this system is: " << imax << '\n';

	// floats
	float fmin{ std::numeric_limits<float>::min() };
	float fmax{ std::numeric_limits<float>::max() };
	std::cout<<"The minimum value for float on this system is: " << fmin << '\n';
	std::cout<<"The maximum value for float on this system is: " << fmax << '\n';

	return 0;
}
