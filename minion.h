#ifndef __MINION_H_INCLUDED__
#define __MINION_H_INCLUDED__

class minion
{
	private:
		int type;
		int health;
		int attack;
		int atkModifier;
		int defense;
		int speed;
	public:
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
