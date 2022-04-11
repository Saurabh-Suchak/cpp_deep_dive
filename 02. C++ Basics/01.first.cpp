#include <iostream> // Including library in the program
using namespace std; // Allows programmer to use anything inside std namespace without using std

// To get the entire line input and print it

int main()
{
    string str;
    cout<<"Enter your name here : "; 
    getline(cin,str); // Function to get the entire line taking input stream and string variable.
    cout<<"Hello "<<str<<endl;
    return 0;
}