**procedure** is a sequence of instructions that modifies the state of some objects. It may also construct or destroy objects.

Objects with which procedures interact can be divided into 4 kinds corresponding to intentions of programmer:

  1. **input/output** consists of objects passed to/from a procedure directly or indirectly through its arguments or returned result.

  2. **local state** consists of objects created, destroyed, and usually modified during a single invocation of the procedure.

  3. **global state** consists of objects accessible to this and other procedures across multiple invocations.

  4. **own state** consists of objects accessible only to this procedure (and its affiliated procedures) but shared across multiple invocations.

An object is passed ...

  ... **directly** if it is passed as an argument or returned as the result.

  ... **indirectly** if it is passed via a pointer or pointer-like object.

An object is an ...

  ... **input** to a procedure if it is read, but not modified, by the procedure.

  ... **output** to a procedure if it is written, created, or destroyed, by the procedure, but its initial state is not read by the procedure.

  ... **input/output** of a procedure if it is modified as well as read by the procedure.

A **computational basis** for a type is a finite set of procedures that enable the construction of any other procedure on the type.

A **basis** is ...

  ... **efficient** iff any procedure implemented using it is as efficient as an equivalent procedure written in terms of an alternative basis.

  ... **expressive** iff it allows compact and convenient definitions of procedures on the type.


