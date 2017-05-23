We are going to make a `Train` today.


First, a Car
---

Make a `Car` object.

Each `Car` object should *point* to the `Car` before it and the `Car` after it.

Each `Car` can hold just over 2000 lbs of freight, and no more than 20 boxes.
The class below represents a freight box.

```c++
class Box {
  private:
    string label;
    double weight;
  public:
    Box(double weight = 0.0, string name = "") :
      label(name),
      weight(weight)
    {
    }
    string getLabel() const {
      return label;
    }
    double getWeight() const {
      return weight;
    }
    void add(double lbs) {
      weight += lbs;
    }
    void remove(double lbs) {
      weight -= lbs;
    }
    void rename(string name) {
      label = name;
    }
};
```


Now, the Train
---

Make a `Train` class that will keep track of the `Car`s.

Discuss in your group what methods the `Train` should have, then implement them.


