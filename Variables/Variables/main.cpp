// include iostream so we can use cout
#include <iostream>

/*
Using the "std" namespace allows us to omit the "std::" prefix when using names from the standard library
However, it can also introduce naming conflicts and make our code less clear,
so it's generally considered bad practice to use "using namespace std" in production code
*/ 
using namespace std;

int main()
{
	// variables follow the data type -> name -> value structure
	// declaring variables
	int num1;
	double num2;

	// initializing variables
	num1 = 5;
	num2 = 3.14;

	// declaring and initializing variable
	float num3 = 7.54f;

	// printing variables
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	cout << "num3 = " << num3 << endl;

	return 0;
}
