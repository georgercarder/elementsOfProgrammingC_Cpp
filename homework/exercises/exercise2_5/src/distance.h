#include "pseudorand.h"

// need to redefine distance as n for f^n(x) = y
template<typename F>
int distance(int x, int y, F f) {

  //int out = pseudorand(x);

  //cout << out;
  
  int dist = 0;
  int _x = x;
  int _y = y;

  while ( _x != _y) {
    dist ++;
    _x = pseudorand(x);
  }

  return dist;
}
