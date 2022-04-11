#include <iostream>
using namespace std;
int main()
{
    int marks;         
    int assigned = 10; 
    int a, b1, c; 
// Different ways of assigning values to variables in C++ introduced in C++ 11
    int val_a = 1;
    int val_b1(1);
    int val_c = (1);
    int val_d{1};
    int val_e = {1};

    // Literal assignment : decimal, octal, hexadecimal number
    a = 10;   // Decimal
    b1 = 010; // Octal
    c = 0x10; // Hexa

    int day = 1;
    long distance = 65836; // Here variable type is long but literal is an int only so to make it long we can do so
    long dist_v2 = 65836L; // Suffix with L makes it long value, as long literals are followed by L
    float price = 25;      // An int to float allowed.
    float price_2 = 034;
    // If we want to write float as 12.98 then by default the value is double. Better to have F at the end for float literals.
    float price_3 = 12.56F;

    
    char section = 'A';
    // And this is same as
    char sec_int = 65; // As per ASCII
    char sec_octal = 0x81;
    char sec_hexa = 0x41;
    char char_decimal = 12.5; // Won't appear as doesn't exists.
    char decimal_A = 65.5;   // Depicts coercion where value is internally converted into a required data-type.
    // Float value is converted into character and this is done implicitly that's why it is called coercion.
    bool b = true; // bool b = 1; also works.
                   // String : Not a primitive data type but a class provided by C++ and we can create variables
                   // called objects.
    

    float exponent = 123e2; // Depicts usage of scientific notations.
    float exp_2 = 123e-2;
    return 0;
}