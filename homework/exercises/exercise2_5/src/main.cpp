#include <stdint.h>
#include <iostream>
#include <cmath>
using namespace std;
#include <tuple>

#include "main.h"

#include "osno.h"

#include "pseudorand.h"

int main(void)
{
  /// orbit_structure_nonterminating_orbit
  // find handle size and cycle size of rand
  //connection_point_nonterminating_orbit(); 
  
  
  uint64_t seed = 37268402;
  int sampleSize = 10000;

  int Tot1;
  int Tot2;

  for(int i = 0; i < sampleSize; i++) {
    
    seed ++;
    
    cout << i << endl; 

    typedef decltype(pseudorand) F; 

    std::tuple<int, int, int> out = orbit_structure_nonterminating_orbit<F, int, int>(seed, pseudorand);
    Tot1 = (get<0>(out) + Tot1);
    cout << "Av1 is " << Tot1 / (i + 1) << endl;
    Tot2 = (get<1>(out) + Tot2);
    cout << "Av2 is " << Tot2 / (i + 1)<< endl;
  }

  cout << "Av1 final is " << Tot1 / sampleSize << endl;
  cout << "Av2 final is " << Tot2 / sampleSize << endl;

  return 0;
}
