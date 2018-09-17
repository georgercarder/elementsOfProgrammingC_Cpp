
template<typename F, typename DomainF>
  requires(Transformation(F))
DomainF convergent_point(DomainF x0, DomainF x1, F f)
{
  // Precondition: exists n st DistanceType(F) n geq 0 ^ f^n(x0) = f^n(x1)
  
  while ( x0 != x1 ) {
    
    x0 = f(x0);
    x1 = f(x1);
  
  }

  return x0;
}
