// rpg by slycolon

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

void begin();
string nick();
int playerClass = 0;

int main()
{
	//integers
	string nick = "player";
	string playerClass = "brute";
	int hp = 13;
	int atk = 14;
	int def = 0;
	int mna = 15;
	int intel = 17;
	
	
	//game beginning
	begin();
	nick = nick();					// not sure if this will auto do nick() or if i have to initialize it first
	
	
	if (gender == "g" || gender == "G")
	{
		gender = "girl";
		hp = 13;
		atk = 13;
		def = 17;
		mna = 15;
		intel = 17;
	}
	else if (gender == "b" || gender == "B")
	{
		gender = "boy";
		hp = 15;
		atk = 13;
		def = 14;
		mna = 15;
		intel = 14;
	}
	else
	{
		cout<< "sorry, but that is not a valid option" << endl
			<< "(there may be more options in the future," << endl
			<< "but just not at the current moment)." << endl
			<< "therefore, your gender has been defaulted " << endl
			<< "to girl." << endl << endl;
	}
	cout<< "so, based on your gender (i know it's " << endl
		<< "sexist but just please play along for " << endl
		<< "the first version at least), which is " << endl
		<< gender << ", these are your stats:" << endl << endl
		<< "health points (hp): " << hp << endl
		<< "mana points (mna): " << mna << endl
		<< "attack damage (atk): " << atk << endl
		<< "defense (def): " << def << endl
		<< "intelligence (intel): " << intel << endl << endl
		
		<< "now, you have the opportunity to add a " << endl
		<< "few points onto whichever statistic that " << endl
		<< "you think will be useful in your coming" << endl
		<< "adventure." << endl << endl;
		
		do
		{
			cout<< "You currently have " << points << " points left to spend."
		}
}


void begin()
{
	cout<<"hello, and welcome to txtrole, a text-based rpg by slycolon." << endl
		<<"press enter to continue.";
	cin.ignore();
	
	cout<< endl
		<< "okay, before we start, we should go over a few things. this" << endl
		<< "game uses a few commands that you should know about and all" << endl
		<< "commands that are more than one letter are case-sensitive." << endl
		<< "press enter to see the list of commands. ";
	cin.ignore();
	
	cmds();
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
	
