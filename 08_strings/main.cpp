#include <iostream>
#include <string>

int main( [[maybe_unused]] int argc, [[maybe_unused]] char *argv[]) {
	// local variables
	std::string str1 = "Hello";
	std::string str2 = "World";
	std::string str3;

	// copy str1 into str3
	str3 = str1;
	std::cout << "str3: " << str3 << '\n';
	std::cout << "str3.size() : " << str3.size() << '\n';

	// concatenate str1 & str2
	str3 = str1 + str2;
	std::cout << "str1 + str2 : " << str3 << '\n';
	std::cout << "str3.size() : " << str3.size() << '\n';

	return 0;
}
