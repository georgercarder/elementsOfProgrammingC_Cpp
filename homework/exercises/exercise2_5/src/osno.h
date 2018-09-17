#include "conn_pno.h"
#include "distance.h"
  
template<typename F, typename DomainF, typename DistanceTypeF>
  requires(Transformation(F))
std::tuple<DistanceTypeF, DistanceTypeF, DomainF>
orbit_structure_nonterminating_orbit(const DomainF& x, F f)
{

  typedef DistanceTypeF N;

  DomainF y = connection_point_nonterminating_orbit<F, DomainF>(x,f);
  
  return std::tuple<N, N, DomainF>(distance<F>(x, y, f),
                                  distance<F>(f(y), y, f),
                                  y);

}
