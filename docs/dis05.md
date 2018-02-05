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
The size of the array cannot change.

Instead of using `.at()` arrays indicies can be accessed and set using the square brackets `[]`.
For example:
```c++
int arr[3];
arr[0] = 1;
arr[1] = 2;
arr[2] = 3;

for(int i = 0; i < 3; i++){
    cout << arr[i] << " ";
}
cout << endl;

```
will result in the following output:
```bash
1 2 3 

```

Code Tracing
---
What is the output of the following code?
```c++

#include <iostream>

using namespace std;

void setChar(char arr[], char c, int pos){
    arr[pos] = c;
    return;
}

int main(){
    char c_arr[6];
    setChar(c_arr, 'c', 0);
    setChar(c_arr, 'a', 1);
    setChar(c_arr, 'r', 2);
    setChar(c_arr, 'e', 3);
    setChar(c_arr, 'f', 4);
    setChar(c_arr, 'u', 5);
    setChar(c_arr, 'l', 6);
		    
    for(int i = 0; i < 7; i ++){
 	   cout << c_arr[i];
    }
							        
    return 0;
}
```
