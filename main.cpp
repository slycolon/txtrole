#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

//global constants begin
const int LEVEL_TWO = 50;
const int LEVEL_THREE = 100;
const int LEVEL_FOUR = 200;	//total experience accumulated to 
const int LEVEL_FIVE = 350;
const int LEVEL_SIX = 550;


//global constants end 
//begin global variables
string name;
int health = 50;
int strength = 15;
int defense = 15;		//base player stats
int speed = 15;
int level = 1;
int totalExperience = 0;

string currentEnemy;
string enemyFlavor;
string enemyAttackNameOne;
string enemyAttackNameTwo;
string enemyAttackNameThree;
string enemyAttackDescOne;
string enemyAttackDescTwo;
string enemyAttackDescTwo;
int enemyHealth = 0;		//changeable variables for enemy statistics, depending on what 
int enemyAttack = 0;
int enemyDefense = 0;
int enemyExperience = 0;	//how much experience the player gets from killing the enemy

//end global variables

//begin function prototyping
void begin();
void findName();

char startGame();

void enterCaveControlFlow();
void enterVillageControlFlow();

void checkLevel();
//end function prototyping

int main()
{
	char choice;
	
	begin();
	findName();
	findWeapon();
	
	choice = startGame()
		
	if (choice == 'a')
	{
		enterCaveControlFlow();
	}
	else
	{
		enterVillageControlFlow();
	}
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



char startGame()
{
	char choice;
	
	cout<<"you wake up on the cold, wet ground of an unlit cave on the side of a mountain." << endl
		<<"the cave appears to go deeper into the mountain, but if you look outside the" << endl
		<<"mouth of the cave, there is also a path leading into a village. would you like" << endl
		<<"to (a) delve deeper into the cave and explore the farest reaches of the under-"<<endl
		<<"belly of the mountain, or (b) see what sorts of interesting loot you can find" << endl
		<<"hidden in the shacks of the village on the river?" << endl << endl << ">";
	
	cin >> choice;
	
	if (char == 'a' || char == 'A')
		return 'a';
	else
		return 'b';
}

/****
function name: void caveControlFlow()
purpose: starts the cave scene
****/
	
void enterCaveControlFlow()
{
	
}

/****
function name: void villageControlFlow
purpose: essentially what i would put in main() but able
to run a specific amount of times, and you can just go 
straight to the cave whenever necessary
****/
	
void enterVillageControlFlow()
{
	
}


/****
function name: void checkLevel()
purpose: checks the player level after any encounter where
the player receives experience. if their level changes,
that means they level up and it tells them their new level,
and it changes their statistics accordingly
****/
void checkLevel()
{
	int newLevel;
	
	if(experience < LEVEL_TWO)
	{
		level = 1;
	}
	else if (experience >= LEVEL_TWO || experience < LEVEL_THREE)
	{
		newLevel = 2;
		if (newLevel - level != 0)
		{
			cout<<"congrats! you're now level " << newLevel << "!";
		}
		level = 2;
		strength = 20;
		defense = 20;					//these new stats may need to be rebalanced during testing
		speed = 20;
	}
	else if (experience >= LEVEL_THREE || experience < LEVEL_FOUR)
	{
		newLevel = 3;
		if (newLevel - level != 0)
		{
			cout<<"congrats! you're now level " << newLevel << "!";
		}
		level = 3;
		strength = 25;
		defense = 25;
		speed = 25;
	}
	else if (experience >= LEVEL_FOUR || experience < LEVEL_FIVE)
	{
		newLevel = 4;
		if (newLevel - level != 0)
		{
			cout<<"congrats! you're now level " << newLevel << "!";
		}
		level = 4;
		strength = 30;
		defense = 30;
		speed = 30;
	}
	else if (experience >= LEVEL_FIVE || experience < LEVEL_SIX)
	{
		newLevel = 5;
		if (newLevel - level != 0)
		{
			cout<<"congrats! you're now level " << newLevel << "!";
		}
		level = 5;
		strength = 35;
		defense = 35;
		speed = 35;
	}
	else
	{
		newLevel = 6;
		if (newLevel - level != 0)
		{
			cout<<"congrats! you're now level " << newLevel << "!";
		}
		level = 6;
		strength = 40;
		defense = 40;
		speed = 40;
	}
