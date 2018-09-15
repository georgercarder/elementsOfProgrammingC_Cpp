A procedure is **regular** iff replacing its inputs iwht equal objects results in equal output objects.

**exercise1.1** Extend the notion of reqularity to input/output objects of a procedure, that is, to objects that are modified as well as read.

Examples of useful nonregular behavior:

  1. A procedure returns the address of an object.

  2. A procedure returns a value determined byt the state of the real world.

  3. A procedure returns a value depending on own state, e.g. pseudorandom number generation.

  4. A procedure returns a representation dependent attribute of an object, such as the amount of reserved memory for a data structure.

A **functional procedure** is  aregular procedure defined on regular types, with one or more direct inputs and a single output that is returned as the result of the procedure.

Two techniques for passing inputs:

  - value ... making a local copy

  - constant reference


A functional procedure in C++ can be implemented as a C++ function, function pointer, or function object.

Not a functional procedure:

`void plus_2(int** a, int** b, int** c)
{
  **c = **a + **b;
}`

The above is regular but not functional.

The **definition space** for a funcitonal procedure is that subset of values for its inputs to which it is intended to be applied.

A **homogeneous** functional procedure is one whose input objects are all the same type.

The **domain** of a homogeneous functional procedure is the type of its inputs.

The **codomain** for a functional procedure is the type of its output.

The **result space** for a functional procedure is the set of all values from its codomain returned by the procedure for inputs from its definition space.

**Exercise1.2** Assuming that `int` is a 32-bit two's complement type, determine the exact definition and result space.

`int square(int n) { return n ** n; }`


