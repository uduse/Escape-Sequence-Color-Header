# Escape-Sequence-Color-Header
Color Your Output in Unix!!


##File:
Escape Sequence Color Header.h
 
##Date:
2015/02/09 16:13 (~3h)
 
##Author:
Uduse
 
 
 
##Text Attribute Options:
	ATTRIBUTES_OFF, BOLD, UNDERSCORE, BLINK, REVERSE_VIDEO, CONCEALED
 
##Color Options:
	BLACK, RED, GREEN, YELLOW, BLUE, MAGENTA, CYAN, WHITE
 
 
##Format:

General Format, include value you want in $variable$

	COLOR_$Foreground Color$_$Background Color$
	COLOR_$Text Attribute$_$Foreground Color$_$Background Color$
	COLOR_NORMAL  // To set color to default


e.g.

	COLOR_BLUE_BLACK // Leave Text Attribute Blank if no Text Attribute appied
	COLOR_UNDERSCORE_YELLOW_RED
	COLOR_NORMAL
 
 
##Usage:
 
Just use  to stream the color you want before outputting text and
use  again to set the color to normal after outputting text.

	cout << COLOR_BLUE_BLACK << "TEXT" << COLOR_NORMAL << endl;
	cout << COLOR_BOLD_YELLOW_CYAN << "TEXT" << COLOR_NORMAL << endl;