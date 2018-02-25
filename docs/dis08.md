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

Since we most likely do not want to be causing infinite loops, we need a way to make sure the 
recursive call only  happens in certain cases. We do this by having a base case. Ex:

```c++
int i = 0;
void printRecursive(){
    cout << "I will not print forever. :(" << endl;
    i ++;
    if( i != 10){
	printRecursive()
    }
    return;
}
```

In this case the line 'I will not print forever. :(' prints ten times.
The base case is when `i` is equal to 10.
This program will keep calling the recursive function while the base case is not true.

Code Tracing
---
Do some of the code tracing to familiarize yourself with recursion.

1)
```c++
int main(){
    int n = 0;
    cout << "How many times will I print?" << endl;
    if(n == 1){
        return 0;
    }
    else{
        main();
    }
					    
    return 0;
}
```
2)
```c++
int flower(int n){
    return n > 10 ? -10 : flower(n+1);
    /* The above is called a "Ternary operator"
       Ask your SI leader for what it does if you do not understand. 
       
       The following is equivalent:
       
       if (n > 10){
           return -10;
       }else{
           return flower(n+1);
       }
       */
}

int main(){
    cout << flower(9);
    return 0;
}
```

3)
```c++
int even(int n){
    if(!(n%2)){
        return n;
    }
    return even(n-1);
    
}


int main(){
    even(323525643);
    return 0;
}
```

4)
```c++
int three(int n){
    return 300;
    
}

int two(int n){
    if(n == 0){
        return three(n);
    }
    return 1 + two(n-1);
    
}

int one(int n){
    if(n == 0 || n == 1){
        return two(n*2);
    }
    cout << n << " ";
    return one(n-1) + one(n-2);
    
}

int main(){
    cout << one(4);
    return 0;
}
//00110001 00101101 00111000 00110001 00111000 00101101 00111001 00110010 00110110 00101101 00110010 00110101 00111000 00110100
```

