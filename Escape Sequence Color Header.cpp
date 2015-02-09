// Escape Sequence Color Header.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>


using namespace std;


int _tmain( int argc, _TCHAR* argv[] )
{
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

	const int numTextAttributes = 6;
	const int numForegroundColors = 8;
	const int numBackgroundColors = 8;

	const string BlankTxt = " ";
	const string ConstTxt = "const";
	const string CharTxt = "char";
	const string ColorTxt = "COLOR";
	const string UnderscoreTxt = "_";


	const string BlackTxt = "BLACK";
	const string RedTxt = "RED";
	const string GreenTxt = "GREEN";
	const string YellowTxt = "YELLOW";
	const string BlueTxt = "BLUE";
	const string MagentaTxt = "MAGENTA";
	const string CyanTxt = "CYAN";
	const string WhiteTxt = "WHITE";

	const string TA_Attributes_offTxt = "ATTRIBUTESOFF";
	const string TA_BoldTxt = "BOLD";
	const string TA_UnderscoreTxt = "UNDERSCORE";
	const string TA_BlinkTxt = "BLINK";
	const string TA_Reverse_videoTxt = "REVERSE_VIDEO";
	const string TA_ConcealedTxt = "CONCEALED";

	const string BracketsTxt = "[]";
	const string BracesLTxt = "{";
	const string BracesRTxt = "}";
	const string EscapeTxt = "0x1b";
	const string CommaTxt = ",";
	const string SemicolomTxt = ";";
	const string EqualTxt = "=";
	ofstream output( "Escape_Sequences_Colors.h" );

	for ( int indexTA = 0; indexTA < numTextAttributes; indexTA++ )
	{
		for ( int indexFore = 0; indexFore < numForegroundColors; indexFore++ )
		{
			for ( int indexBack = 0; indexBack < numBackgroundColors; indexBack++ )
			{
				string out;
				out.append( ConstTxt );
				out.append( BlankTxt );
				out.append( CharTxt );
				out.append( BlankTxt );

				string name = "";
				name.append( ColorTxt );
				name.append( UnderscoreTxt );

				switch ( indexTA )
				{
				case 0:
					//name.append( TA_Attributes_offTxt );
					break;
				case 1:
					name.append( TA_BoldTxt );
					name.append( UnderscoreTxt );
					break;
				case 2:
					name.append( TA_UnderscoreTxt );
					name.append( UnderscoreTxt );
					break;
				case 3:
					name.append( TA_BlinkTxt );
					name.append( UnderscoreTxt );
					break;
				case 4:
					name.append( TA_Reverse_videoTxt );
					name.append( UnderscoreTxt );
					break;
				case 5:
					name.append( TA_ConcealedTxt );
					name.append( UnderscoreTxt );
					break;
				default:
					break;
				}

				switch ( indexFore )
				{
				case 0:
					name.append( BlackTxt );
					name.append( UnderscoreTxt );
					break;
				case 1:
					name.append( RedTxt );
					name.append( UnderscoreTxt );
					break;
				case 2:
					name.append( GreenTxt );
					name.append( UnderscoreTxt );
					break;
				case 3:
					name.append( YellowTxt );
					name.append( UnderscoreTxt );
					break;
				case 4:
					name.append( BlueTxt );
					name.append( UnderscoreTxt );
					break;
				case 5:
					name.append( MagentaTxt );
					name.append( UnderscoreTxt );
					break;
				case 6:
					name.append( CyanTxt );
					name.append( UnderscoreTxt );
					break;
				case 7:
					name.append( WhiteTxt );
					name.append( UnderscoreTxt );
					break;
				default:
					break;
				}

				switch ( indexBack )
				{
				case 0:
					name.append( BlackTxt );
					break;
				case 1:
					name.append( RedTxt );
					break;
				case 2:
					name.append( GreenTxt );
					break;
				case 3:
					name.append( YellowTxt );
					break;
				case 4:
					name.append( BlueTxt );
					break;
				case 5:
					name.append( MagentaTxt );
					break;
				case 6:
					name.append( CyanTxt );
					break;
				case 7:
					name.append( WhiteTxt );
					break;
				default:
					break;
				}

				out.append( name );

				out.append( BlankTxt );
				out.append( EqualTxt );
				out.append( BlankTxt );
				out.append( BracesLTxt );
				out.append( BlankTxt );

				out.append( EscapeTxt );
				out.append( CommaTxt );

				out.append( CommaTxt );
				out.append( BlankTxt );
				out.append( "0" );

				out.append( BracesRTxt );
				out.append( SemicolomTxt );
				output << out;
				output << endl;
			}
		}
	}



	return 0;
}

