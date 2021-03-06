exercise1.1 Extend the notion of regularity to input/output objects of a 
procedure, that is, to objects that are modified as well as read.

notes: 
  A procedure is regular iff replacing its inputs with equal objects results 
in equal output objects.
  An object is an ... 
    ... input to a procedure if it is read, but not modified, by the procedure.
    ... output to a procedure if it is written, created, or destroyed by the 
procedure, but its initial state is not read by the procedure.
    ... input/output of a procedure if it is modified as well as read by the 
procedure.

-----------------------------------

A:

  A procedure is regular with respect to input/outputs iff ( input/outputs 
before the procedure are equal iff the same input/outputs are equal after the 
procedure )
