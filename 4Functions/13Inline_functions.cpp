/*
    Inline functions are a powerful feature in C++ that allows the compiler to replace a function call with the actual code of the function.
    This can lead to performance improvements by eliminating the overhead of a function call, especially for small and frequently called functions.

    To declare a function as inline, you can use the `inline` keyword before the function definition.

    Syntax of an inline function:
    inline return_type function_name(parameter_list)
    {
        // function body
    }

    When the compiler encounters a call to an inline function, it replaces the call with the actual code of the function.

    Benefits of inline functions:
    1. Performance: Inline functions can improve performance by eliminating the overhead of a function call
    2. Code readability: Inline functions can make code more readable by allowing you to write small, self-contained functions that can be easily understood.
    3. Code maintenance: Inline functions can make code easier to maintain by allowing you to write small, reusable functions that can be easily updated without affecting the rest of the code.
    However, it's important to note that the `inline` keyword is a suggestion to the compiler, and the compiler may choose not to inline a function if it determines that inlining would not be beneficial or if the function is too complex.

*/

#include <iostream>

using namespace std;

// Inline function definition
inline int add(int a, int b)
{
    return a + b; // Return the sum of a and b
}

int main()
{
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Function call
    int result = add(num1, num2);

    cout << "The sum of " << num1 << " and " << num2 << " is: " << result << endl;

    return 0;
}
