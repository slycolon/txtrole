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
string playerClass;
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

void chooseRace();
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

void chooseClass();
void clericStats();
void rogueStats();
void fighterStats();
void warlockStats();
void paladinStats();
void warlordStats();
void rangerStats();
void wizardStats();
void clericInfo();
void rogueInfo();
void fighterInfo();
void warlockInfo();
void paladinInfo();
void warlordInfo();
void rangerInfo();
void wizardInfo();

void startGame();

void enterCave();

void enterVillage();

void checkLevel();
//end function prototyping

int main()
{
	char choice;
	
	begin();	
	return 0;
}

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
	
	chooseName();
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
	
	chooseRace();
}

void chooseRace()
{
	char choice;
	
	cout<<"now, what race might you be?" << endl << endl
		<<"(a) dragonborn (for more info, type 'i')" << endl
		<<"(b) dwarf (for more info, type 'j')" << endl
		<<"(c) eladrin (for more info, type 'k')" << endl
		<<"(d) elf (for more info, type 'l')" << endl
		<<"(e) half-elf (for more info, type 'm')" << endl
		<<"(f) halfling (for more info, type 'n')" << endl
		<<"(g) tiefling (for more info, type 'o')" << endl
		<<"(h) human (for more info, type 'p')" << endl << endl
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
			humanStats();
	}
}

void dragonbornStats()
{
	playerRace = "dragonborn";
	
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
	playerSpeed = 6;
	
	chooseClass();
}

void dwarfStats()
{
	playerRace = "dwarf";
	
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
	
	playerHeight = 1.37;
	playerWeight = 82;
	playerSpeed = 5;
	
	chooseClass();
}

void eladrinStats()
{
	playerRace = "eladrin";
	
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
	
	playerHeight = 1.75;
	playerWeight = 67;
	playerSpeed = 6;
	
	chooseClass();
}

void elfStats()
{
	playerRace = "elf";
	
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
	
	playerHeight = 1.75;
	playerWeight = 64;
	playerSpeed = 7;
	
	chooseClass();
}

void halfElfStats()
{
	playerRace = "half-elf";
	
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
	
	playerHeight = 1.75;
	playerWeight = 72;
	playerSpeed = 6;
	chooseClass();
}

void halflingStats()
{
	playerRace = "halfling";
	
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
	
	playerHeight = 1.22;
	playerWeight = 34;
	playerSpeed = 6;
	
	chooseClass();
}

void tieflingStats()
{
	playerRace = "tiefling";
	
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
	
	playerHeight = 1.78;
	playerWeight = 77;
	playerSpeed = 6;
	
	chooseClass();
}

void humanStats()
{
	playerRace = "human";
	
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
	
	playerHeight = 1.77;
	playerWeight = 77;
	playerSpeed = 6;
	
	chooseClass();
}

void dragonbornInfo()
{
	cout<<"--------------------------------------------------------------------------------------------------------------"; 
	cout<<"
}

void dwarfInfo()
{
	
}

void eladrinInfo()
{
	
}

void elfInfo()
{
	
}

void halfElfInfo()
{
	
}

void halflingInfo()
{
	
}

void tieflingInfo()
{
	
}

void humanInfo()
{
	
}

void chooseClass()
{
	char choice;
	
	cout<<"now, you have eight choices as to what your class is. what might yours be?" << endl << endl
		<<"(a) cleric (for more info, type 'i')" << endl
		<<"(b) rogue (for more info, type 'j')" << endl
		<<"(c) fighter (for more info, type 'k')" << endl
		<<"(d) warlock (for more info, type 'l')" << endl
		<<"(e) paladin (for more info, type 'm')" << endl
		<<"(f) warlord (for more info, type 'n')" << endl
		<<"(g) ranger (for more info, type 'o')" << endl
		<<"(h) wizard (for more info, type 'p')" << endl << endl
		<<">";
	cin >> choice;
	
	switch (choice)
	{
		case: 'a':
		case: 'A':
			clericStats();
			break;
		case: 'b':
		case: 'B':
			rogueStats();
			break;
		case: 'c':
		case: 'C':
			fighterStats();
			break;
		case: 'd':
		case: 'D':
			warlockStats();
			break;
		case: 'e':
		case: 'E':
			paladinStats();
			break;
		case: 'f':
		case: 'F':
			warlordStats();
			break;
		case: 'g':
		case: 'G':
			rangerStats();
			break;
		case: 'h':
		case: 'H':
			wizardStats();
			break;
		case: 'i':
		case: 'I':
			clericInfo();
			break;
		case: 'j':
		case: 'J':
			rogueInfo();
			break;
		case: 'k':
		case: 'K':
			fighterInfo();
			break;
		case: 'l':
		case: 'L':
			warlockInfo();
			break;
		case: 'm':
		case: 'M':
			paladinInfo();
			break;
		case: 'n':
		case: 'N':
			warlordInfo();
			break;
		case: 'o':
		case: 'O':
			rangerInfo();
			break;
		case: 'p':
		case: 'P':
			wizardInfo();
			break;
		default:
			clericStats();
	}
}

void clericStats()
{
	
}

void rogueStats()
{
	
}

void fighterStats()
{
	
}

void warlockStats()
{
	
}

void paladinStats()
{
	
}

void warlordStats()
{
	
}

void rangerStats()
{
	
}

void wizardStats()
{
	
}

void clericInfo()
{
	chooseClass();
}

void rogueInfo()
{
	chooseClass();
}

void fighterInfo()
{
	chooseClass();
}

void warlockInfo()
{
	chooseClass();
}

void paladinInfo()
{
	chooseClass();
}

void warlordInfo()
{
	chooseClass();
}

void rangerInfo()
{
	chooseClass();
}

void wizardInfo()
{
	chooseClass();
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

