#include <iostream>
#include <iomanip>
#include <fstream>
#include <windows.h>
#include "main_character.h"
#include "minion.h"
#include "createCharacter.h"

using namespace std;

int main()
{
	start();
}

void start()
{
	char choice;
	
	cout<<"welcome to txtrole. new character or load (n/l)?" <<endl << endl
		<<">";
	cin >> choice;
	
	if (choice == 'n' || choice == 'N')
	{
		newCharacter();
	}
	else if (choice == 'l' || choice == 'L')
	{
		 loadCharacter();
	}
	else
	{
		
		cout<<"invalid. new character or load (n/l)?" <<endl<<endl
			<<">";
		cin >> choice;
		
}
