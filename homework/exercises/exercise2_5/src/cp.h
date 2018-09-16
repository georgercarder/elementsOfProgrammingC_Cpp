template<typename F, typename P>
  requires(Transformation(F) && UnaryPredicate(P) && DomainF == DomainP)
DomainF collision_point(const DomainF& x, F f, P p)
{
  //Precondition p(x) <-> f(x) is defined
  if(!p(x)) return x;
  DomainF slow = x; // slow = f^0(x)
  DomainF fast = f(x); // fast = f^1(x)
                    // n <- 0 (completed iterations
  while (fast != slow) { // slow = f^n(x) ^ fast = f^2n+1(x)
    slow = f(slow);     // slow = f^n+1(x) ^ fast = f^2n+1(x)
    if (!p(fast)) return fast;
    fast = f(fast);     // slow = f^n+1(x) ^ fast = f^2n+2(x)
    if (!p(fast)) return fast;
    fast = f(fast);     // slow = f^n+1(x) ^ fast = f^2n+3(x)
                        // n <- n + 1
  }
  return fast;
  //Postconditin: return value is terminal point or collision point
}
