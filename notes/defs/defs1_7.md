The utility of a software component, such as a library procedure or data structure, is increased by designing it not in terms of concrete types but in terms of requirements on types expressed as syntactic and semantic properites.

We call a collection of requirements a *concept*.

Types represent species, concepts represent genera.

*Type attribute* is a mapping from a type to a value describing some characteristic of the type. Examples: `sizeof(T)` in C++, If `F` is a functional procedure type, `Arity(F)` returns its number of inputs.

A *type function* is a mapping from a type to an affiliated type. Example: given "pointer to T", the type T.

In some cases it is useful to define an *indexed type* function with an additional constant integer parameter. Example: a type function returning the type of the ith membe rof a structure type.

A *type constructor* is a mechanism for creating a new type from one or more existing types. Example: `pointer(T)`.

If *T* is an n-nary type constructor, we denote its application to types T_0,...,T_n-1 as *T*_(T_0,...,T_n-1). Example: `pair` returns pair_(T_0,T_1).

To ensure regularity, basis extends memberwise.

We say a concept is *modeled by* specific types or that the types *model* the concept, if the requirements are satisfied for these types.

To assert concept *C* is modeled by types T_0,...,T_n-1, we write *C*(T_0,...,T_n-1).

Concept *C'* *refines* concept *C* if whenever *C'*(T_0,...,T_n-1) then *C*(T_0,...,T_n-1).

In this case we say *C* weakens *C'*.

A *type concept* is a concept defined on one type. Example: C++ defines the type concept of "integral type" which is refined by "unsigned integral type" and by "signed integral type", while STL defines the type concept "sequence".

We use the primitive type concepts *Regular* and *FunctionalProcedure*, corresponding to the informal definitions we gave earlier.


