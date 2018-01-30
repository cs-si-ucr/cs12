Modular Compilation
---

Compile each .cpp file separately, and link to gether to generate an executable.

Exercise 1
---
Create a program with the following classes and attribrutes:

1. Food
	* name of food
	* calories
	* protien
	* carbs

2. Meal
	* vector of food
	* name of meal
	* total calories
	* total protien
	* total carbs

Each class should have its own `.cpp` and header files.
Define the default constructor for each class and one other constructor with your choice of parameters.


The meal class needs to overload the `+` operator and will be used like so:

```c++
  Meal lunch;
  Food sandwich;
  Food apple;

  lunch = lunch + sandwhich;
```

Where here the food item `sandwich` was added to the `lunch`'s food vector.

*hint:* it would make things easier to made the meal class a `friend` of the Food class.
This allows instances of the Meal classes to access the private data members of the Food class.
To do this, simply include the following line of code under `public:` in the Food class:
```c++
  friend class Meal;
```
:wq


**Bonus:** Make the operator+ overload return a `void` and work with the following code below:
```c++
  Meal lunch;
  Food sandwich;
  Food apple;

  lunch + sandwhich;
```

Exercise 2
---
Overide the ostream operator `operator<<` for the Meal class. 
Print out an instance of the meal class in the following manner:

```bash
name of meal: ____
calories: _
protein: _
products: ___, ___, ____
```

To do this, it is also recommended you overload the `operator<<` for the Food class as well.
