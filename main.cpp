#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

//begin global variables

	//race traits

double playerHeight;			//player height, in metres
int playerWeight;
int playerSpeed;
int playerAttack;
int playerDefense;
string race;

bool commonKnown;
bool deepSpeechKnown;
bool draconicKnown;
bool dwarvenKnown;
bool elvenKnown;
bool giantKnown;
bool goblinKnown;
bool primordialKnown;
bool supernalKnown;
bool abyssalKnown;



//other traits

string name;
int playerLevel = 1;
int playerXP = 0;
	/****
	enemies & stats (base, before balancing):
	
		lycanthropes (p.180 in mm):
			
		hydra (p. 164 in mm):
			
		humans (p. 162 in mm):
			
		guardians (p.149 in mm):
			
		golems (p.142 in mm):
			
		doppelganger (p.71 in mm):
			
		
	****/
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
void chooseName();

void chooseClass();
void dragonbornStats();
void dwarfStats();
void eladrinStats();
void elfStats();
void halfElfStats();
void halflingStats();
void tieflingStats();
void humanStats();
void dragonbornInfo();
void dwarfInfo();
void eladrinInfo();
void elfInfo();
void halfElfInfo();
void halflingInfo();
void tieflingInfo();
void humanInfo();

void startGame();

void enterCave();

void enterVillage();

void checkLevel();
//end function prototyping

int main()
{
	char choice;
	
	begin();
	chooseName();
	chooseClass();
	findWeapon();
	startGame();
		
	return 0;
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



void chooseName()
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
}

void chooseClass()
{
	char choice;
	
	cout<<"now, what race might you be?" << endl << endl
		<<"(a) dragonborn (for more info, type (i)" << endl
		<<"(b) dwarf (for more info, type (j)" << endl
		<<"(c) eladrin (for more info, type (k)" << endl
		<<"(d) elf (for more info, type (l)" << endl
		<<"(e) half-elf (for more info, type (m)" << endl
		<<"(f) halfling (for more info, type (n)" << endl
		<<"(g) tiefling (for more info, type (o)" << endl
		<<"(h) human (for more info, type (p)" << endl << endl
		<<">";
	
	cin >> choice;
		
	switch (choice)
	{
		case 'a':
		case 'A':
			dragonbornStats();
			break;
		case 'b':
		case 'B':
			dwarfStats();
			break;
		case 'c':
		case 'C':
			eladrinStats();
			break;
		case 'd':
		case 'D':
			elfStats();
			break;
		case 'e':
		case 'E':
			halfElfStats();
			break;
		case 'f':
		case 'F':
			halflingStats();
			break;
		case 'g':
		case 'G':
			tieflingStats();
			break;
		case 'h':
		case 'H':
			humanStats()
			break;
		case 'i':
		case 'I':
			dragonbornInfo();
			break;
		case 'j':
		case 'J':
			dwarfInfo();
			break;
		case 'k':
		case 'K':
			eladrinInfo();
			break;
		case 'l':
		case 'L':
			elfInfo()
			break;
		case 'm':
		case 'M':
			halfElfInfo();
			break;
		case 'n':
		case 'N':
			halflingInfo();
			break;
		case 'o':
		case 'O':
			tieflingInfo();
			break;
		case 'p':
		case 'P':
			humanInfo();
			break;
		default:
			humanInfo();
	}
}

void dragonbornStats()
{
	commonKnown = true;
	draconicKnown = true;
	deepSpeechKnown = false;
	draconicKnown = false;
	dwarvenKnown = false;
	elvenKnown = false;
	giantKnown = false;
	goblinKnown = false;
	primordialKnown = false;
	supernalKnown = false;
	abyssalKnown = false;
	
	playerHeight = 1.9;
	playerWeight = 122;
}

void dwarfStats()
{
	commonKnown = true;
	draconicKnown = false;
	deepSpeechKnown = false;
	draconicKnown = false;
	dwarvenKnown = true;
	elvenKnown = false;
	giantKnown = false;
	goblinKnown = false;
	primordialKnown = false;
	supernalKnown = false;
	abyssalKnown = false;
}

void eladrinStats()
{
	commonKnown = true;
	draconicKnown = false;
	deepSpeechKnown = false;
	draconicKnown = false;
	dwarvenKnown = false;
	elvenKnown = true;
	giantKnown = false;
	goblinKnown = false;
	primordialKnown = false;
	supernalKnown = false;
	abyssalKnown = false;
}

void elfStats()
{
	commonKnown = true;
	draconicKnown = false;
	deepSpeechKnown = false;
	draconicKnown = false;
	dwarvenKnown = false;
	elvenKnown = true;
	giantKnown = false;
	goblinKnown = false;
	primordialKnown = false;
	supernalKnown = false;
	abyssalKnown = false;
}

void halfElfStats()
{
	commonKnown = true;
	draconicKnown = false;
	deepSpeechKnown = true;
	draconicKnown = false;
	dwarvenKnown = false;
	elvenKnown = true;
	giantKnown = false;
	goblinKnown = false;
	primordialKnown = false;
	supernalKnown = false;
	abyssalKnown = false;
}

void halflingStats()
{
	commonKnown = true;
	draconicKnown = false;
	deepSpeechKnown = false;
	draconicKnown = true;
	dwarvenKnown = false;
	elvenKnown = false;
	giantKnown = false;
	goblinKnown = true;
	primordialKnown = false;
	supernalKnown = false;
	abyssalKnown = false;
}

void tieflingStats()
{
	commonKnown = true;
	draconicKnown = false;
	deepSpeechKnown = false;
	draconicKnown = false;
	dwarvenKnown = false;
	elvenKnown = false;
	giantKnown = false;
	goblinKnown = false;
	primordialKnown = false;
	supernalKnown = false;
	abyssalKnown = false;
}

void humanStats()
{
	commonKnown = true;
	draconicKnown = false;
	deepSpeechKnown = false;
	draconicKnown = false;
	dwarvenKnown = false;
	elvenKnown = false;
	giantKnown = false;
	goblinKnown = false;
	primordialKnown = false;
	supernalKnown = false;
	abyssalKnown = false;
	
	
}

void dragonbornInfo()
{
	cout<<"--------------------------------------------------------------------------------------------------------------"; 
	cout<<"
}

void startGame()
{
	char choice;
	
	cout<<"you wake up on the cold, wet ground of an unlit cave on the side of a mountain." << endl
		<<"the cave appears to go deeper into the mountain, but if you look outside the" << endl
		<<"mouth of the cave, there is also a path leading into a village. would you like" << endl
		<<"to (n) go north, delving deeper into the cave and explore the farthest reaches of"<<endl
		<<"the underbelly of the mountain, or (b) see what sorts of interesting loot you" << endl
		<<"can find hidden in the shacks of the village on the river?" << endl << endl << ">";
	
	cin >> choice;
	cout<<endl;
	
	if (char == 'N' || char == 'n')
		enterCave();
	else
		enterVillage();
}

void enterCave()
{
	char choice;
	
	cout<<"you decide to venture deeper into the cave. you come to a curve in the cave," << endl
		<<"and as you continue walking, you are plunged in darkness as the mouth of the" << endl
		<<"cave collapses upon itself, trapping you inside the cave. seeing no way to " << endl
		<<"escape from the cave, you continue working your way forward in hopes of finding" << endl
		<<"a better way out. you come to a fork in the cave, and are offered two options:" << endl << endl
		<<"    (w) go left, or" << endl
		<<"    (e) go right)" << endl << endl
		<<"which do you choose?" << endl << endl
		<<">";
	
	cin >> choice;
	
	if(choice == 'w' || choice == 'W')
	{
		
	}
	else
	{
		
	}	
}
	
void enterVillage()
{
	
}

