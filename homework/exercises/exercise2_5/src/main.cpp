#include <stdint.h>
#include <iostream>
#include <cmath>
using namespace std;
#include <tuple>

#include "main.h"

#include "osno.h"

int pseudorand(int p) {
  
  srand(p);

  return rand();
}

int main(void)
{
  /// orbit_structure_nonterminating_orbit
  // find handle size and cycle size of rand
  //connection_point_nonterminating_orbit(); 
  
  
  uint64_t seed = 123;
  cout << seed << endl; 

  typedef decltype(pseudorand) F; 

  orbit_structure_nonterminating_orbit<F, int, int>(seed, pseudorand);
/* seed = pseudorand(seed);
 cout << seed << endl;

 for(int i = 0; i < 1000000; i++) {
   seed = pseudorand(seed);
   cout << seed << endl;
 }*/


  return 0;
}
