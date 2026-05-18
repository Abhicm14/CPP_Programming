/*
    1. If statement
        syntax:
            if (condition)
            {
                // code to be executed if condition is true
            }
    2. If-else statement
        syntax:
            if (condition)
            {
                // code to be executed if condition is true
            }
            else
            {
                // code to be executed if condition is false
            }
    3. If-else-if statement
        syntax:
            if (condition1)
            {
                // code to be executed if condition1 is true
            }
            else if (condition2)
            {
                // code to be executed if condition2 is true
            }
            else
            {
                // code to be executed if both condition1 and condition2 are false
            }
    4. Nested if statement
        syntax:
            if (condition1)
            {
                // code to be executed if condition1 is true
                if (condition2)
                {
                    // code to be executed if condition2 is true
                }
                else
                {
                    // code to be executed if condition2 is false
                }
            }
            else
            {
                // code to be executed if condition1 is false
            }
*/

#include <iostream>

using namespace std;

int main()
{
    // Example of if statement
    int num1 = 10;
    if (num1 > 5)
    {
        cout << "num1 is greater than 5" << endl;
    }

    // Example of if-else statement
    int num2 = 3;
    if (num2 % 2 == 0)
    {
        cout << "num2 is even" << endl;
    }
    else
    {
        cout << "num2 is odd" << endl;
    }

    // Example of if-else-if statement
    int num3 = 15;
    if (num3 > 20)
    {
        cout << "num3 is greater than 20" << endl;
    }
    else if (num3 > 10)
    {
        cout << "num3 is greater than 10 but less than or equal to 20" << endl;
    }
    else
    {
        cout << "num3 is less than or equal to 10" << endl;
    }

    // Example of nested if statement
    int num4 = 8;
    if (num4 > 5)
    {
        cout << "num4 is greater than 5" << endl;
        if (num4 % 2 == 0)
        {
            cout << "num4 is even" << endl;
        }
        else
        {
            cout << "num4 is odd" << endl;
        }
    }
    else
    {
        cout << "num4 is less than or equal to 5" << endl;
    }
}