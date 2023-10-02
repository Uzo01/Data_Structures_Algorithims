#include <iostream>

using namespace std;

class Cookie
{
	//Attribute specific to class
private:
	string colour;
	//Constructors
public:
	~Cookie(){}
	Cookie(string colour) { this->colour = colour; }
	string getCol() //create function to get colour
	{
		return colour;
	}
	void setCol(string colour)
	{
		this->colour = colour;
	}
	
};

int main()
{
	//line that create cooki 1 & 2
	Cookie* cookieOne = new Cookie("Orange");
	Cookie* cookieTwo = new Cookie("Blue");
	//Set the colour of C1 to yellow
	cookieOne->setCol("yellow");

	cout << "C1: " << cookieOne->getCol() << endl;
	cout << "C2: " << cookieTwo->getCol() << endl;
}