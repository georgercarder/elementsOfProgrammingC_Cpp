#include <stdint.h>
#include <iostream>
using namespace std;

int pseudorand(int p) {
  
  srand(p);

  return rand();
}

int main(void)
{
  /// orbit_structure_nonterminating_orbit
  // find handle size and cycle size of rand
  //connection_point_nonterminating_orbit(); 

  cout << "hello" << endl  
       << "world" << endl;
 
 //orbit_structure_nonterminating_orbit
  
  
 uint64_t seed = 1234;
 cout << seed << endl; 
  //orbit_structure_nonterminating_orbit<>(seed, rand)

 seed = pseudorand(seed);
 cout << seed << endl;

 for(int i = 0; i < 10; i++) {
   seed = pseudorand(seed);
   cout << seed << endl;
 }


  return 0;
}
