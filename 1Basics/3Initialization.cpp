// 3Initialization.cpp

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