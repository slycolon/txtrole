// purpose: couts all tables based on what is being looked for

#include <main.h>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

void cmds()         		    // used as a list of commands
{
	cout<< "command                                       what it does" << endl
		<< "--------------------------------------------------------------" << endl
		<< "n                                                 go north" << endl
		<< "s                                                 go south" << endl
		<< "e                                                 go east" << endl
		<< "w                                                 go west" << endl
		<< "i                                         check inventory" << endl
		<< "attack 'x'                                attack an enemy" << endl
		<< "heal                          gives you 5 hp, uses 5 mana" << endl
		<< "                             mana can only be restored at" << endl
		<< "                                      fountains of youth)" << endl
		<< "--------------------------------------------------------------" << endl;
}
