/*
    Variables
    - Must be declared before use
    - Can be initialized at the time of declaration
    - C-like initialization: int a = 0;
    - Uniform initialization: int b{0}; (does not allow narrowing conversions)
    - Constructor initialization: int c(0);
    - C-style strings: char greetin_a[6] = {'H', 'e', 'l', 'l', 'o', '\0'}; char greeting_b[] = "Hello"; char *greeting_c = "Hello";
    - C++ string: string greeting_d = "Hello";

    Rules for variable names:
    - Must start with a letter (a-z, A-Z) or an underscore (_)
    - Can contain letters, digits (0-9), and underscores
    - Cannot be a reserved keyword (e.g., int, return, if, etc.)

*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a = 0; // C-like initialization
    int b{0};  // Uniform initialization. Does not allow narrowing conversions.
    int c(0);  // Constructor initialization

    char greetin_a[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    char greeting_b[] = "Hello";
    char *greeting_c = "Hello";

    string greeting_d = "Hello";

    return 0;
}