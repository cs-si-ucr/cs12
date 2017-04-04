Exercise 1
---

Count the number of characters, words, and lines there are in the entire text of Alice in Wonderland.

You can find a copy of the text [here](https://raw.githubusercontent.com/cs-si-ucr/cs12/master/etc/AliceInWonderland.txt).

You are not required to use c++ file input techniques.
Instead, use input redirection.

```bash
# compile:
g++ main.cpp
# input redirection:
./a.out < AliceInWonderland.txt
```
Rules:

* A line of text ends with the newline character `'\n'`
* A word is separated by spaces and newlines
* A character is any character including spaces and newlines

There is a program in linux that already does this.
It is called `wc` (word count).
Run it to verify your results.

```bash
wc AliceInWonderland.txt
# Sample output:
# [line  word  char filename]
# 100   300   1000  AliceInWonderland.txt
```

Exercise 2
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


