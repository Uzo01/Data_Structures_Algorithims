#include <iostream>

using namespace std;

//Big O (n):
//Purpose is to figure out the broad category that the growth rate is in always growning linearely
/*
* this means that we pass in the number n then run this n number of times.
Graph - x-axis represents the n, y-axis is the number of operations. Big O (n) will always be proportional meaning a straight line
*/
//Drop constant
/*
* This is a rule for simplification
*/
void runNumbers(int n)
{
	//Big O (n)
	for (int i = 0; i < n; i++) // int i = interger assinged to i, say if i is lager than number (n), increase (++) to interger
	{
		cout << i << endl; // print i
	}
	//Drop Constant addition
	for (int j = 0; j < n; j++) // int j = interger assinged to j, say if j is lager than number (n), increase (++) to interger
	{
		cout << j << endl; // print j
	}
}

int main()
{
	runNumbers(10); // call function to run up to 10 numbers 0-9
}

/*Big O (n)
this is O of (n) 
* Paseed the number n
* then ran n times
*/
/*Drop Constant
* the function is n+n or O (2n)
* but the constant is alway dropped = O (n)
*/