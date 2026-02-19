#ifndef THANOS_H
#define THANOS_H

#include "monster.h"

using namespace std;

// use main-lab.cpp
class Thanos 
{

private:
	int stones;
	int hp; 
		
public:
	Thanos();
	~Thanos();
	/* constructor and destructor */

	void announce();

	void snap_finger(monster x[], int n); 
	/* show all hps
	/ clear half of monster hp, if stone =6*/

	int get_stones();

	void operator++(); // increase the stone;
};

Thanos::Thanos() {
	stones = 0;
	hp = 100;
}

void Thanos::operator++() 
{
	++stones;
}
	
int Thanos::get_stones() {
	return stones;
}

void Thanos::announce() {
	cout << "Thanos has gain another stone, now he have " << stones << " stones.\n";
}
void Thanos::snap_finger(monster x[], int n) 
{
								
	if (stones < 6) 
	{
		cout << "Thanos doesnt have enough infinity stone" << endl;
		cout << "Needs to invade other colony to get more stones\n\n";
	}
	else 
	{
		// remove half of the monster. Can do randomly or sort the weakest one up, or first half
		// in this case will remove the first half

		for (int i = 0; i < (n/2); i++) 
		{
			// m[i].hp=0; Wont work since hp is private
			// need to create function 
			x[i].reset_hp(); 
			// x[i].get_name();
			

		}			
		cout << "End of Story\n";
		exit(0);																										
	}
}

Thanos::~Thanos() {}

#endif