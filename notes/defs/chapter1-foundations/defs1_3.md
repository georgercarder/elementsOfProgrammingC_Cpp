**memory** is a set of words, each with an **address** and a **content**.

**addresses** have values with a fixed size, called **address length**.

**content** of an address is obtained by a **load** operation.

The association of a content with an address is changed by a **store** operation.

an **object** ...
  
  ... is a representation of a concrete entity as a value in memory.

  ... has **state** that is a value of some value type. The state of an object is changeable. It corresponds to a snapshot of that entity.

  ... owns a set of **resources** such as memory words or records in a file to hold its state. The resources are not necessarily contiguous, e.g. the memory could be "scattered".. discontiguous.

  It is the interpretation that gives unity to the object.

Every object has a unique **starting address** from which all resources can be reached.

An **object type** is a pattern for storing and modifying values in memory.

Corresponding to every object type is a **value type** describing states of objects of that type.

Objects can be **serialized** by way of a snapshot and sent over a communications link.

Every object belongs to an object type.

Example: (of object type) Integers represented in 32-bit two's complement little-endian format aligned to a 4-byte address boundary.

Functional programming deals with values.
Imperative programming deals with objects.

An object is ...

  ... **well-formed** iff its state is well-formed.

  ... **properly partial** iff its value-type is properly partial.

otherwise it is **total**.

  ... **uniquely represented** iff its value type is uniquely represented.

An **identity token** is a unique value expressing the identity of an object and is computed from the vlaue of the object and the address of its resources. Examples: the address of an object, an index into an array where the object is stored, and an employee number in a personel record.

Testing equality of identity tokens corresponds to testing identity.

During lifetime of an application, a particular object could use different identity tokens as it moves either within a data structor or from one data structure to another.

Two objects are **equal** iff their states are equal.

If two objects are equal we say that one is a **copy** of the other.

Note: making a change to an object does not affect any copy of it.

"This book uses a programming language that has no way to describe values and value types as separate from objects and object types. So from this point on, when we refer to types without qualificaiton, we mean object types."
