#include <iostream>
using namespace std;
int main()
{
    int A[5]{2, 4, 6, 8, 10}; //Declare an array of size 5 and to it assign some values.
    cout << "Array A :\t";
    for (auto x : A)
        cout << x << "\t";
    cout << endl;

    int *p = A; // Take a pointers and make it point to array above.
    int *q = &A[4];
    cout << "Places p and q are far from each other are : "<< q - p << endl;// output is 4
    
    // If we do p-q then we would get -4 which would mean that second pointer is far away and we subtracted closer pointer minus pointer far away.
    

    // Displaying all the elements of the array
    cout
        << "Address of p before the loop starts " << p << endl;
    for (int i = 0; i < 5; i++)
    {
        
         cout << i[A] << endl;
         cout << *(A + i) << endl; // * gives the data
         cout << (A + i) << endl; //  without * we get the addresses in memory using array name.
         cout << (p + i) << endl; //  without * we get the addresses in memory using pointer to array name.
         cout << *(p + i) << endl; // * gives the data but we use dereference and using pointer name directly.

        // Instead of using array name in place of array name  we can use pointer name indexing too.
         cout << p[i] << endl; // As A and p both have the same memory address and they fetch memory_address[index]
        cout << *p << endl; // Using loop and increment the pointer position
        p++; 
    }

    return 0;
}
