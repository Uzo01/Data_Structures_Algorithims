#include <iostream>

using namespace std;
/*
* Big O: Drop Non-Dominat
*/

void showData(int n)
{
	//Nested for loop 
	for (int i = 0; i < n; i++)
	{
		for (int k=0; k < n; k++)
		{
			//cout << i << k << endl;
			//cout << i * k << endl; // Time each number and increase loop 
			cout << i << endl << k << endl;
		}
	}
	//Single for loop
	for (int j=0; j < n; j++)
	{
		//cout << j << endl;
		for (int f = 0; f < n; f++)
		{
			cout << j << f << endl;
		}
	}
}
/*
* Big O: O(1)
* number of operations does not change as n becomes larger
* n = 1 means having one operation being the addition even when it goes to millon still 1 n
* O(1)
* n+n+n creats O(2) by having two operators
* simplified to O(1)
* becoming the most effiecient
* due not becoming larger in number of (n) operation stays the same (1) 
* Best used for time complexity
*/
int addItems(int n)
{
	return n + n;
}

int main()
{
	showData(2); //Pass in the number 10 to the function for output
}
/*
* This prints the O(n^2)00-99 then prints another loop from 0-9 done by single loop
* the total operations ran was O(n^2+n)
* n^2 being the dominant version
* as n^2 gets larger (n) alone becomes less significant
* Simplify drop n and keep (n^2)
* Becoming Drop non-dominant
*/