#ifndef monster_h
#define monster_h


#include <cstdlib>
#include <iostream>

#define MAX_HP 100
#define MAX_POTION 10
// #include <string>

using namespace std;

class monster
{
private:
	// std::string name;
	string name;
	int hp,potion;

public:

	void attack(monster &);

    void heal();

	monster(string n = "Anonymous", int=1, int=2); //constructor, set=1 for default value, default name = Anonymous
	// monster(std::string n = "Anonymous", int=1, int=1); //constructor, set=1 for default value

	monster(int , int ); 

	// if the constructor have display or cout it will...
	
	~monster(); // Destructure

	void display(); // declare
	bool operator>(monster &x);
	void operator+=(int); // Binary
	void operator+=(monster &x); // Binary
	void operator--(); // Unary Operator
};

monster::monster(string n, int h, int p) 
// monster::monster(std::string n, int h, int p) 
{	
	cout << "What is your name?";
	cin >> n;
	name = n;
	srand(time(0)); //Change seed in machine time, so will get random num most of the time
	hp = rand()%MAX_HP;
	potion = rand()%MAX_POTION;

	// Rand function mod with max value
}

void monster:attack(monster &x)
{
	if (hp>x.hp) {
		x.hp > 10; x.hp-=10; x.hp = 0;
		hp--;
	}
	else {
		// in case not enough hp
		x.hp -=2;
		if (hp>1) hp--; else hp=0;
	}
	display();
	cout << name;
	cout << " attacks " << endl;
	x.display();
}

bool monster::operator>(monster &x)
{
	if (hp>x.hp) return true;
	else return false;
}

void monster::operator+=(int n)
{
	hp += 10;
}

void monster::operator+=(monster &x)
{
	this->hp += x.hp; // What is this->
}

void monster::operator--()
{
	hp -= 1;
}

// *
monster::monster(int h, int p)
{
	hp = h;
	potion = p;
}

void monster::display() 
{
	cout << "Name: " << name << endl;
	cout << "HP: " << hp << endl;
	cout << "Potion: " << potion << endl << endl;
	/*
	std::cout << "Name: " << name << std::endl;
	std::cout << "HP: " << hp << std::endl;
	std::cout << "Potion: " << potion << std::endl << std::endl;
	*/
}



monster::~monster() 
{
	cout << name << " is gone." << endl;
	// std::cout << name << " is gone." << std::endl;
}



#endif
