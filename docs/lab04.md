Modular Compilation
---

Using the `Fruit` class from last week, separate each part into one of `Fruit.h`, `Fruit.cpp`, and `main.cpp`.
Compile each .cpp file separately, and link to gether to generate an executable.

Fix any mistakes in the `Fruit` class as necessary


Basket Class
---

Create a `Basket` class.
A `Basket` object should be able to hold any number of `Fruit` objects.

The interface is as follows:

* An `add` function that accepts a `Fruit` object to add to the `Basket`
Fruits of the same name should not be allowed to be added twice.
Because of this, the function should return `true` or `false` to indicate whether or not the `Fruit` was added.

* A `remove` function that accepts the name (a `string`) of the `Fruit` to remove.
The function should return `true` or `false` to indicate whether or not a `Fruit` with that name was added.

* A `print` function.

* A `clear` function that gets rid of all the `Fruit` in the `Basket`.

* A `total` function that returns the cost of everything in the `Basket`.
