Derived Clasess
---

Sometimes classes can "derive" other classes...

Given Base class `Base`, below is an example of a derived class:
```c++
class Der : public Base {
  public:
    // public members/functions
  private:
    // private memberes/functions
};

```
A derived class inherits members and functions of the base class it derives from.
For example, lets say the base class `Base` has a function `foo()`. 
Given the instance `obj` of the class `Der`, we can say:
```c++
obj.foo();
```
without defining the `foo()` function in the derived class `Der`.
It simply calls the function from its base class.

Protected key word
---

Private members of the base class are still only accessible to instances of the base class. 
In order to let the derived class have access to certain member variables or functions,
we use the `protected` key word instead of private.

For example:
```c++
class Base{
  public: // any one can access these members
    String one;

  private: // only instances of the Base class can access these members
    String two;

  protected: // instances of the Base class and any instances of derived classes can access these members
    String three;
};
```

Protected allows only instances of the class and instances of derived classes to access the member functions/variables.
Using the `obj` variable mentioned above, `obj` would have access to strings `one` and `three` but not `two`.

Functions
---
In a derived class, if you do not override a base class function, it will call the base class function.
You can however override the base class function be defining the same function in the derived class.
For example, given the class `Base` above has a function `foo()`, the derived `Derv` can override the
function like so:

```c++
class Der{
  public: // or private your choice
    void foo();
};
```

Virtual Functions
---
Things get tricky with inheritance when we use pointers.
Using a `Base` class pointer, both of the following are valid:
```c++
Base * daddy = new Base();
Base * kiddo = new Der();
```
Base pointers can point to instances of derived classes.
However, imagine calling the function `foo()` using the `kiddo` pointer: `kiddo->foo();`.
Which `foo()` is called? The `Base` class `foo()` or the `Der` class's `foo()`?

In this instance, the Base class's `foo()` will be called. However, if the base class
defined `foo()` using the `virutal` keyword, then the program will decide at runtime which `foo()` to call.
For example:
```c++
class Base{
  public:
    virtual void foo();
};

class Der: public Base{
  public:
    void foo();
};
```

The type of the `Base*` will be resolved at runtime and the appropiate function,
either the Der classes' `foo()` or the Base classes's `foo()`, will be called.
If the `Base*` was pointing to an instance of the `Base` class then it would call the `Base` classes `foo()`.
If the `Base*` was pointing to an instance of the `Der` class then it would call the `Der` classes `foo()`.

Abstract Classes
---
Some classes can be marked as 'Abstract' classes.
These classes can not have instances.

An abstract class is defined as abstract when the class has at least one pure virtual function:
```c++
virtual void function() = 0;
``` 
Any classes deriving from an Abstract class must define all virtual functions.

