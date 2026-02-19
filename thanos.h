#ifndef thanos_h
#define thanos_h

// use main-lab.cpp
class Thanos 
{
private:
	int stones;
	int hp; 
public:
	/* constructor and destructor */
	void snap_finger(monster[]); 
	void reset_hp() {hp = 0};
	/* show all hps
	/ clear half of monster hp, if stone =6*/

	void operator++(); // increase the stone;
};



void Thanos::operator++(){
	++stones;
}

void Thanos::snap_finger(monster m[], int ) {
	if (stones < 6) {
		cout << "Sorry, you dont have enough infinity stone" << endl;
	}
	else {
		// remove half of the monster. Can do randomly or sort the weakest one up, or first half
		// in this case will remove the first half
		for (int i = 0; i < n; i++) {
			// m[i].hp=0; Wont work since hp is private
			// need to create function 
			m[i].reset_hp(); 
		}
	}
}

Thanos::~Thanos() // destructor
{

}



#endif
