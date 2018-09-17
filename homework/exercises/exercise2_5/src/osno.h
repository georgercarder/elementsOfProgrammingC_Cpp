#include "conn_pno.h"
#include "cp.h"
  
template<typename F, typename DomainF, typename DistanceTypeF>
  requires(Transformation(F))
std::tuple<DistanceTypeF, DistanceTypeF, DomainF>
orbit_structure_nonterminating_orbit(const DomainF& x, F f)
{

  cout << "hello osno";
  typedef DistanceTypeF N;

  DomainF y = connection_point_nonterminating_orbit<F, DomainF>(x,f);
  return std::tuple<N, N, DomainF>(distance(x, y, f),
                                  distance(f(y), y, f),
                                  y);

}
