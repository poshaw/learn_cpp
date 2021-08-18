#include<iostream>
#include <limits>

static int count { 5 }; 	// static global variables can only be used in this file



int main( [[maybe_unused]] int argc, [[maybe_unused]] char *argv[]) {
	// int
	{
		count++;					// incriment global variable count (prevents unused variable compiler warning)
		std::cout<<"int\n";

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

	// short
	{
		std::cout<<"short\n";

		// initialize, ie define the variable a as an int and set it's value to 0
		short a{ 0 }; 

		// // print a
		// std::cout<<"The value of a is: " << a << '\n';

		// show the size of ints
		std::cout<<'\t' << "The size of a short is: " << sizeof(a) << '\n';

		// min & max values
		short simin{ std::numeric_limits<short>::min() }; // minimum value
		short simax{ std::numeric_limits<short>::max() }; // maximum value
		std::cout<<'\t' << "The minimum value for short int on this system is: " << simin << '\n';
		std::cout<<'\t' << "The maximum value for short int on this system is: " << simax << "\n\n";
	}
	
	// unsigned short
	{
		std::cout<<"unsigned short\n";

		// initialize, ie define the variable a as an int and set it's value to 0
		unsigned short a{ 0 }; 

		// // print a
		// std::cout<<"The value of a is: " << a << '\n';

		// show the size of ints
		std::cout<<'\t' << "The size of an unsigned short is: " << sizeof(a) << '\n';
		// min & max values
		unsigned short usimin{ std::numeric_limits<unsigned short>::min() }; // minimum value
		unsigned short usimax{ std::numeric_limits<unsigned short>::max() }; // maximum value
		std::cout<<'\t' << "The minimum value for unsigned short int on this system is: " << usimin << '\n';
		std::cout<<'\t' << "The maximum value for unsigned short int on this system is: " << usimax << "\n\n";
	}
	
	// long
	{
		std::cout<<"long\n";

		// initialize a long int
		long int a {0};

		// // print a
		// std::cout<<"The value of a is: " << a << '\n';

		// show the size of long ints
		std::cout<<'\t' << "The size of a long is: " << sizeof(a) << '\n';

		// min & max values
		long int limin{ std::numeric_limits<long int>::min() }; // minimum value
		long int limax{ std::numeric_limits<long int>::max() }; // maximum value
		std::cout<<'\t' << "The minimum value for long int on this system is: " << limin << '\n';
		std::cout<<'\t' << "The maximum value for long int on this system is: " << limax << "\n\n";
	}

	// floats
	{
		std::cout<<"float\n";

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

	// double
	{
		std::cout<<"double\n";

		// initialize a double
		double a{2.5};

		// show the size of long ints
		std::cout<<'\t' << "The size of a double is: " << sizeof(a) << '\n';

		// min & max values
		double dmin{ std::numeric_limits<double>::min() }; // minimum value
		double dmax{ std::numeric_limits<double>::max() }; // maximum value
		std::cout<<'\t' << "The minimum value for long int on this system is: " << dmin << '\n';
		std::cout<<'\t' << "The maximum value for long int on this system is: " << dmax << "\n\n";
	}

	return 0;
}
