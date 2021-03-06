lemma 1.3 A well-formed object is partially formed

Proof.

Given a well-formed object, we show it is partially formed by showing the 
object has both a destructor and assignment function.

For a well-formed object, it follows from the definitions that its state is 
well-formed.
A state is a value of some value type, so a state being well-formed means its 
datum with respect to value type represents an abstract entity.
A datum is a concrete entity so comes into and out of existence in space and 
time.
Collect the routines in which this datum comes out of existence.
This collection is a sequence of instructions, thus a procedure.
This procedure is a destructor.

Given the state of an object is changeable, the collection of routines by which 
it changes is a procedure. In fact it is an assignment function.

#
