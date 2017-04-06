Exercise 1
---

Unit test a hidden function.

Download the file located [here]() to your cloud9 workspace.

```
wget
```

Write some code to test the function code you just downloaded.

The function is hidden from you, so you will need to figure out what is wrong with it using only inputs and outputs (called black-box testing).
The function in question has the following signature:

```c++
void replace(string&, string, string);
```

The function accepts a string to modify (first parameter), a term to replace (second parameter), and what to replace each term with (third parameter).

The function may or may not be in working order.
Your job is to tell me whether the function is correct (passes all your test cases), or incorrect (fails at least one of your test cases).
Feel free to ask me to clarify the function spec for you at any time.

You will not be able to compile your unit test code without providing a declaration for the replace function inside your test code.

The command you should use to compile your code is the following:

```c++
g++ reverse.o myTests.cpp
```

`myTests.cpp` in this case is your unit test program.
(you will learn what `g++` is doing here in more detail later)


Exercise 2
---

Count the frequency of positive numbers from `stdin`.

**Input**:
The first number represents the largest value provided.
It is followed by an unknown number of integers.

Report the frequency of each value.

Run this script to generate your own custom data file:

```bash
>data; for i in `seq 100`; do bc <<<"$RANDOM % 20" >> data; done
```

You are not required to use c++ file input techniques.
Instead, use input redirection.

```bash
# compile:
g++ main.cpp
# input redirection:
./a.out < data
```


Exercise 3
---

Write counting sort (see SI Leader for explanation).


Exercise 4
---

Transpose a square matrix.
The matrix can be any size, but is guaranteed to be square (width and height are the same).

Here is an example of a 3x3 matrix:

```
input:

0 1 2
3 4 5
6 7 8

transposed:

0 3 6
1 4 7
2 5 8
```

You represent matrices in c++ with a vector of vectors, `vector<vector<int> >`.

Here is a function you can paste at the beginning of your program (after `using namespace std;`) that will allow you to print vectors using cout:

```c++
template <typename T>
ostream& operator<<(ostream& o, const vector<T>& v) {
    cout << '{';
    if (v.size() > 0) {
        for (unsigned i = 0; i < v.size() - 1; ++i) {
            o << v.at(i) << ", ";
        }
        o << v.at(v.size() - 1);
    }
    o << '}';
    return o;
}
```

**Hint**:
You do not need to transpose this matrix in-place.

