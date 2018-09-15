The utility of a software component, such as a library procedure or data structure, is increased by designing it not in terms of concrete types but in terms of requirements on types expressed as syntactic and semantic properites.

We call a collection of requirements a **concept**.

Types represent species, concepts represent genera.

**Type attribute** is a mapping from a type to a value describing some characteristic of the type. Examples: `sizeof(T)` in C++, If `F` is a functional procedure type, `Arity(F)` returns its number of inputs.

A **type function** is a mapping from a type to an affiliated type. Example: given "pointer to T", the type T.

In some cases it is useful to define an **indexed type** function with an additional constant integer parameter. Example: a type function returning the type of the ith membe rof a structure type.

A **type constructor** is a mechanism for creating a new type from one or more existing types. Example: `pointer(T)`.

If **T** is an n-nary type constructor, we denote its application to types T_0,...,T_n-1 as **T**_(T_0,...,T_n-1). Example: `pair` returns pair_(T_0,T_1).

To ensure regularity, basis extends memberwise.

We say a concept is **modeled by** specific types or that the types **model** the concept, if the requirements are satisfied for these types.

To assert concept **C** is modeled by types T_0,...,T_n-1, we write **C**(T_0,...,T_n-1).

Concept **C'** **refines** concept **C** if whenever **C'**(T_0,...,T_n-1) then **C**(T_0,...,T_n-1).

In this case we say **C** weakens **C'**.

A **type concept** is a concept defined on one type. Example: C++ defines the type concept of "integral type" which is refined by "unsigned integral type" and by "signed integral type", while STL defines the type concept "sequence".

We use the primitive type concepts **Regular** and **FunctionalProcedure**, corresponding to the informal definitions we gave earlier.

Formally, we define concepts

  **C**(T_0,...,T_n-1) :=

    E_0

  ^ E_1

  ^ ...

  ^ E_k-1

Where := is read as "is equal by definition", the T_i are formal type parameters, and E_i are concept clauses which take one of three forms.

  1. Application of a previously defined concept, indicating a subset of the type parameters modeling it.

  2. Signature of a type attribute, type funciton, or procedure that must exist for any types modeling the concept. A procedure signature takes the form f:T->T' where T,T' are types. A type function signature takes the form F:C->C' where C,C' are concepts.

  3. Axiom expressed in terms of these type attributes, type functions, and procedures. 

  For 2. sometimes the definition, x|->F(x) follows for some expression F.

An **abstract procedure** is parameterized by types and constant values, with requirements on those parameters.

Example of an abstract procedure:

```
template<typename Op>
  requires(BinaryOperation(Op))
Domain(Op) square(const Domain(Op)& x, Op op)
{
  return op(x, x);
}
```

**Preconditions** describe properties of particular objects.

Example: A procedure might require a parameter to be a prime number. The requirement for an integer type is specified by a concept, while primality is specified by a precondition.

  Example:
    **property**(N: Integer)
    **prime**:N
      n|-> (|n|!=1)^(forall u,v in N) uv=n => (|u|=1 v |v|=1)

**Project1.1** Extend the notions of equality, assigment, and copy construction to objects of distinct types. Think about the interpretaitons of the two types and axioms that connect cross-type procedures.

