
#include <iostream>
using namespace std;
int main()
{
    int a[5] = {1, 3, 5, 7, 9};
    cout << "Completely Initialized Int Array A : " << endl;
    for (int x : a) // For each loop very easy and important for Array data structure. 
        cout << x << endl;
    cout << endl;

    int b[6] = {1, 3, 5}; // Keeping the array incomplete 
    cout << "Partial Initialized Int Array B : " << endl;
    for (int y : b) // Shows that for each loop will work according to size of array and not acc. to number of elements
        cout << y << endl;   // 1 3 5 0 0 0
    cout << endl;

    float c[6] = {1.2, 2.4, 3.6, 48.54, 99.48, 54.88};
    cout << "Completely Initialized Float Array C : ";
    for (float z : c)  //  mark the type in for each loop , prints all elements
        cout << z << endl;
    cout << endl;

    float d[6] = {12.6, 82.4, 43.6, 4.54, 77.48, 84.88}; // No need to know the type of array.
    cout << "Completely Initialized Float Array D with auto : " << endl;
    for (auto z : d)
        cout << z << endl;
    cout << endl;

    char e[5] = {'A', 66, 'C', 68, 'E'}; // No need to know the type of array.
    cout << "Completely Initialized Char Array E with auto : " << endl;
    for (auto z : e)
        cout << z << endl; // output is A,B,C,D,E
    cout << endl;
    return 0;
}
