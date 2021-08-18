#include <iostream>

int main( [[maybe_unused]] int argc, [[maybe_unused]] char *argv[]) {
	// define & initialize a variable
	int i{ 5 }; // i is used as the while counter
	while(i) {
		std::cout << "i = " << i << '\n';
		i--;
	}

	i = 0; // we are using i here to show that the next loop is executing
	
	// infinite loop
	// exit with Ctrl + C
	for(;;) {
		std::cout << i << ": press Ctrl +C\n";
		i++;
	}

	return 0;
}
