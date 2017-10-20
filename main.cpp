// rpg by slycolon

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

string begin();
void statDisplay(int hp, int mna, int atk, int def, int intel);
string nick();
int playerClass(string nick);

int main()
{
	//integers
	string nick = "player";
	int playerClass = 0;
	int hp = 0;
	int atk = 0;
	int def = 0;
	int mna = 0;
	int intel = 0;
	
	
	//game beginning
	begin();
	if (begin() == "new")
	{
		newGame();  					//write a new game function
	}
	else
	{
		loadGame();						//write a loadGame() function that leaves the player where they left off.
	}
	
	nick = nick();					// not sure if this will auto do nick() or if i have to initialize it first
	playerClass = playerClass(nick);
	
	if (playerClass == 1) 				//brute
	{
		hp = 19;
		mna = 12;
		atk = 18;
		def = 15;
		intel = 11;
	}
	else if (playerClass == 2)			//scholar
	{
		hp = 15;
		mna = 12;
		atk = 14;
		def = 14;
		intel = 20;
	}
	else if (playerClass == 3)			//healer
	{
		hp = 14;
		mna = 21;
		atk = 13;
		def = 13;
		intel = 14;
	}
	else if (playerClass == 4)			//defender
	{
		hp = 17;
		mna = 13;
		atk = 13;
		def = 20;
		intel = 12;
	}
	
	statDisplay(hp,mna,atk,def,intel);
}


string begin()
{
	string newOrLoad = "new";
	cout<<"welcome to txtrole." << endl
		<<"would you like to start a 'new' game or 'load' a previous save?";
	cin >> newOrLoad
	
	if (newOrLoad != "new" || newOrLoad != "load")
	{
		newOrLoad = "new";
	}
	
	return newOrLoad;
}

string nick()
{
	string nick = "player0"
	
	cout<< "now, there's one last thing that we need to do before we get" << endl
		<< "started. i need to ask you a few questions. first off, what" << endl
		<< "name do you go by?" << endl
		<< endl << ">";
	cin >> nick;
	
	return nick;
}
	
int playerClass(string nick)
{
	string playerClass = "brute";
	bool cont = true;
	
	cout<<"alright, " << nick << ", now i need you to decide on a class." << endl
		<<"there are 4 classes available: brute, scholar, healer, and " << endl
		<<"defender. please select one of these now (spelling and case " << endl
		<<"matters)." << endl
		<<">";
	do
	{
		
		cin >> playerClass;
	
		if (playerClass == "brute")
		{
			return 1;
			cont = false
		}
		else if (playerClass == "scholar")
		{
			return 2;
			cont = false
		}
		else if (playerClass == "healer")
		{
			return 3;
			cont = false
		}
		else if (playerClass == "defender")
		{
			return 4;
			cont = false;
		}
		else 
		{
			cout<<"i'm sorry, but " << playerClass << " is not a valid player class." << endl
				<<"please enter a valid class (remember, spelling and case are" << endl
				<<"important)." << endl << ">";
		}
	} while (cont == true);
		
}
	
void statDisplay(int hp, int mna, int atk, int def, int intel)
{
	cout<<"okay, so your stats include your: " << endl
		<<"health points, of which you have " << hp << "," << endl
		<<"mana points, of which you have " << mna << "," << endl
		<<"attack points, of which you have " << atk << "," << endl
		<<"defense points, of which you have " << def << "," << endl
		<<"and finally, intelligence points, of which you have " << intel << "." << endl << endl
		<<"keep in mind that these are all just your " << endl
		<<"base levels, and in a minute, you'll have " << endl
		<<"the opportunity to add a few onto certain " << endl
		<<"categories of your choosing, and later when" << endl
		<<"you manage to level up, you'll be given " << endl
		<<"another opportunity to add more points.";
}
	
	
	
	
	
