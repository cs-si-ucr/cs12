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
Given the instance `obj` of the class `der`, we can say:
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
class Base:
  public: // any one can access these members
    String one;

  private: // only instances of the Base class can access these members
    String two;

  protected: // instances of the Base class and any instances of derived classes can access these members
    String three;
```

Protected allows only instances of the class and instances of derived classes to access the member functions/variables.
Using the 'obj` variable mentioned above, `obj` would have access to strings `one` and `three` but not `two`.

Functions
---
In a derived class, if you do not override a base class function, it will call the base class function.
You can however override the base class function.


Abstract Classes
---
Some classes can be marked as 'Abstract' classes.
These classes can not have instances.
An abstract class is defined as abstract when the class has a virtual function:

```c++
virtual void function();
```
The inclusion of this function alone makes a class virtual.

Any classes deriving from an Abstract class must define all virtual functions.

Some virtual functions are also "pure virutal functions". For example:
```c++
virtual void function() = 0;
``` 
