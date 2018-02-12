Pointers
---
Where most variables store values, a pointer is a variable that stores a memory address.
A pointer is denoted by appending a `*` character before the variable name.
Either of the following syntaxes are accepted:

`int * n;` or `int * n;`

To get the memory address of an already declared varaible (take `int n = 0;` for example),
we use the address of operator `&`.

```c++
int n = 0;
int *ptr = &n;
```

Try printing out variable ptr to see the value of the memory address.
