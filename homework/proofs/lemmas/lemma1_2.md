lemma 1.2 If a value type is not ambiguous, representational equality implies 
equality.

Proof.

Suppose a value type is not ambiguous
Let u,v be values of such a value type Type
suppose u,v are representationally equal

we show that u,v are equal by showing they represent the same entity

u,v representationally equal implies
  datum(u) = datum(v) where "=" in this line means identical

as values u:={datum(u), interpretation(u)} 
  where datum(u) ~ interpretationt(u) is a correspondence
  and interpretation(u) = E an entity
  being that Type is unambiguous, the interpretation(u) = E is unique
  the same forms follow for v

interpretation(v) ~ datum(v) = datum(u) ~ interpretation(u) = E

#
