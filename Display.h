#include <iostream>
#include <string>
#include "Digit.h"

Digit
	ZERO('0', " __  ", "|  | ", "|__| "),
	ONE('1', "     ", "   | ", "   | "),
	TWO('2', " __  ", " __| ", "|__  "),
	THREE('3', " __  ", " __| ", " __| "),
	FOUR('4', "     ", "|__  ", "   | "),
	FIVE('5', " __  ", "|__  ", " __| "),
	SIX('6', " __  ", "|__  ", "|__| "),
	SEVEN('7', " __  ", "   | ", "   | "),
	EIGHT('8', " __  ", "|__| ", "|__| "),
	NINE('9', " __  ", "|__| ", " __| "),
	COLON(':', "   ", " o ", " o "),
	SPACE(' ', " ", " ", " "),
	A('A', " __ ", "|__|", "|  |"),
	P('P', " __ ", "|__|", "|   "),
	M('M', "    ", "|\\/|", "|  |");
Digit d[15] = {ZERO, ONE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, COLON, SPACE, A, P, M};

using namespace std;

class Display
{
public:
	void show(string text)
	{
		for (int i = 0; i < text.length(); i++)
		{
			for (int j = 0; j < 15; j++)
			{
				if (d[j].getSymbol() == text.at(i))
				{
					cout << d[j].getUp();
				}
			}
		}
		cout << endl;
		for (int i = 0; i < text.length(); i++)
		{
			for (int j = 0; j < 15; j++)
			{
				if (d[j].getSymbol() == text.at(i))
				{
					cout << d[j].getMiddle();
				}
			}
		}
		cout << endl;
		for (int i = 0; i < text.length(); i++)
		{
			for (int j = 0; j < 15; j++)
			{
				if (d[j].getSymbol() == text.at(i))
				{
					cout << d[j].getBottom();
				}
			}
		}
		cout << endl;
	}
};