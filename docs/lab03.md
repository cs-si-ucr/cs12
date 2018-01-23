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

 * set name and corresponding getter
 * set health and corresponding getter
 * add weapon to arsenal
 * remove weapon from arsenal
 * display arsenal

And of course don't forget the default constructor and a constructor that accepts name and age.

Exercise 2
---
Given the following code:
```c++
int main(){
    vector<Avenger> avengers;
    Avenger Cap("Steve Rogers", 100);
    Avenger iMan("Anthony/Tony Stark", 52);
    Avenger bWidow("Nat", 33);
    Avenger Hulk("Bruce Banner", 50 );
    Avenger Thor("Thor Odinson", 34);
    Avenger Hawkeye("Clint Barton", 47);
    Avenger Vision("J.A.R.V.I.S",2 );
    Avenger sWitch("Wanda Maximoff", 28 );
    Avenger bPanther("T'Challa", 42 );
    Avenger antMan("Scott Lang", 48 );
    Avenger spiderMan("Peter Parker", 21); //The actor is one month older exactly than Andre!
    Avenger starLord("Peter Quill", 38 );
    Avenger omarvelous("Omar ", 20); 
    Avenger andreKhastro("Andre ", 21);   
    
    // push back the values to vector avengers.

    sort(avengers); //sorts in place
    print(avengers);
    
    return 0;
}
```
Expand on Exercise 1 by adding a sort function that sorts the above vector **in place**.
If you do not know what is meant by "in place", then ask :).
Lastly, print out the vector with each Avenger being printed out as `name, age`.

