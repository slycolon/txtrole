#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

//begin global variables
string name;
int health = 50;
int strength = 15;
int defense = 15;		//base player stats
int speed = 15;
int level = 1;
int experience = 0;

string playerWeapon;
int weaponDamage = 0;		//weapon variables, upgradable at later levels
int weaponSpeed = 0;

//end global variables

//begin function prototyping
void begin();
void findName();
void findWeapon();
//end function prototyping

int main()
{
	char choice;
	
	begin();
	findName();
	findWeapon();
}


/*****************
function name: void begin()
purpose: begins the game
*****************/
void begin();
{
	cout<<"© slycolon 2017. all rights reserved." << endl << endl
		<<" ______                       " << endl
		<<"|_    _|     __               __" << endl
		<<"  |  |__  __|  |_ ____  _____|  |_____ " << endl
		<<"  |  |\ \/ /|   _|  __||  .  |  |  -__|" << endl
		<<"  |__|/_/\_\|__| |_|   |_____|__|_____ " << endl << endl
		<<"welcome to txtrole, a text-based choose your own adventure style rpg," << endl
		<<"created by slycolon. press enter to begin. ";
	cin.ignore();
	cout<<endl;
}

/****
function name: void findName()
purpose: asks the player for their name
****/

void findName()
{
	bool askName = true;
	char isName;
	
	cout<<"now, to start out, what is your name, traveller?" << endl << endl
		<<">";
	cin >> name;
	
	do
	{
		cout<<"so, your name is " << name << " (y or n)?" << endl << endl << ">";
		
		cin >> isName;
		
		if (isName == 'y' || isName == 'Y')
		{
			askName = true;						//if they say yes, the exit condition is fulfilled.
		}
		else
		{
			askName = false;
			cout<<endl <<"okay, so if your name isn't " << name << ", then what might it be?" << endl << endl ">";
			
			cin >> name;
		}
		
	} while (askName == false);

/****
function name: void findWeapon()
purpose: asks the player what weapon they want to wield
***/
	
void findWeapon()
{
	char choice;
	
	cout<<"now, i need you to select your main weapon. you have three choices: " << endl
		<<"    (a) a broadsword (most damage, least speed)" << endl
		<<"    (b) two daggers (moderate damage, moderate speed)" << endl
		<<"    (c) a rapier (least damage, highest speed)" << endl << endl
		<< ">";
	
	cin >> choice;
	
	switch (choice)
	{
		case 'a':
			playerWeapon = "broadsword";
			weaponDamage = 6;
			weaponSpeed = 2;
			break;
		case 'b':
			playerWeapon = "daggers";
			weaponDamage = 4;
			weaponSpeed = 4;
			break;
		case 'c':
			playerWeapon = "rapier";
			weaponDamage = 2;
			weaponSpeed = 6;
		default:
			playerWeapon = "daggers";
			weaponDamage = 4;
			weaponSpeed = 4;
	}
	
	cout<<endl;
}
