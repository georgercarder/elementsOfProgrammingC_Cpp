#include "cpno.h"
#include "cp.h"
  
template<typename F, typename DomainF, typename DistanceTypeF>
  requires(Transformation(F))
triple<DistanceTypeF, DistanceTypeF, DomainF>
orbit_structure_nonterminating_orbit(const DomainF& x, F f)
{
  typedef DistanceTypeF N;
  DomainF y = connection_point_nonterminating_orbit(x,f);
  return triple<N, N, DomainF>(distance(x, y, f),
                                  distance(f(y), y, f),
                                  y);
}
