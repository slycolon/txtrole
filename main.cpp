#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

//begin global variables
string name;
int health = 50;
int strength = 15;
int defense = 15;
int speed = 15;
int level = 1;
int experience = 0;
//end global variables

//begin function prototyping
void begin();
void findName();
//end function prototyping

int main()
{
	char choice;
	
	begin();
	findName();
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
