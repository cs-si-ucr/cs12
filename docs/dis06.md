Pointers
---
Where most variables store values, a pointer is a variable that stores a memory address.
A pointer is denoted by appending a `*` character before the variable name.
Either of the following syntaxes are accepted:

`int* n;` or `int *n;`

To get the memory address of an already declared varaible (take `int n = 0;` for example),
we use the address of operator `&`.

```c++
int n = 0;
int *ptr = &n;
```

Try printing out variable ptr to see the value of the memory address.
(The address of operator should look familiar, think reference paramaters..)

The memory address of a pointer can be 'dereferenced' by using the dereference operator `*`.
Dereferncing a pointer returns the value at that memory location. For example:


```c++
int a = 5;
int *ptr = &a;

cout << "a's value: " << a << endl;
cout << "a's address: " << &a < endl;
cout << "the adress ptr points to: " << ptr << endl;
cout << "value that ptr points to: " << *ptr << endl;
cout << "adress of ptr: " << &ptr << endl;
```
should print
```bash
5
0x00c8b
0x00c8b
5
0x00d3c
```
Note that the memory addresses will likely differ


Dereferncing a pointer can also be used to set the value at that location:

```c++
int n = 5;
int* ptr = &n;
*ptr = n + 1;
cout << *ptr
```
will print:
```bash
6
```

Dangling Pointers
---
Pointers if set to incorrect values can cause `segmentations faults` or shorter, seg faults. 
If a seg fault is thrown, that means the code was trying to access a memory location it does not have access to.

Just like an integer, if you write `int* ptr;` the value of the ptr will be garbage.
To fix this problem, we set the ptr = 0;


Code Tracing
---

goo.gl/62Tb7i
