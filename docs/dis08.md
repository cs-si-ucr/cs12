Recursion
---

Previously you have learned how to make functions. 
Functions can be called in other functions. 
But have you ever wondered, can functions call themselves??????? :O omg!! woo no way!!

Functions that call themselves are called `recursive functions`. 
An example of one can be seen below:

```c++
void printRecursive(){
    cout << "I will print forver!!! Muahaha" << endl;
    printRecursive();
    return;
}
```

Tracing through the code above, the `printRecursive()` function is called on the third line.
When this function is called, a copy of the current 'state' of the program is placed on the stack.

The program then begins execution at the beginning of the `printRecursive()` function like any other function call.

Base Case
---
In the example above, the printRecursive function will keep calling itself until the program runs out of memory
(called a stack overflow in this case since we are adding to the stack each recursive call).

