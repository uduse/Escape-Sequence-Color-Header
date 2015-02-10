// Escape Sequence Color Header.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include <iosfwd>
#include <istream>
#include <sstream>

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
	const string TA_Reverse_videoTxt = "REVERSEVIDEO";
	const string TA_ConcealedTxt = "CONCEALED";

	const string BracketsTxt = "[]";
	const string BracketsLTxt = "[";
	const string BracesLTxt = "{";
	const string BracesRTxt = "}";
	const string EscapeTxt = "0x1b";
	const string CommaTxt = ",";
	const string SemicolomTxt = ";";
	const string EqualTxt = "=";
	const string QuoteTxt = "\'";

	ofstream output( "Escape_Sequences_Colors.h" );


	output << "/*!" << endl
		<< " * File:" << endl
		<< " * Escape Sequence Color Header.h" << endl
		<< " *" << endl
		<< " * Date:" << endl
		<< " * 2015/02/09 16:13" << endl
		<< " *" << endl
		<< " * Author:" << endl
		<< " * Uduse" << endl
		<< " *" << endl
		<< " *" << endl
		<< " *" << endl
		<< " * Text Attribute Options:" << endl
		<< " * ATTRIBUTES_OFF, BOLD, UNDERSCORE, BLINK, REVERSE_VIDEO, CONCEALED" << endl
		<< " *" << endl
		<< " * Color Options:" << endl
		<< " * BLACK, RED, GREEN, YELLOW, BLUE, MAGENTA, CYAN, WHITE" << endl
		<< " * " << endl
		<< " * " << endl
		<< " * Format:" << endl
		<< " * COLOR_$Foreground Color$_$Background Color$" << endl
		<< " * COLOR_$Text Attribute$_$Foreground Color$_$Background Color$" << endl
		<< " * COLOR_NORMAL // To set color to default" << endl
		<< " * e.g." << endl
		<< " * COLOR_BLUE_BLACK // Leave Text Attribute Blank if no Text Attribute appied" << endl
		<< " * COLOR_UNDERSCORE_YELLOW_RED" << endl
		<< " * COLOR_NORMAL" << endl
		<< " *" << endl
		<< " *" << endl
		<< " * Usage:" << endl
		<< " *" << endl
		<< " * Just use " << " to stream the color you want before outputing text and" << endl
		<< " * use " << " again to set the color to normal after outputing text." << endl
		<< " * e.g. cout << COLOR_BLUE_BLACK << \"TEXT\" << COLOR_NORMAL << endl;" << endl
		<< " * e.g. cout << COLOR_BOLD_YELLOW_CYAN << \"TEXT\" << COLOR_NORMAL << endl;" << endl
		<< " *" << endl
		<< " *" << endl
		<< " */" << endl;


	output << "const char COLOR_NORMAL[] = { 0x1b, '[', '0', ';', '3', '9', 'm', 0 };" << endl;

	for ( int indexTA = 0; indexTA < numTextAttributes; indexTA++ )
	{
		for ( int indexFore = 0; indexFore < numForegroundColors; indexFore++ )
		{
			for ( int indexBack = 0; indexBack < numBackgroundColors; indexBack++ )
			{
				char temp;
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
				name.append( BracketsTxt );

				out.append( name );


				out.append( BlankTxt );
				out.append( EqualTxt );
				out.append( BlankTxt );
				out.append( BracesLTxt );
				out.append( BlankTxt );

				out.append( EscapeTxt );
				out.append( CommaTxt );
				out.append( BlankTxt );
				out.append( QuoteTxt );
				out.append( BracketsLTxt );
				out.append( QuoteTxt );
				out.append( CommaTxt );
				out.append( BlankTxt );

				string sequence = "";

				//====================================//
				//  Text Attributes Print
				//====================================//

				TextAttributes TA;
				switch ( indexTA )
				{
				case 0:
					TA = TA_ATTRIBUTES_OFF;
					break;
				case 1:
					TA = TA_BOLD;
					break;
				case 2:
					TA = TA_UNDERSCORE;
					break;
				case 3:
					TA = TA_BLINK;
					break;
				case 4:
					TA = TA_REVERSE_VIDEO;
					break;
				case 5:
					TA = TA_CONCEALED;
					break;
				default:
					break;
				}


				istringstream TAS( to_string( TA ) );

				while ( TAS >> temp )
				{
					sequence.append( QuoteTxt );
					sequence += temp;
					sequence.append( QuoteTxt );
					sequence.append( CommaTxt );
					sequence.append( BlankTxt );
				}

				sequence.append( QuoteTxt );
				sequence.append( SemicolomTxt );
				sequence.append( QuoteTxt );
				sequence.append( CommaTxt );
				sequence.append( BlankTxt );

				//====================================//
				//  Foreground Color Print
				//====================================//

				ForegroundColors FC;
				switch ( indexFore )
				{
				case 0:
					FC = F_Black;
					break;
				case 1:
					FC = F_Red;
					break;
				case 2:
					FC = F_Green;
					break;
				case 3:
					FC = F_Yellow;
					break;
				case 4:
					FC = F_Blue;
					break;
				case 5:
					FC = F_Magenta;
					break;
				case 6:
					FC = F_Cyan;
					break;
				case 7:
					FC = F_White;
					break;
				default:
					break;
				}

				istringstream FCS( to_string( FC ) );

				while ( FCS >> temp )
				{
					sequence.append( QuoteTxt );
					sequence += temp;
					sequence.append( QuoteTxt );
					sequence.append( CommaTxt );
					sequence.append( BlankTxt );
				}

				sequence.append( QuoteTxt );
				sequence.append( SemicolomTxt );
				sequence.append( QuoteTxt );
				sequence.append( CommaTxt );
				sequence.append( BlankTxt );


				//====================================//
				//  Background Color Print
				//====================================//

				BackgroundColors BC;
				switch ( indexBack )
				{
				case 0:
					BC = B_Black;
					break;
				case 1:
					BC = B_Red;
					break;
				case 2:
					BC = B_Green;
					break;
				case 3:
					BC = B_Yellow;
					break;
				case 4:
					BC = B_Blue;
					break;
				case 5:
					BC = B_Magenta;
					break;
				case 6:
					BC = B_Cyan;
					break;
				case 7:
					BC = B_White;
					break;
				default:
					break;
				}

				istringstream BCS( to_string( BC ) );

				while ( BCS >> temp )
				{
					sequence.append( QuoteTxt );
					sequence += temp;
					sequence.append( QuoteTxt );
					sequence.append( CommaTxt );
					sequence.append( BlankTxt );
				}


				out.append( sequence );

				// Fixed Endings
				out.append( QuoteTxt );
				out.append( "m" );
				out.append( QuoteTxt );
				out.append( CommaTxt );
				out.append( BlankTxt );
				out.append( "0" );
				out.append( BlankTxt );

				out.append( BracesRTxt );
				out.append( SemicolomTxt );
				output << out;
				output << endl;
			}
		}
	}



	return 0;
}

