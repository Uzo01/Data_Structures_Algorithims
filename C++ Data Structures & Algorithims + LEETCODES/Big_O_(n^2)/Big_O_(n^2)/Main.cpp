#include <iostream>

using namespace std;
/*
* Big O:(n^2)
* nested for loop
* this show that n is times n (n*n)/(10*10)
* printing numer from 0-99 100 numbers
*/



void getItems(int n) //intialise integer n
{
	for (int i = 0; i < n; i++) // Loop int i upwards from number (n)
	{
		for (int k = 0; k < n; k++) // Loop int k upwards from number (n)
		{
			cout << i << k << endl; //print k
		}
	}
}

int main()
{
	getItems(10);// show 7 numbers from 0-6
}
/*
* we are shown that the linear proportion rate increases for O(n^2) compared to O(n)
* making Big O:(n) more effeincet due to it being proportional
*/