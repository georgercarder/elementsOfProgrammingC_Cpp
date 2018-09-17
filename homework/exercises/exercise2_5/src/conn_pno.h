#include "cp.h" 

template<typename F, typename DomainF>//<typename F>
  requires(Transformation(F))
DomainF connection_point_nonterminating_orbit(const DomainF& x, F f)
{
  
  return 0;
  /*return convergent_point(
          x,
          f(collision_point_nonterminating_orbit(x,f)),
          f);*/
}
