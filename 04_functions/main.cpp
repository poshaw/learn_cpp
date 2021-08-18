#include <iostream>

int getValueFromUser() {
	std::cout << "Enter an integer: ";
	int input{};
	std::cin >> input;  

	return input;
}

int add(int x, int y) {
	return x + y;
}
 
int multiply(int z, int w) {
	return z * w;
}

int max(int n1, int n2) {
	// returns the bigger of the 2 parameters
	return n1 > n2 ? n1 : n2;
}

int defaultValues(int a, int b=5) {
	// note: you cannot initialize b like this here --  int b{5}
	return a + b;
}

void demonstrateStatic( void ) {
	// each time this is called we increment i and print it
	static int i { 5 };  // local static variable is initialized once and maintained throuogh function calls
	i++;
	std::cout << "i is " << i << '\n';
}

int main( [[maybe_unused]] int argc, [[maybe_unused]] char *argv[]) {
	int num1 { getValueFromUser() };
	int num2 { getValueFromUser() };
	std::cout << num1 << " + " << num2 << " = "
		<< add( num1, num2 ) << '\n';
	std::cout << num1 << " x " << num2 << " = "
		<< multiply( num1, num2 ) << '\n';
	std::cout << "max is : " << max(num1,num2) << '\n';

	int count{ 3 };
	while(count--) {
		demonstrateStatic();
	}

	std::cout << "call with a=1 & b=2: " << defaultValues(1,2) << '\n';
	std::cout << "call with a=1 : " << defaultValues(1) << '\n';

	return 0;
}
