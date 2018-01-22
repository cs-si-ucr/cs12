Stucts and Classes
---
 
 * [Read me first!](https://cs-si-ucr.github.io/cs12-reborn/docs/discussion3/)

Example 1
---

Below is an example of classes and structs in C++. 
If you don't understand all of this code that is **perfectly ok**.
Do you best to trace the code and we will go through it together.

```c++
#include <iostream>
#include <vector>

using namespace std;

struct Student{
    int age;
    string name;
    string gender;
};

class Avenger{
  public:
    string name;
    int age;
    string gender;
    /* ussually, a classes data members are declared private
       and it is bad practice to have them publicly available.
       For the sake of example, they will be public here.*/
    Avenger(){
        name = "Stan lee";
        age = 2018;
        gender = "Alien";
    }
    
    Avenger(int age1, string name1, string gender1){
        age = age1;
        name = name1;
        gender = gender1;
    }
};

class phone{
  private:
    string model;
    int megapixels;
    int screensize;
    
  public:
    string getModel(){ return model; }
    int getMegapixels(){ return megapixels; }
    int getScreensize(){ return megapixels; }
    
    void setModel(string model){
        this -> model = model;
    }
    void setMegapixels(int megapixels){
        this -> megapixels = megapixels;   
    }
    void setScreensize(int screensize){
        this -> screensize = screensize;
    }
};

int main(){
    Student iMan = {2, "Tony Stank", "Male"};
    iMan.age = 52; // rdj is 52 irl :o
    cout << iMan.age << ", " << iMan.name << ", " << iMan.gender << endl;
    
    phone lame_phone;
    lame_phone.setModel("IPhone");
    cout << iMan.name << " most likely owns an " << lame_phone.getModel() << " because he's rich AF." << endl;
    cout << endl;
    
    Avenger tony;
    Avenger wakanda(41, "T'Challa", "Male");
    Avenger blackWidow(33, "Nat", "Female");
    Avenger cap(36, "Steve Rogers", "Bucky");
    
    vector<Avenger> avengers;
    avengers.push_back(tony);
    avengers.push_back(wakanda);
    avengers.push_back(blackWidow);
    avengers.push_back(cap);
    
    for(int i = 0; i < avengers.size(); i ++){
        cout << avengers.at(i).name << " is " << avengers.at(i).age << " years old. They are a " << avengers.at(i).gender << endl;
    }
    return 0;   
}
```

There will almost certainly be something you don't understand in the code above, ask questions! We are here to help :)

