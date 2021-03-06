We are going to make a `Train` linked list today.

Cart Node
---

Below is the code for a Cart struct.
Each `Cart` object should *point* to the `Cart` before it and the `Cart` after it.
This makes the Train a doubly linked list.

```c++
struct Cart{
  int weight;
  Cart * prev;
  Cart * next;
  Cart(int weight): weight(weight), prev(0), next(0){};
};
```

Train List
---
The Train class is a linked list composed of Cart objects.
Below is the class definition

```c++
class Train{
    private:
      Cart * head;
      Cart * tail;
    
    public:
      //constructor
      Train(): head(0),tail(0){}
      
      //add a cart to the end
      void addLastCart(int weight);
    
      //add a cart to the beginning
      void addFirstCart(int weight);
    
      //view the entire train starting from the head
      void viewTrainForwards();
    
      //view the train starting from the back
      void viewTrainBackwards();
    
      //count number of carts with given weight
      int cartsWithWeight(int weight);
    
      void printHead();
      
      void printTail();
   

//01000001 01101110 01100100 01110010 01100101 00100000 01101001 01110011 00100000 01110100 01101000 01100101 00100000 01110010 01101111 01101100 01101100 01101001 00100000 01100010 01100001 01100011 01101011 01110000 01100001 01100011 01101011 00100000 01101011 01101001 01101110 01100100 00100000 01101111 01100110 00100000 01100111 01110101 01111001

};

Implement the functions of the class as listed above, ask if you need help :)
```
