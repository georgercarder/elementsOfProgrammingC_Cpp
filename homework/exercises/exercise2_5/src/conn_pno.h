#include "cp.h"
#include "coll_pno.h" 

template<typename F, typename DomainF>//<typename F>
  requires(Transformation(F))
DomainF connection_point_nonterminating_orbit(const DomainF& x, F f)
{
  
  //return 0;
  return convergent_point<F, DomainF>(
          x,
          f(collision_point_nonterminating_orbit(x,f)),
          f);
}
