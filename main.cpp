#include <iostream>
#include <iomanip>
#include <fstream>
#include <windows.h>
#include "main_character.h"
#include "minion.h"
#include "character_options.h"

using namespace std;

int main()
{
	start();
}

void start()
{
	char choice;
	
	cout<<"welcome to txtrole. ";
	
	do 
	{
		cout<<"new character or load (n/l)?" << endl << endl << ">";
		cin >> choice;
	
		if (choice == 'n' || choice == 'N')
		{
			found = true;
			newCharacter();
		}
		else if (choice == 'l' || choice == 'L')
		{
			found = true;
			loadCharacter();
		}
		else
		{
			
			cout<<"invalid. "
			cin >> choice;
			
	} while (found == false);
