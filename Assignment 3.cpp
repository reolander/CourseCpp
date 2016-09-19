
#include <iostream>

int pow (int base, unsigned int exponent);
double sine(double opposite, double hypotenuse);

using namespace std;

int main() {
	
	int twocube = pow(2,3);
	double sin = sine(3,5);
	
	cout << twocube << endl;
	cout << sin << endl;
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


#include <iostream>
using namespace std;

int main() {


	int intArray[5] = {1, 2, 3, 4, 5};

	double avgOfArray = avg(intArray[5]);

	//Compute average of integer array values using function avg.
    double avg(int array[]) {

       double total = 0; 
       double average = 0;

       for(int i = 0; i < array.length; i++)
       {
          total += array[i];
       }

       average = total / array.length;

       return average;
    }


}


