//#include "cp.h"
#include "conn_pt.h"
#include "coll_pno.h" 

template<typename F, typename DomainF>
  requires(Transformation(F))
DomainF connection_point_nonterminating_orbit(const DomainF& x, F f)
{
  
  return convergent_point<F, DomainF>(
          x,
          f(collision_point_nonterminating_orbit(x,f)),
          f);
}
