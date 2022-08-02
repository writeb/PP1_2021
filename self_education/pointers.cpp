/*
Pointer variable is mostly the same as other variables, which can store a piece of data. 
A pointer stores a memory address.
Ex.:
    int power = 9000;
    // Create pointer
    int* ptr = &power;      int* makes it a pointer rather than a normal variable.
    // Print ptr            &power is the memory address of the other variable power.
    cout<<ptr<<"\n";

When * is used in a declaration, it is creating a pointer.
When * is not used in a declaration, it is a dereference operator,
    dereference operator is used to obtain the value pointed to by a variable

 We need to initialize a pointer by assigning it a valid address.
But suppose we don’t know where we are pointing to, we can use a null pointer.
nullptr is a new keyword introduced in C++11.
*/
#include <iostream>
using namespace std;

int main(){
    int n = 500;
    int* p = &n;
    cout<<*p<<"\n"; // deference operator
    cout<<p<<"\n";  // prints memory adress

    return 0;
}