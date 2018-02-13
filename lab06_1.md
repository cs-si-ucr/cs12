Valgrind
---

We will use `valgrind` to find dynamic memory errors.
Write the following programs, then run them with `valgrind`.
Observe the output of `valgrind`, and become comfortable reading the messages it gives you.

1. Write a program that creates a memory leak.

1. Write a program that accesses a dangling pointer.

1. Write a program that causes a segmentation fault (segfault).

When using `valgrind`, you will need to compile with debugging flags.
This is accomplished by passing the `-g` flag to `g++`.


Get a cstring from the user
---

Allocate `80` characters dynamically, twice.
Ask the user for 2 sentences.

Store the sentences in each dynamic array of characters.

You may use any version of the `istream& istream::get(/* params */)` function you'd like.
(Hint: [look it up](http://www.cplusplus.com/reference/istream/istream/get/))


strlen
---

To explore the fact that cstrings are terminated with `\0`, write the `strlen` function.
The declaration is given below:

```c++
unsigned strlen(const char*);
```


strcpy
---

Write a function that will copy one cstring to another.
The declaration is given below:

```c++
void strcpy(char*, const char*);
```


strncpy
---

Write a function that will copy `n` characters of one cstring to another.
The declaration is given below:

```c++
void strncpy(char*, const char*, int);
```



strcmp
---

Write a function that compares two strings lexicographically.
The function should behave similarly to `operator<(string, string)`.
The declaration is given below:

```c++
// accepts:
//     two strings to compare
// returns:
//     -1: lhs <  rhs
//      0: lhs == rhs
//      1: lhs  > rhs
int strcmp(const char*, const char*);
```

