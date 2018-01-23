Introduction
---

We will be continuing work on the `Fruit` class from yesterday's discussion.
Check out the problem description from yesterday in case you missed it (through the menu on the left).

Exercise 1
---
Given the following struct and its instances:

```c++
struct Weapon{
    int damage;
    int durabilty;
};

//weapon list
Weapon Hulk_Buster = {9000,50};
Weapon Mjolnir = {5000,200}
Weapon Pistol = {10,100};
Weapon Lightsaber = {50,5};
Weapon Arrow = {20,10};
Weapon Taser = {60,10};
Weapon Shield = {100,INT_MAX};
Weapon SlingRing = {1000,5};
Weapon Ants = {100,10};

//stones
Weapon Mind_Stone = {10000,INT_MAX};
Weapon Time_Stone = {10000,INT_MAX};
Weapon Space_Stone = {10000,INT_MAX};
Weapon Reality_Stone = {10000,INT_MAX};
Weapon Time_Stone = {10000,INT_MAX};
Weapon Soul_Stone = {10000,INT_MAX};
```
Create a class 'Avenger' which has the following attributes:
* name
* age
* arsenal (a list of all usable weapons)

And can perform the following operations:
* set name
* set health
* add weapon to arsenal
* remove weapon from arsenal
* display arsenal

And of course don't forget the default constructor and a constructor that accepts name and age.


