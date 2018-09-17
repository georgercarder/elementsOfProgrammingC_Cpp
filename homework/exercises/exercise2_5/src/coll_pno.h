
template<typename F, typename DomainF>
  require(Transformation(F))
DomainF
collision_point_nonterminating_orbit(const DomainF& x, F f)
{
  DomainF slow = x; // slow = f^0(x)
  DomainF fast = f(x);  // fast = f^1(x)
                        // n <- 0 (completed iterations)
  while (fast != slow) {  // slow = f^n(x) ^ fast = f^2n+1(x)
    slow = f(slow);       //  slow = f^n+1(x) ^ fast = f^2n+1(x)
    fast = f(fast);       //  slow = f^n+1(x) ^ fast = f^2n+2(x)
    fast = f(fast);       //  slow = f^n+1(x) ^ fast = f^2n+3(x)
  }                       // n <- n + 1

  return fast;            // slow = f^n(x) ^ fast = f^2n+1(x)
  // Postcondition: return value is collision point
}
