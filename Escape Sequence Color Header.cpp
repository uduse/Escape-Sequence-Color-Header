// Escape Sequence Color Header.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>


using namespace std;

#define numTextAttributes 6
#define numForegroundColors 8
#define numBackgroundColors 8


enum TextAttributes
{
	ATTRIBUTES_OFF = 0,
	BOLD = 1,
	UNDERSCORE = 4,
	BLINK = 5, 
	REVERSE_VIDEO = 7, 
	CONCEALED = 8
};

enum ForegroundColors
{
	Black = 30,
	Red = 31,
	Green = 32,
	Yellow = 33,
	Blue = 34,
	Magenta = 35,
	Cyan = 36,
	White = 37
};

enum BackgroundColors
{
	Black = 40,
	Red = 41,
	Green = 42,
	Yellow = 43,
	Blue = 44,
	Magenta = 45,
	Cyan = 46,
	White = 47
};


int _tmain(int argc, _TCHAR* argv[])
{
	ofstream output( "Escape_Sequences_Colors.h" );
	
	TextAttributes attribute = BOLD;

	switch ( attribute )
	{
	case ATTRIBUTES_OFF:
		break;
	case BOLD:
		break;
	case UNDERSCORE:
		break;
	case BLINK:
		break;
	case REVERSE_VIDEO:
		break;
	case CONCEALED:
		break;
	default:
		break;
	}

	output << attribute;


	return 0;
}

