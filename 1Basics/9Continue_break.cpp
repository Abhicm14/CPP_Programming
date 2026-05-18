/*
    Continue and break statements in C++

    1. Continue statement: The continue statement is used to skip the current iteration of a loop and move to the next iteration. When the continue statement is encountered, the remaining code in the current iteration is not executed, and the loop proceeds to the next iteration.
    2. Break statement: The break statement is used to exit a loop prematurely. When the break statement is encountered, the loop is immediately terminated, and the program continues with the next statement after the loop.

*/

#include <iostream>

using namespace std;

int main()
{
    // Example of continue statement
    cout << "Using continue statement:" << endl;
    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            continue; // Skip even numbers
        }
        cout << i << " "; // This will only print odd numbers
    }
    cout << endl;

    // Example of break statement
    cout << "Using break statement:" << endl;
    for (int i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            break; // Exit the loop when i is 5
        }
        cout << i << " "; // This will print numbers from 1 to 4
    }
    cout << endl;

    return 0;
}

/*
    About Infinite Loops:
    An infinite loop is a loop that continues to execute indefinitely because the loop's terminating condition is never met.
    This can happen if the loop's condition is always true or if there is no condition at all.
    Infinite loops can lead to unresponsive programs and can consume system resources unnecessarily.

    Example of an infinite loop:

    // using a while loop without a terminating condition
    while (true)
    {
        // This loop will run forever
    }

    // using a for loop with a condition that is always true
    for (int i = 0; i >= 0; i++)
    {
        // This loop will also run forever
    }

    // using a while loop with a condition that is never updated
    int j = 0;
    while (j < 5)
    {
        // This loop will run forever because j is never updated
    }

    // using a do-while loop with a condition that is always true
    do
    {
        // This loop will run forever
    } while (true);

    To avoid infinite loops, ensure that the loop has a proper terminating condition and that the loop's variables are updated correctly within the loop.
*/