#include<iostream>
#include<iterator>

int main( [[maybe_unused]] int argc, [[maybe_unused]] char *argv[]) {
	// define & initialize a variable
	// note:  arrays indexes have type unsigned long int per std::size()
	double list[5] = { 0.0, 1.2, 2.1, 3.6, 4.5 }; // create an array of 5 doubles, and initialize their values
	
	// print a
	std::cout<<"The length of list is: " << std::size(list) << '\n';

	// print the elemnts in an array
	for ( unsigned long int i = 0; i < std::size(list); i++ ) {
		std::cout<< "list[" << i << "] = " << list[i] << '\n';
	}

	return 0;
}
