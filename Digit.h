#include <iostream>

using namespace std;

class Digit
{
private:
	char symbol;
	string up;
	string middle;
	string bottom;

public:
	Digit(char symbol, string up, string middle, string bottom)
	{
		this->symbol = symbol;
		this->up = up;
		this->middle = middle;
		this->bottom = bottom;
	}
	string getUp()
	{
		return up;
	}
	string getMiddle()
	{
		return middle;
	}
	string getBottom()
	{
		return bottom;
	}
	char getSymbol()
	{
		return symbol;
	}
};