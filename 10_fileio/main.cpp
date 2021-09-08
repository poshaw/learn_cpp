#include <iostream>
#include <fstream>
#include <string>

int main( [[maybe_unused]] int argc, [[maybe_unused]] char *argv[]) {
	// open outfile for writing (example only)
	std::ofstream outfile ("example.txt");
	if (outfile.is_open()) {
		outfile << "Writing this to a file.\n";
		outfile.close();
	}
	else std::cout << "Unable to open file";

	// open infile for reading (example only)
	std::string line;
	std::ifstream infile ("example.txt");
	if (infile.is_open()) {
		while (getline (infile, line)) {
			std::cout << line << '\n';
		}
		infile.close();
	}
	else std::cout << "Unable to open file";

	return 0;
}
