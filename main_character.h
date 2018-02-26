#ifndef __MAIN_CHARACTER_H_INCLUDED__
#define __MAIN_CHARACTER_H_INCLUDED__

class player
{
	private:
		int health;
		int attack;
		int defense;
		char playerName[50];
		
	public:
		int get_health()
		{
			return health;
		}
		
		int get_attack()
		{
			return attack;
		}
	
		int get_defense()
		{
			return defense;
		}
	
		void set_health(int sethealth)
		{
			health = sethealth;
		}
	
		void set_attack(int setattack)
		{
			attack = setattack;
		}
	
		void set_defense(int setdefense)
		{
			defense = setdefense;
		}
		
		void set_name()
		{
			cout<<endl
				<<"what is your name?" << endl << endl
				<<">";
			getline(cin, playerName);
		}
	
		char get_name()
		{
			return playerName;
		}
}


#endif
