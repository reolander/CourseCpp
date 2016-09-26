/**	
 * In this first response, please paste your code that implements an array. Your array should follow these guidelines:
 * 	Store int data types
 * 	Store 10 values
 *	Have an appropriate name
 * 	Be initialized in the declaration statement
 */
 
 #include <iostream>
 
 int main() {
	 
	 int integerArray[10] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	 
	 return 0;
	 //Tells the OS that program has been executed and that it is time to de-allocate certain resources.
 }
 
 /**
  *  In this second response, please paste your code that implements an enumeration. Your enumeration should follow these guidelines:
  *	Store the months of the year
  *	Start the first element as 1 rather than 0
  *	Use an appropriate name
  */
  
  #include <iostream>
  
  int main() {
	  
	  enum Month {Jan = 1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};
	  Month newYearsMonth = Jan;
	  
	  return 0;
  }
