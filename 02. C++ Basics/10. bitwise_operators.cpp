/*
Bitwise operations occur on the bits of data and not on the entire data as single unit.

& (bitwise AND) Takes two numbers as operands and does AND on every bit of two numbers. 
The result of AND is 1 only if both bits are 1.

| (bitwise OR) Takes two numbers as operands and does OR on every bit of two numbers. 
The result of OR is 1 any of the two bits is 1.

^ (bitwise XOR) Takes two numbers as operands and does XOR on every bit of two numbers. 
The result of XOR is 1 if the two bits are different.

<< (left shift) Takes two numbers, left shifts the bits of the first operand, 
the second operand decides the number of places to shift.
If a number x is left shift by i positions then result is x * 2^i.Sign bit is not affected and stays same.

>> (right shift) Takes two numbers, right shifts the bits of the first operand, 
the second operand decides the number of places to shift.
If a number x is right shift by i then x will get divided by 2^i. Sign bit is not affected and stays same.

~ (bitwise NOT) Takes one number and inverts all bits of it

*/

#include <iostream>
using namespace std;
int main(int argc, const char **argv)
{
    int x = 11, y = 5, z;
    
    z = x & y; // bitwise and is 1 ,writing down as bits and then operating
    
    z = x | y; // bitwise or is 15
   
    z = x ^ y; // bitwise exor 14
    
    cout << "Value of y i.e. 0000 0101 before left shift by 1 = " << y << endl;
    z = y << 1;   //left shift by 1
    cout << "Now we have shifted y by 1 to left i.e. previous value should increase by 2^1 i.e. 5 * 2." << endl;

    x = 20;
    cout << "Now value of x =  " << x << endl;

    cout << "On doing right shift >> by 1 we would be dividing x i.e. 20 by 2^1 so expected answer is 20/2 = 10." << endl;
    z = x >> 1; // right shift

    x = 5, y;
    y = ~x;
    cout<<"Not of ~5 = "<<y<<endl;
    return 0;
}
