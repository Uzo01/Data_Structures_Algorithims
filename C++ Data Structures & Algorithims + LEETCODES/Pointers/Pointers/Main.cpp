#include <iostream>

using namespace std;
/*
	the pointer * creates a reference where the variable is pointing to the same interger
	as the original
*/

int main()
{
	int* num1 = new int(11); //* creates new int of value 11 points num1 to int created
	//int* num2 = num1; 
	int* num3 = new int(55);
	int* num2 = num3;

	
	
	//without star * will only print address of the memory add * to print the interger
	cout << "num1 = " << *num1 << endl; 
	cout << "num2 = " << *num2 << endl;
	cout << "num3 = " << *num3 << endl; 
}