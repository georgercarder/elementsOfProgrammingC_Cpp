**datum** is a finite sequence of 0's and 1's

**(qudatum)** is a finite sequence of quaternionic coordinates

*value type* is a correspondence between a species (abstract or concrete)

*representation* is a datum corresponding to a particular entity

*interpretation* is the entity to which the representation corresponds

*value* is a datum together with its interpretation. Examples: integers represented by  32-bit two's complement big-endian format.

A datum is *well-formed* with respect to value type iff that datum represents an abstract entity. Example: every sequence of 32 bits when interpreted as two's complement integer is well-formed. Nonexample: IEEE754 floating-point NaN is not well-formed when interpreted as a real number.

A value type is ...

  ... *properly partial* if its values represent a proper subset of the abstract entities in the corresponding species. Example: int. Nonexample: bool.

  ... *total* if its values are not a proper subset of the abstract entities in the corresponding species
  
  ... *uniquely represented* iff at most one value corresponds to each abstract entity. Example: type representing truth as a byte so that 0~false, x~true iff x!=0rep. Nonexample: a type representing an integer as a signed bit and an unsiged magnitude gives non-unique representation of 0.

  ... *ambiguous* iff a value of the type has more than one interpretation

  ... *unabiguous* iff a value of the type has a single interpretation


