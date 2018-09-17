#include <stdint.h>
#include <iostream>
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
 
 //orbit_structure_nonterminating_orbit
  
  
  uint64_t seed = 1234;
  cout << seed << endl; 

  typedef decltype(pseudorand) F; 
  //<typename F, typename DomainF, typename DistanceTypeF>

  orbit_structure_nonterminating_orbit<F, int, int>(seed, pseudorand);

 /*seed = pseudorand(seed);
 cout << seed << endl;

 for(int i = 0; i < 10; i++) {
   seed = pseudorand(seed);
   cout << seed << endl;
 }*/


  return 0;
}
