/**
 * PROBLEM STATEMENT.
 * In the previous module, you created a for loop to calculate a base raised to an exponent. 
 * In this peer review, you are going to put that code into a function and create two more functions.
 * Paste your code in the response section below that satisfies these requirements:
 * 	
 * Create a function called pow that accepts two integers that represent the base and the exponent. 
 * The exponent should not permit negative values. 
 * Use the code you created in the previous module for some of this functionality but add additional code
 * The additional code should make use of an if statement to check the exponent value. 
 * If it is 0, then immediately return 1 otherwise calculate the power and return the result.
 * Show sample code that will call the function and get the result.
 *	
 * For the second function you will compute the sine of an angle. 
 * Your function should accept the opposite and hypotenuse lengths and return the sine value. The formula for sine is:
 * sin = opposite / hypotenuse where / is used to denote division
 * Ensure that you paste the code for the function as well as the code that calls the function and assigns the value to a variable.
 */

/** Problem 1 of 2
 * 
 */
 
#include <iostream>

int pow (int base, unsigned int exponent);
double sine(double opposite, double hypotenuse);

using namespace std;

int main() {
	
	int twocube = pow(2,3);
	double sin = sine(3,5);
	
	cout << twocube << endl;
	cout << sin << endl;
	
	return 0;
}

//Pow Function.
int pow (int base, unsigned int exponent) {
	
	int total = 1;
	if (exponent == 0)
	  return 0;
	else
	{
	  for (; exponent > 0; exponent--)
	     total *= base;  
	}
	return total;
}

//Computing sine of an angle using a funciton.
double sine(double opposite, double hypotenuse) {
	
	return opposite/hypotenuse;
}

/** Problem 2 of 2
 * 
 */
#include <iostream>

double avg(int array[], int n);

using namespace std;

int main() {

	int integerArray[5] = {1, 1, 1, 1, 4};
	double avgOfArray = avg(integerArray, 5);
	
	cout << avgOfArray << endl;
	
	return 0;
}
//Compute average of integer array values using function avg. (FUNCTION)
double avg(int array[], int n) {
	
	double average = 0;
	double total = 0;

	for(int i = 0; i < n; i++)
	  total += array[i];
	
	average = total / n;	
	return average;
}
