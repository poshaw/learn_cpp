#include<iostream>
#include <limits>

int main( [[maybe_unused]] int argc, [[maybe_unused]] char *argv[]) {
	// int
	{
		std::cout<<"Integer\n";

		// initialize, ie define the variable a as an int and set it's value to 0
		int a{ 0 }; 

		// // print a
		// std::cout<<"The value of a is: " << a << '\n';

		// show the size of ints
		std::cout<<'\t' << "The size of an int is: " << sizeof(a) << " bytes" << '\n';
		
		// min & max values
		int imin{ std::numeric_limits<int>::min() }; // minimum value
		int imax{ std::numeric_limits<int>::max() }; // maximum value
		std::cout<<'\t' << "The minimum value for int on this system is: " << imin << '\n';
		std::cout<<'\t' << "The maximum value for int on this system is: " << imax << "\n\n";
	}

	// short int
	{
		std::cout<<"Short Integer\n";

		// initialize, ie define the variable a as an int and set it's value to 0
		short a{ 0 }; 

		// // print a
		// std::cout<<"The value of a is: " << a << '\n';

		// show the size of ints
		std::cout<<'\t' << "The size of a short int is: " << sizeof(a) << '\n';

		// min & max values
		short simin{ std::numeric_limits<short>::min() }; // minimum value
		short simax{ std::numeric_limits<short>::max() }; // maximum value
		std::cout<<'\t' << "The minimum value for short int on this system is: " << simin << '\n';
		std::cout<<'\t' << "The maximum value for short int on this system is: " << simax << "\n\n";
	}
	
	// unsigned short int
	{
		std::cout<<"Unsigned Short Integer\n";

		// initialize, ie define the variable a as an int and set it's value to 0
		unsigned short a{ 0 }; 

		// // print a
		// std::cout<<"The value of a is: " << a << '\n';

		// show the size of ints
		std::cout<<'\t' << "The size of an unsigned short int is: " << sizeof(a) << '\n';
		// min & max values
		unsigned short usimin{ std::numeric_limits<unsigned short>::min() }; // minimum value
		unsigned short usimax{ std::numeric_limits<unsigned short>::max() }; // maximum value
		std::cout<<'\t' << "The minimum value for unsigned short int on this system is: " << usimin << '\n';
		std::cout<<'\t' << "The maximum value for unsigned short int on this system is: " << usimax << "\n\n";
	}
	
	// long int
	{
		std::cout<<"Long Integer\n";

		// initialize a long int
		long int a {0};

		// // print a
		// std::cout<<"The value of a is: " << a << '\n';

		// show the size of long ints
		std::cout<<'\t' << "The size of a long int is: " << sizeof(a) << '\n';

		// min & max values
		long int limin{ std::numeric_limits<long int>::min() }; // minimum value
		long int limax{ std::numeric_limits<long int>::max() }; // maximum value
		std::cout<<'\t' << "The minimum value for long int on this system is: " << limin << '\n';
		std::cout<<'\t' << "The maximum value for long int on this system is: " << limax << "\n\n";
	}

	// floats
	{
		std::cout<<"Float\n";

		// initialize a float
		float a{3.2};

		// show the size of long ints
		std::cout<<'\t' << "The size of a float is: " << sizeof(a) << '\n';

		// min & max values
		float fmin{ std::numeric_limits<float>::min() };
		float fmax{ std::numeric_limits<float>::max() };
		std::cout<<'\t' << "The minimum value for float on this system is: " << fmin << '\n';
		std::cout<<'\t' << "The maximum value for float on this system is: " << fmax << "\n\n";
	}

	return 0;
}
