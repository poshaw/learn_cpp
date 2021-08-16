#include <iostream>

int getValueFromUser() {
	std::cout << "Enter an integer: ";
	int input{};
	std::cin >> input;  

	return input;
}

int add(int x, int y)
{
	return x + y;
}
 
int multiply(int z, int w)
{
	return z * w;
}

int main( [[maybe_unused]] int argc, [[maybe_unused]] char *argv[]) {
	int num1 { getValueFromUser() };
	int num2 { getValueFromUser() };
	std::cout << num1 << " + " << num2 << " = " << add( num1, num2 ) << '\n';
	std::cout << num1 << " x " << num2 << " = " << multiply( num1, num2 ) << '\n';

	return 0;
}
