#include <iostream>
#include "Escape_Sequences_Colors.h"

using namespace std;

int main( int argc, char* argv[] )
{
	cout << COLOR_BLUE_BLACK << "TEXT" << COLOR_NORMAL << endl;
	cout << COLOR_BOLD_RED_BLACK << "TEXT" << COLOR_NORMAL << endl;
	cout << COLOR_BOLD_YELLOW_CYAN << "TEXT" << COLOR_NORMAL << endl;
	cout << COLOR_BLUE_WHITE << "TEXT" << COLOR_NORMAL << endl;
	cout << COLOR_BLINK_RED_CYAN << "TEXT" << COLOR_NORMAL << endl;
}
