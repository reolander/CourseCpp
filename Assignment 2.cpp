/**
 *  Problem Set Contains 2 Questions.
 *
 *  The scenario is that you have been asked to create a library of utility functions that support mathematical functions.
 *  You will add this code to functions in the next module but for now, write code to complete the following:
 *
 *  Using a for loop, write code that will compute the result of an int raised to the power of another int.
 *  For example, your for loop should use two variables, one for the base and one for the exponent.
 *  It should then calculate the base raised to the exponent. 
 *  2 raised to the power of 2 should output 4, 2 raised to 8 should output 256, etc. 
 *  Ensure your code meets these requirements and then paste it in the response section below:
 *
 *     Contains a variable for the base
 *     Contains a variable for the exponent
 *     Uses a for loop to perform the power function
 *     Outputs the result to the console window 
 */

/**
 * Problem 1 pf 2.
 */
 
  #include <iostream>
  using namespace std;

  int main() {

    int total= 1;
    
    for(int base = 2, exponent = 8; exponent > 0; exponent--)
      total*= base;
    
    cout << total << endl;
    return 0;
  }
 
 
