#include "conn_pno.h"
#include "distance.h"
//#include "cp.h"
  
template<typename F, typename DomainF, typename DistanceTypeF>
  requires(Transformation(F))
std::tuple<DistanceTypeF, DistanceTypeF, DomainF>
orbit_structure_nonterminating_orbit(const DomainF& x, F f)
{

//  cout << "hello osno";
  typedef DistanceTypeF N;

  DomainF y = connection_point_nonterminating_orbit<F, DomainF>(x,f);
  
 // cout << distance<F>(x, y, f) << endl;
 // cout << y << endl;

 // return std::tuple<N, N, DomainF>(1, 2, 3);
  return std::tuple<N, N, DomainF>(distance<F>(x, y, f),//, f),
                                  distance<F>(f(y), y, f),//, f),
                                  y);

}
