#include <iostream>
using namespace std;

#include "monster.h"
#include "thanos.h"

int main(int argc, char* argv[]) {
  Thanos T; // Create constructor of Thanos

  int n;
  cout << "How many monster? ";
  cin >> n; // Create n monster.

  monster *m = new monster[n]; // create n amount of new monster
  
  
  ++T;
  cout << "Thanos has acquire his first stone. \n\n";

  cout << "Thanos and his army invades New York\n\n";
  cout << "Create thanos army\n";
  monster *p = new monster[n];
  int hero_wins = 0;
  int thanos_wins = 0;
  // all the monster attack thanos
  for (int i = 0; i < n; i++)
  {
    m[i].attack(p[i]);

    if (m[i] > p[i])
    {
        hero_wins++;
    } 
    else if (p[i] > m[i])
    {
        thanos_wins++;
    }
  }

  if (thanos_wins > hero_wins) 
  {
    for (int i = 0; i < thanos_wins; i++)
    {
      ++T;
      T.announce();
      m[i].reset_hp();
    }
  }

  else if( thanos_wins == hero_wins) {
    cout << "Its a draw, Thanos only gain one stone\n"; 
    ++T; 
    T.announce();
  }

  else if(hero_wins > thanos_wins)
  {
    cout << "\nAvenger wins, Thanos does not get any stones.\n";
  }
  
  cout << "\nThanos attempts to snap his finger.\n";
  T.snap_finger(m, n);

  delete [] m;

  cout << "\nThanos and his army marches to Bangkok to acquire more stones.\n";
  ++T;
  cout << "Thanos acquires another infinity stone while travelling to Thailand\n";
  cout << "\nNow he has " << T.get_stones() << " stones.\n";
  cout << "\nIn Bangkok he met the guardian of Thailand.\n";

  monster *t = new monster[n];
  hero_wins = 0;
  thanos_wins = 0;

  for (int i = 0; i < n; i++)
  {
    t[i].attack(p[i]);

    if (t[i] > p[i])
    {
        hero_wins++;
    } 
    else if (p[i] > t[i])
    {
        thanos_wins++;
    }
  }

  if (thanos_wins > hero_wins) 
  {
    cout << endl;
    for (int i = 0; i < thanos_wins; i++)
    {
      ++T;

      T.announce();
    }
  }

  else if( thanos_wins == hero_wins) {
    cout << "\n";
    cout << "Its a draw, Thanos only gain one stone\n"; 
    ++T; 
    T.announce();
  }

  else if(hero_wins > thanos_wins)
  {
    cout << "\nAvenger wins, Thanos does not get any stones.\n";
  }
  
  cout << "Thanos attempts to snap his finger.\n";
  T.snap_finger(t, n);


  cout << "Thanos still couldn't accumulate enough stones to snap his fingers.\n";
  cout << "The Avengers caught up to his plan and Thanos have to flee.\n";
  cout << "The Earth is safe from Thanos, For now...\n\n";
  return 0;


 //2 other monster
 /*
  int i;
  for(finish the for loop){
        monster *p=new monster(argv[i],atoi(argv[i+1]),atoi(argv[i+2]);  
         //fight each other 

      delete p;
      You.heal();
  }

*/

}
  
  
