# Escape-Sequence-Color-Header
Color Your Output in Unix using C++!!

![](https://github.com/Uduse/Escape-Sequence-Color-Header/blob/master/img.png?raw=true)

##Principle

http://ascii-table.com/ansi-escape-sequences.php

##File:
**Escape Sequence Color Header.h (see src folder)**
 
##Date:
2015/02/09 16:13 (~3h)
 
##Author:
Uduse
 
 
 
##Text Attribute Options:
	BOLD, UNDERSCORE, BLINK, REVERSE_VIDEO, CONCEALED
 
##Color Options:
	BLACK, RED, GREEN, YELLOW, BLUE, MAGENTA, CYAN, WHITE
 
 
##Format:

General Format, include value you want in $variable$

	COLOR_$Text Attribute$
	COLOR_$Foreground Color$_$Background Color$
	COLOR_$Text Attribute$_$Foreground Color$_$Background Color$
	COLOR_NORMAL  // To set color to default


e.g.
	
	COLOR_BOLD
	COLOR_BLUE_BLACK // Leave Text Attribute Blank if no Text Attribute appied
	COLOR_UNDERSCORE_YELLOW_RED
	COLOR_NORMAL
 
 
##Usage:
 
Just use  to stream the color you want before outputting text and
use  again to set the color to normal after outputting text.

	cout << COLOR_BLUE_BLACK << "TEXT" << COLOR_NORMAL << endl;
	cout << COLOR_BOLD_YELLOW_CYAN << "TEXT" << COLOR_NORMAL << endl;

##More Samples

Create a block of **Bold** text

	cout << COLOR_BOLD;
	cout << COLOR_RED_CYAN << "COLOR_RED_CYAN";
	cout << COLOR_WHITE_MAGENTA << "COLOR_WHITE_MAGENTA";
	cout << COLOR_CYAN_YELLOW << "COLOR_CYAN_YELLOW";
	cout << COLOR_NORMAL;
![](https://github.com/Uduse/Escape-Sequence-Color-Header/blob/master/img3.png?raw=true)

<br>

Create a block of **Red** text

	cout << COLOR_RED_NORMAL;
	cout << COLOR_BOLD << "COLOR_BOLD";
	cout << COLOR_UNDERSCORE << "COLOR_UNDERSCORE";
	cout << COLOR_NORMAL;

![](https://github.com/Uduse/Escape-Sequence-Color-Header/blob/master/img2.jpg?raw=true)