In this book, particular classes of signatures commonly occur.

Two such frequently used classes are:

  **homogeneous predicates** are of the form `T x ... x T -> bool`

  **operations** are of the form `T x ... x T -> T`

Mostly we encounter unary and binary homogeneous predicates and operations.

A **predicate** is a functional procedure returning a truth value:

```
Predicate(P):=
  FunctionalProcedure(P)
  ^ Codomain(P) = bool
```

A **homogeneous** predicate is one htat is also a homogeneous function:

```
HomogeneousPredicate(P):=
  Predicate(P)
  ^ HomogeneousFunction(P)
```

A **unary predicate** taking one parameter:

```
UnaryPredicate(P):=
  Predicate(P)
  ^ UnaryFunction(P)
```

An **operation** is a homogeneous function whose codomain is equal to its domain.

```
Operation(Op):=
  HomogeneousFunction(Op)
  ^ Codomain(Op) = Domain(Op)
```

---------------
```
int abs(int x) 
{
  if (x < 0) return -x; else return x;
}
```

```
template<typename D>
D abs(int x)
{
  if (x < 0) return -x; else return x;
}
```

```
double euclidean_norm(double x, double y)
{
  return sqrt( x * x + y * y );
}
```

```
double euclidean_norm(double x, double y, double z)
{
  return sqrt( x * x + y * y + z * z );
}
```

**lemma2.1** `euclidean_norm(x, y, z) = euclidean_norm(euclidean_norm(x, y), z)`

A procedure is **partial** if its definition space is a subset of the direct product of the types of its inputs.

It is **total** if its definition space is equal to the above direct product.

Following conventions of set theory, A total function is a partial function since a set is a subset of itself.

Partial procedures that are not total are **nontotal**.

  Note: Implementations of some total functions are nontotal on the computer because of the finiteness of the representation. Example: additoin on signed 32-bit integers is nontotal.

A nontotal procedure is accompanied by a precondition specifying its definition space.

Sometimes, a partial procedure is passed as a parameter to an algorithm that needs to determine at runtime the definition space of the procedural parameter. To deal with such cases, we define **definition space predicate** with the same inputs as the procedure.

**Exercise2.1** Implement a definition space predicate for addition on 32-bit integers.

This chapter deals with unary operations, which we call **transformations**.

```
Transformation(F):=
  Operation(F)
  ^ UnaryFunction(F)
  ^ DistanceType: Transformation -> Integer
```

Transformations are self-composable.

When F is a transformation, we define its powers to be:

```
f^n(x) = { 
  x if n = 0;
  f^n-1(f(x)) if n>0;
```

```
spec C+++
+     +
-     -
.     *
/     /
mod   %
0     I(0)
1     I(1)
2     I(2)
```
