**Copyright (C) Jiang Chenduan 2025**  
**MIT Licence**

# The Document for the Library M_COMPLEX.hpp

**Upd: 2025-10-25 16:27**

## Includes

It includes my own library `M_BASIC.hpp`.

## Macros

`__M_COMPLEX_HPP__` is the only identifier for this library.  
`__M_COMPLEX_VERSION__` labels the version of the library, and now it's `0.1`.

## Classes

`COMPLEX` is the class of complex numbers like $a + bi$.  
The members are listed below:
- Construction Function `COMPLEX()`: the default construction function giving all the part $0$.
- Private member variable `real`: the real part for a complex number.
- Private member variable `imagine`: the imaginary part for a complex number.