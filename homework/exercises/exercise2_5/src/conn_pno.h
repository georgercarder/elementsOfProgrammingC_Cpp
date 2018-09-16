#include "cp.h" 

template<typename F, typename DomainF>//<typename F>
  //requires(Transformation(F))
DomF connection_point_nonterminating_orbit(const DomainF& x, F f)
{
  return convergent_point(
          x,
          f(collision_point_nonterminating_orbit(x,f)),
          f);
}
