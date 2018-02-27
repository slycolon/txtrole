#ifndef __MINION_H_INCLUDED__
#define __MINION_H_INCLUDED__

class minion
{
	private:
		char race[50];
		char name[50];
		int health;
		int attack;
		int atkModifier;
		int defense;
		int speed;
	public:
		
		char get_race()
		{
			return race;
		}
		
		void set_race(char setrace[])
		{
			for (int x = 0; x < 50; x++)
			{
				race[x] = setrace[x];
			}
		}
		
		char get_name()
		{
			return name;
		}
	
		void set_name(char setname[])
		{
			for (int x = 0; x < 50; x++)
			{
				name[x] = setname[x];
			}
		}
		
		int get_type()
		{
			return type;
		}
	
		void set_type(int settype)
		{
			type = settype;
		}
	
		int get_health()
		{
			return health;
		}
		
		void set_health(int sethealth)
		{
			health = sethealth;
		}
		
		int get_attack()
		{
			return attack;
		}
		
		void set_attack(int setattack)
		{
			attack = setattack;
		}
	
		int get_atkModifier()
		{
			return atkModifier;
		}
	
		void set_atkModifier(int setatkmodifier)
		{
			atkModifier = setatkmodifier;
		}
		
		int get_defense()
		{
			return defense;
		}
		
		void set_defense(int setdefense)
		{
			defense = setdefense;
		}
		
		int get_speed()
		{
			return speed;
		}
		
		void set_speed(int setspeed)
		{
			speed = setspeed;
		}
}

#endif
