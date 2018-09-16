A basis is **regular** iff its basis includes equality, assignment, destructor, default constructor, copy constructor, total order, and underlying type. 

  
Said differently: 

  There is a set of procedures whose inclusion in the computational basis of a type lets us place objects in data structures and use algorithms to copy objects from one data structure to another. We call types having such a basis **regular**.

Equality in C/C++ is a procedure that takes two objects of the same type and returns true iff the object states are equal. Proper syntax: `a == b`

**assignment** is a procedure that takes two objects of the same type and makes the first object equal to the second without modifying the second. Proper syntax: `a = b`

A **destructor** is a procedure causing the cessation of an objects' existence. After a destructor has been called on an object, no procedure can be applied to it.

A **constructor** is a procedure transforming memory locations into an object.

An object is in a **partially formed state** if it can be assigned to or destroyed. If an object is partially but not well-formed, all procedures but assignment (only on left side) and destruction is not defined.

A **default constructor** takes no arguments and leaves the object in a partially formed state. 
  Proper syntax: 
    Local object of type T `T a;`
    Anonymous object of type T `T()`

A **copy constructor** takes an additional argument of the same type and constructs a new object equal to it. 
  Proper syntax:
    Local copy of object b `T a = b;`
