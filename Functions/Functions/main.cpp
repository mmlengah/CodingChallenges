#include <iostream>
using namespace std;

/*
	functions follow the returned data type -> name -> parameters structure 
*/ 

/*
	function declaration
	this function returns an integer
	is called addNumbers
	and takes two parameters int num1, and int num2
*/ 
int addNumbers(int num1, int num2);

int main()
{
	/*
		here we call the function with the arguments 5 and 7.
		we then store this in the result variable
	*/
	int result = addNumbers(5, 7);

	// print the result
	cout << "Result: " << result << endl;
	return 0;
}

// function definition
int addNumbers(int num1, int num2)
{
	int sum = num1 + num2;
	return sum;
}
