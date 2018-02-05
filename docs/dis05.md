Arrays
---
Similar to `vector` an array is a list of objects of a certain type.
Arrays however are more primitive and are a basic type in c++.
Nothing has to be included to use them, (no `#include` necessary)

An array can be declared like so:
```c++
//datatype name[number of elements]
int arr[10]; // an array called 'arr' that holds 10 integers
char c_arr[20]; // an array called 'c_arr' that holds 20 char's
```

However, arrays do not have convenient member functions like vectors do.
Arrays do not have `.at()`, `.push_back()`, `.size()` etc.

Arrays have a set size at creation specified in the square brackets as seen above.
A size must be specified and specifying no size will result in a compile time error.
The size of the array also cannot change.

Instead of using `.at()` arrays indicies can be accessed and set using the square brackets `[]`.
