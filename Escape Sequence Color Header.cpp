// Escape Sequence Color Header.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>


using namespace std;

enum TextAttributes
{
	TA_ATTRIBUTES_OFF = 0,
	TA_BOLD = 1,
	TA_UNDERSCORE = 4,
	TA_BLINK = 5,
	TA_REVERSE_VIDEO = 7,
	TA_CONCEALED = 8
};

enum ForegroundColors
{
	F_Black = 30,
	F_Red = 31,
	F_Green = 32,
	F_Yellow = 33,
	F_Blue = 34,
	F_Magenta = 35,
	F_Cyan = 36,
	F_White = 37
};

enum BackgroundColors
{
	B_Black = 40,
	B_Red = 41,
	B_Green = 42,
	B_Yellow = 43,
	B_Blue = 44,
	B_Magenta = 45,
	B_Cyan = 46,
	B_White = 47
};



int _tmain( int argc, _TCHAR* argv[] )
{

	const int numTextAttributes = 6;
	const int numForegroundColors = 8;
	const int numBackgroundColors = 8;

	const string BlankTxt = " ";
	const string ConstTxt = "const";
	const string CharTxt = "char";
	const string ColorTxt = "COLOR";
	const string UnderscoreTxT = "_";
	const string BlackTxt = "BLACK";
	const string RedTxt = "RED";
	const string GreenTxt = "GREEN";
	const string YellowTxt = "YELLOW";
	const string BlueTxt = "BLUE";
	const string MagentaTxt = "MAGENTA";
	const string CyanTxt = "CYAN";
	const string WhiteTxt = "WHITE";

	const string Attributes_offTxt = "ATTRIBUTES_OFF";
	const string BoldTxt = "BOLD";
	const string UnderscoreTxt = "UNDERSCORE";
	const string BlinkTxt = "BLINK";
	const string Reverse_videoTxt = "REVERSE_VIDEO";
	const string ConcealedTxt = "CONCEALED";

	const string BracketsTxt = "[]";
	const string BracesLTxt = "{";
	const string BracesRTxt = "}";
	const string EscapeTxt = "0x1b";
	const string CommaTxt = ",";
	const string SemicolomTxt = ";";

	ofstream output( "Escape_Sequences_Colors.h" );

	for ( int i = 0; i < numTextAttributes; i++ )
	{
		for ( int j = 0; j < numForegroundColors; j++ )
		{
			for ( int k = 0; k < numBackgroundColors; k++ )
			{
				string s;
				s.append( ConstTxt );
				s.append( BlankTxt );
				s.append( CharTxt );

				output << s;
				output << endl;
			}
		}
	}



	return 0;
}

