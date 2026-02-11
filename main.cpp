#include <iostream>
using namespace std;

#include "monster.h"

int main(int argc, char* argv[]) {

  monster A("Siri", 10, 1); // match the monster construct, 1 string, 2 int
  
  monster x[5] = {{"James"}, {"Michael", 20}, {"Sarah"},{},{}};
  monster c;
  monster *p; // pointer does not create any new obj, only prepare a pointer no constructor is called

  monster c;

  p=&c;
  p->display();

  p=&A;
  p->display();
  

  p= new monster("Sarina", 20); // use new to force create new obj
  // destructor p for sarina was not called
  p->display();
  //need to use delete to remove the obj
  delete p; // after new use delete

  p = new monster[3];
  delete []p; // need to delete or core dumped

  
    /*
 
 monster *p,x;
  p=&x;
  p=new monster;
 delete p;

 p=new monster[3];
 delete []p;

*/

}
