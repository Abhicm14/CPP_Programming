/* About Comments in C++:
 * - Single-line comments start with // and continue until the end of the line.
 * - Multi-line comments are enclosed between /* and *\/ (without the backslash).
 * - Comments are ignored by the compiler and are used to explain code or make notes.
 */

/* Operators in C++:
    //  1. Arithmetic Operators: +, -, *, /, %
    //  2. Assignment Operators: =, +=, -=, *=, /=, %=
    //  3. Comparison Operators: ==, !=, >, <, >=, <=
    //  4. Logical Operators: &&, ||, !
    //  5. Bitwise Operators: &, |, ^, ~, <<, >>
    //  6. Increment and Decrement Operators: ++, --
*/

#include <iostream>

using namespace std;

int main()
{
    // This is a single-line comment

    /*
        This is a multi-line comment.
        It can span multiple lines.
    */

    // Example of arithmetic operators
    int a = 10;
    int b = 5;
    cout << "a + b = " << a + b << endl; // Addition
    cout << "a - b = " << a - b << endl; // Subtraction
    cout << "a * b = " << a * b << endl; // Multiplication
    cout << "a / b = " << a / b << endl; // Division
    cout << "a % b = " << a % b << endl; // Modulus

    // Example of assignment operators
    int c = 10;
    c += 5; // Equivalent to c = c + 5
    cout << "c after += 5: " << c << endl;
    c -= 3; // Equivalent to c = c - 3
    cout << "c after -= 3: " << c << endl;
    c *= 2; // Equivalent to c = c * 2
    cout << "c after *= 2: " << c << endl;
    c /= 4; // Equivalent to c = c / 4
    cout << "c after /= 4: " << c << endl;
    c %= 3; // Equivalent to c = c % 3
    cout << "c after %= 3: " << c << endl;

    // Example of comparison operators
    int d = 10;
    cout << "d == 10: " << (d == 10) << endl; // Equal to
    cout << "d != 5: " << (d != 5) << endl;   // Not equal to
    cout << "d > 5: " << (d > 5) << endl;     // Greater than
    cout << "d < 15: " << (d < 15) << endl;   // Less than
    cout << "d >= 10: " << (d >= 10) << endl; // Greater than or equal to
    cout << "d <= 20: " << (d <= 20) << endl; // Less than or equal to

    // Example of logical operators
    bool e = true;
    bool f = false;
    cout << "e && f: " << (e && f) << endl; // Logical AND
    cout << "e || f: " << (e || f) << endl; // Logical OR
    cout << "!e: " << (!e) << endl;         // Logical NOT

    // Example of bitwise operators
    int g = 5;                            // In binary: 0101
    int h = 3;                            // In binary: 0011
    cout << "g & h: " << (g & h) << endl; // Bitwise AND
    cout << "g | h: " << (g | h) << endl; // Bitwise OR
    cout << "g ^ h: " << (g ^ h) << endl; // Bitwise XOR
    cout << "~g: " << (~g) << endl;       // Bitwise NOT

    return 0;
}