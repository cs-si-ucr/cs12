Excercise 1
---
Implement the following functions listed below, this lab serves as an mini-intro to linked lists.

```c++
#include <iostream>

using namespace std;

struct Block{
  public:
    int val;
    Block * next;
    Block(int val): val(val), next(0) {};
};

void addBlock(Block * start, int val){
    
}

void printBLockChain(Block * b){
    
}

//remove the first
void removeFirstBlock(Block *&b){
    
}
//remove last
void removeLastBlock(Block * b){
    
}

int main(){
    Block * genesis = new Block(3);
    addBlock(genesis,5);
    addBlock(genesis,8);
    addBlock(genesis,10);
    addBlock(genesis,3);
    printBLockChain(genesis);
    
    // do more testing here
    
    return 0;
}


//01001111 01101101 01100001 01110010 00100000 01101000 01100001 01110011 00100000 00110011 00110000 00110000 00100000 01100011 01101111 01101110 01100110 01101001 01110010 01101101 01100101 01100100
//01110111 01100001 01101001 01100110 01110101 00001010 
```
