// includes the 'begin' function

#include "main.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

void begin()
{
	cout<< "hello, and welcome to txtrole, a text-based rpg by slycolon." << endl
		<< "press enter to continue." << endl;
	cin.ignore();
	
	cout<< endl
		<< "okay, so before we start, we should go over a few things. this" << endl
		<< "game uses a few commands that you should know about. any and" << endl
		<< "all commands that are more than one letter are case-sensitive." << endl << endl
		<< "press enter to see the list of commands: " << endl << ">";
	cin.ignore();
}
