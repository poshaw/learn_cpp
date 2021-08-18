#include <iostream>
#include <cmath>

void operations();
void randomNumber();

int main( [[maybe_unused]] int argc, [[maybe_unused]] char *argv[]) {
	operations();
	randomNumber();

	return 0;
}


void operations() {
	// local variables
	[[maybe_unused]] short s = 10;
	int i = -1000;
	[[maybe_unused]] long l = 100000;
	float f = 230.47;
	double d = 200.374;

	// mathematical operations;
	std::cout << "sin(d) = " << sin(d) << '\n';
	std::cout << "abs(i) = " << abs(i) << '\n';
	std::cout << "floor(d) = " << floor(d) << '\n';
	std::cout << "sqrt(f) = " << sqrt(f) << '\n';
	std::cout << "pow(d,2) = " << pow(d,2) << '\n';
}


void randomNumber() {
	srand( (unsigned) time(NULL) );

	// generate 10 random numbers
	for( int i=0; i<3; i++ ) {
		std::cout << "random number: " << rand() << '\n';
	}
}
