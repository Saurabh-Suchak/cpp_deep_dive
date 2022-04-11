#include <iostream>
/*
There area totally 4 kinds of pre/post increment and decrement operators.
1. Pre Increment (++x) Unary operator, much faster than x = x+1 a binary operator.
2. Post Increment (x++)
3. Pre Decrement (--x)
4. Post Decrement (x--)
*/
using namespace std;
int main(int argc, char const *argv[])
{
    int x = 5, storage;
    storage = ++x; 
    // x now equals 6 and storage =6

    storage = x++; 
    // storage = 6 but x incremented to 7
    

    x = 5;

    storage = --x; // Value of x decremented first and then as 4 it is stored in storage var.
    // x=4 storage =4

    storage = x--; // Value which was in previous stage i.e. 4 is stored in storage var and then decremented to 3.
    // storage =4 x=3
    
    return 0;
}
