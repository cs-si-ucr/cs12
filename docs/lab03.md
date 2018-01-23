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
    string name;   
};

//weapon list
Weapon Hulk_Buster = {9000,50, "Hulk Buster"};
Weapon Mjolnir     = {5000,200,"Mjolnir"};
Weapon Pistol      = {10,  100,"Pistol"};
Weapon Lightsaber  = {50,  5,  "Lightsaber"};
Weapon Arrow       = {20,  10, "Arrow"};
Weapon Taser 	   = {60,  10, "Taser"};
Weapon Shield      = {100, INT_MAX,"Shield"};
Weapon Sling_Ring  = {1000,5,  "Sling Ring"};
Weapon Ants        = {100, 10, "Ants"};

//stones
Weapon Mind_Stone    = {10000,INT_MAX,"Mind Stone"};
Weapon Time_Stone    = {10000,INT_MAX,"Time Stone"};
Weapon Space_Stone   = {10000,INT_MAX,"Space Stone"};
Weapon Reality_Stone = {10000,INT_MAX,"Reality Stone"};
Weapon Power_Stone   = {10000,INT_MAX,"Power Stone"};
Weapon Soul_Stone    = {10000,INT_MAX,"Soul Stone"};
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


