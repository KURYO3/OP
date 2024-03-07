#include <iostream>
using namespace std;

class stack {
    char *stck;
    int tos;
    int size;

public:
    stack(int sz) {
        stck = new char[sz]; 
        size = sz;
        tos = 0;
    }

    void push(char ch); 
    char pop(); 

   ~stack() { 
       delete [] stck;
   }
};

void stack::push(char ch) {
    if(tos==size) {
        cout << "Stack is full\n";
        return;
    }
    stck[tos] = ch;
    tos++;
}

char stack::pop() {
    if(tos==0) {
        cout << "Stack is empty\n";
        return 0; 
    }
    tos--;
    return stck[tos];
}

int main() {
    int size = 10;
    stack s1(size), s2(size); 

    s1.push('a');
    s2.push('x');
    s1.push('b');
    s2.push('y');
    s1.push('c');
    s2.push('z');

    for(int i = 0; i < 3; i++){
        cout << "Pop s1: " << s1.pop() << "\n";
    }
  
    for(int i = 0; i < 3; i++){
        cout << "Pop s2: " << s2.pop() << "\n";
    } 
return 0;
}
