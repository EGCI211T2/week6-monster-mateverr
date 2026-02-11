#ifndef monster_h
#define monster_h
using namespace std;

class monster
{
private:
	string name;
	int hp,potion;
public:
	void Attack(monster &);
    void heal();
	monster(string, int=1,int=1); //constructor, set=1 for default value
	// if the constructor have display or cout it will...
	
	~monster();
	void display(); //finish display func
};

void monster::display() 
{
	cout << "Name: " << endl;

}

monster::~monster() {
	cout << name << " is gone." << endl;
}

monster::monster(string n, int h, int p) 
{
	name = n;
	hp = h;
	potion = p;
}

#endif
