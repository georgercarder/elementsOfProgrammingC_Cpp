#include "square.h"
#include <iostream>
using namespace std;

template<typename D>
D mult(D a, D b) {
  return a * b;
}
  
template<typename Op,typename D>
  requires(BinaryOperation(Op))
 D square(const D& x, Op op)
{
  return op(x, x);
}

int main() 
{
    
  typedef decltype(mult<int>) Op;
    cout << square<Op, int>(3, mult) << endl;
  typedef decltype(mult<float>) Op2;
    cout << square<Op2, float>(3.2, mult) << endl;

  return 0;
}
