/***********************************************************
Programmer: Andrew Emerson					Date: 4/11/17

Description: This is a simple program that calculates the
gcd recursively well also displaying the process during 
each step.

***********************************************************/

#include <iostream>
using namespace std;
int gcd(int a, int b);//prototype
int indent = -2;//for display purposes
int main() {
	cout << "\n\n\n";
	gcd(198, 1260);
	cout << endl;
}//end main
int gcd(int a, int b) {
	
	indent = indent + 2;
	
	int retVal;//return value
	
	for (int i = 0; i < indent; i++)
		cout << ' ';
	cout << "-> entering gcd(" << a << ',' << b << ')' << endl;

	if (b == 0) {
		retVal = a;
		cout << "<- gcd(" << a << ',' << b << ") returns " << a << endl;
		return retVal;
	}//end if
	else
		retVal = gcd(b, a % b);
	
	indent = indent - 2;
	
	for (int i = 0; i < indent; i++) 
		cout << ' ';
	cout << "<- gcd(" << a << ',' << b << ") returns " << retVal << endl;
	
	return retVal;

}//end fib
