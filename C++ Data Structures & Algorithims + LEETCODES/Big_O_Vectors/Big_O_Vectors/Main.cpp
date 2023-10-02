#include <iostream>
#include <vector>

// Big O of Vectors this can also be applied arrays
/*
	e.g. [11,3,23,7]
		  0, 1, 2, 3 - in an array
		  looking at value is O(n)
		  looking by index is O(1)
*/
 

using namespace std;


int main()
{
	vector <int> myVec = { 1,25,33,24,3 };
	myVec.push_back(17);
	// adds 17 to vector 
	for (auto it = myVec.begin(); it != myVec.end(); ++it)
		/*create auto declare for variable it
		it is euqal to myVec at the beginning 
		it is not erqual to myVec at the end
		increase increamentation of it*/
		cout << ' ' << *it;
		//derefernce it after inistialisation 
}