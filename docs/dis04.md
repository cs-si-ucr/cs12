Topics this week
---

* Operator Overloading (global scope, and in classes)
* Friending Functions
* Separate Files, `include`, and Modular Compilation
* `define`

Operator Overloading
---

* Why overload operators?
* How do we overload operators in classes? (syntax)
* How do we overload operators globally? (syntax)
* What is the difference between overloading globally and overloading from within a class?

Given a `Cart` class, and a `Fruit` class,
declare a function that allows me to add a fruit to my class.

Write a function that allows me to add elements to my vector in the following way:

```c++
vector<int> v;
// v.size() == 0
v + 24;
// v.size() == 1
// v.at(0) == 24
```


Friending Functions
---

* What does friending do?
* Friending syntax
* Why do we friend functions?
* Is it always necessary?
* With encapsulation in mind, is friending a good idea?


Separate Files, `include`, and Modular Compilation
---

* Is it a syntactical requirement to separate code into multiple files?
* Why do we separate code into multiple files?
* What is Modular Compilation?
* How does `include` play a role in Modular Compilation?
* Modular Compilation rules?

```c++
// main.cpp

#include "Class.h"

/* rest of file */
```

```c++
// Class.cpp

#include "Class.h"

/* Class definitions here */
```

```c++
// Class.h
#ifndef __CLASS_H__
#define __CLASS_H__

/* Class declaration here */

#endif
```

```bash
# compile Class:
g++ -c Class.cpp
# compile main:
g++ -c main.cpp
# link everything together:
g++ *.o
```
