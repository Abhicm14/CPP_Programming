/*
    Loops
    1. For loop
    2. While loop
    3. Do-while loop

    Syntax:
    For loop:
    for (initialization; condition; increment/decrement)
    {
        // code to be executed
    }

    While loop:
    while (condition)
    {
        // code to be executed
    }

    Do-while loop:
    do
    {
        // code to be executed
    } while (condition);

*/

#include <iostream>

using namespace std;

int main()
{
    // For loop
    cout << "For loop:" << endl;
    for (int i = 0; i < 5; i++) // initialization; condition; increment
    {
        cout << i << " ";
    }
    cout << endl;

    // While loop
    cout << "While loop:" << endl;
    int j = 0;    // initialization
    while (j < 5) // condition
    {
        cout << j << " ";
        j++; // increment
    }
    cout << endl;

    // Do-while loop
    cout << "Do-while loop:" << endl;
    int k = 0; // initialization
    do
    {
        cout << k << " ";
        k++; // increment
    } while (k < 5); // condition
    cout << endl;

    return 0;
}