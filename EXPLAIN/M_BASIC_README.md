**Copyright (C) Jiang Chenduan 2025-2050**  
**Software Licence, Version 1.0**

# The Document for the Library of M_BASICS.hpp

**Upd: 2025-10-25 10:30**

## Includes

It includes C++ standard library `<cmath>`, so please don't include that again.

## Macros

`__M_BASIC_HPP__` is the only identifier for this library.  
`__M_BASIC_VERSION__` labels the version of this library, and now it's `0.1`.

## Functions

### Functions Used to Compare

**Remember to provide the definition of `<` and `>`.**

`template<typename T> bool BIGGER(const T a,const T b)` returns whether the first element is bigger than the other.  
`template<typename T> bool SMALLER(const T a,const T b)` returns whether the first element is smaller than the other.  
`template<typename T> T MAX(const T a,const T b)` returns the bigger element.  
`template<typename T> T MIN(const T a,const T b)` returns the smaller element.

### Functions Used to Do Some Basic Operations

**Remember to provide the definition of `+` and `*`.**  
Some functions need the parameter of `unit` or `zero`.The parameter `unit` represents the identity element. The parameter `zero` represents the null element.

We define $\oplus$ as the extended $+$ operation and define $\otimes$ as the extended $\times$ operation.  
And we can tell an element $i$ in the set $A$ is an identity element only when:
- $\forall a \in A, a \otimes i = i \otimes a = a$

And we can tell an element $i$ in the set $A$ is an null element only when:
- $\forall a \in A, a \otimes i = i \otimes a = i$
- $\forall a \in A, a \oplus i = i \oplus a = a$

`template<typename T> T SUM(const T* param,size_t size,T zero)` returns the sum of an array.  