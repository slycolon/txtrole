#ifndef __MAIN_CHARACTER_H_INCLUDED__
#define __MAIN_CHARACTER_H_INCLUDED__

class player
{
	private:
		int health;
		int height;
		int weight;
		int speed;
		int attack;
		int defense;
		int level;
		char playerName[50];
		
	public:
		int get_health()
		{
			return health;
		}
	
		void set_health(int sethealth)
		{
			health = sethealth;
		}
	
		int get_height()
		{
			return height;
		}
	
		void set_height(int setheight)
		{
			height = setheight;
		}
	
		int get_weight()
		{
			return weight;
		}
	
		void set_weight(int setweight)
		{
			weight = setweight;
		}
	
		int get_speed()
		{
			return speed;
		}
	
		void set_speed(int setspeed)
		{
			speed = setspeed;
		}
		int get_attack()
		{
			return attack;
		}
	
		void set_attack(int setattack)
		{
			attack = setattack;
		}
	
		int get_defense()
		{
			return defense;
		}
	
		void set_defense(int setdefense)
		{
			defense = setdefense;
		}
		
		char get_name()
		{
			return playerName;
		}
	
		void set_name()
		{
			cout<<endl
				<<"what is your name?" << endl << endl
				<<">";
			getline(cin, playerName);
		}
	
		int get_level()
		{
			return level;
		}
	
		void set_level(int setlevel)
		{
			level = setlevel;
		}
	
		void levelUp()
		{
			level += 1;
		}
	
		
}


#endif
