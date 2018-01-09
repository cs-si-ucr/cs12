Introduction
---

Selection sort is a naive sorting algorithm.

Given an unsorted vector of integers, find the position of the smallest element.<br>
Swap that element to index 0 of the vector.<br>
Then, find the smallest element in the index range `[1, v.size()-1]`.<br>
Swap that element to index 1 of the vector.<br>
Then, find the smallest element in the index range `[2, v.size()-1]`.<br>
Swap that element to index 2 of the vector.<br>
Repeat finding the smallest element and swapping into place until there are no more elements to sort.

This process guarantees a sorted vector at the end.
In the case described above, the vector will be in ascending order.


Starter Code
---

Take a look at the starter code below.

We will complete either `fillVec` or `printVec` together.

```c++
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

// This is a program that will run a SELECTION SORT on a vector

using namespace std;

int min(const vector<int>& v, int);
void selectionSort(vector<int>& v);
void fillVec(vector<int>& v);
void printVec(const vector<int>& v);

int main() {
    srand(time(0));

    vector<int> test(10);

    fillVec(test);
    printVec(test);
    selectionSort(test);
    printVec(test);

    return 0;
}

/* This function gets the position of the smallest element in the vector
 *
 * Accepts:
 *     const vector<int>& v - the vector to search
 *     int start            - the position to start looking for the smallest value
 * Returns:
 *     int - the position of the smallest element (-1 if there is no value)
 */
int min(const vector<int>& v, int start) {
    return -1;
}

/* Performs selection sort on the vector
 *
 * Accepts:
 *     vector<int>& v - the vector to sort
 * Returns:
 *     void
 */
void selectionSort(vector<int>& v) {
}

/* Fills a vector with random values in [0, v.size()]
 * Accepts:
 *     vector<int>& v - the vector to fill with random data
 * Returns:
 *     void
 */
void fillVec(vector<int>& v) {
}

/* Prints a vector to stdout
 *
 * Accepts:
 *     vector<int>& v - the vector to print
 * Returns:
 *     void
 */
void printVec(const vector<int>& v) {
}
```


