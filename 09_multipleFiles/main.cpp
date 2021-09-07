#include <iostream>
#include "func.h"

int main( [[maybe_unused]] int argc, [[maybe_unused]] char *argv[]) {

	std::cout << "add 5 & 4: " << add(5,4) << '\n';

	return 0;
}
