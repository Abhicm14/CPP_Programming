/*
    Strings in CPP
    - C++ provides a built-in string class called `std::string` that is part of the C++ Standard Library.
    - It is a more convenient and safer alternative to C-style strings (character arrays).

    Basic Operations:
    - Creating a string: `std::string str = "Hello, World!";`
    - Concatenation: `std::string fullName = firstName + " " + lastName;`
    - Accessing characters: `char firstChar = str[0];`
    - Finding length: `size_t length = str.length();`
    - Substring: `std::string subStr = str.substr(0, 5);` // "Hello"
 // - Comparing strings: `if (str1 == str2) { statements  }`
 // - Input and output: `std::cout << str;` and `std::getline(std::cin, str);`

*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Creating a string
    string str = "Hello, World!";
    cout << "String: " << str << endl; // "Hello, World!"

    // Concatenation
    string firstName = "John";
    string lastName = "Doe";
    string fullName = firstName + " " + lastName;
    cout << "Full Name: " << fullName << endl; // "John Doe"

    // Accessing characters
    char firstChar = str[0];
    cout << "First Character: " << firstChar << endl; // 'H'

    // Finding length
    size_t length = str.length();
    cout << "Length of String: " << length << endl; // 13

    // Substring
    string subStr = str.substr(0, 5);
    cout << "Substring: " << subStr << endl; // "Hello"

    // Comparing strings
    string str1 = "Hello";
    string str2 = "Hello";
    if (str1 == str2)
    {
        cout << "Strings are equal." << endl;
    }
    else
    {
        cout << "Strings are not equal." << endl;
    }

    // Input and output
    string userInput;
    cout << "Enter a string: ";
    getline(cin, userInput); // Reads a line of text from the user and stores it in userInput
    cout << "You entered: " << userInput << endl;

    return 0;
}