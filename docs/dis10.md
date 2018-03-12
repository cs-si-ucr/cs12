Big O
---

Determine the Big O (worst case) runtime of the following sections of code.

Be sure to define what your basic unit of work is for each section.

```c++
// snippet 1
int n = 20;
for (unsigned i = 0; i < n; ++i) {
    cout << n - i << endl;
}
```

```c++
// snippet 2
int n = 100;
vector<int> v(n);
```

```c++
// snippet 3
int n = 30;
for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++i) {
        cout << '.';
    }
}
```

```c++
// snippet 4
int n = 30;
int m = 100;
for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++i) {
        cout << '.';
    }
}
```

```c++
// snippet 5
int n = 4096;
for (int i = 1; i < n; i *= 2) {
    cout << '.' << endl;
}
```


Review
---

Open zybooks.
I'll ask questions about each topic.
If there is anything we need to cover in particular, we will cover it.

