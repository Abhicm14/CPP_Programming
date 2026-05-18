/*
    Arrays in C++

    An array is a collection of elements of the same type stored in contiguous memory locations.
    In C++, arrays can be declared and initialized in various ways.

    Here are some examples:

    // Declaring an array of integers with a size of 5
    int myArray[5];

    // Initializing an array with values
    int myArray[5] = {1, 2, 3, 4, 5};

    // Declaring and initializing an array of characters
    char myCharArray[6] = {'H', 'e', 'l', 'l', 'o', '\0'};

*/

#include <iostream>

using namespace std;

int main()
{
    // Declaring and initializing an array of integers
    int myArray[5] = {1, 2, 3, 4, 5};

    // Accessing elements of the array
    cout << "First element: " << myArray[0] << endl;  // Output: 1
    cout << "Second element: " << myArray[1] << endl; // Output: 2

    // Modifying an element of the array
    myArray[2] = 10;
    cout << "Modified third element: " << myArray[2] << endl; // Output: 10

    // Declaring and initializing an array of characters
    char myCharArray[6] = {'H', 'e', 'l', 'l', 'o', '\0'};

    // Output the character array as a string
    cout << "Character array as string: " << myCharArray << endl; // Output: Hello

    // Updating array elements using a loop
    for (int i = 0; i < 5; i++)
    {
        cin >> myArray[i]; // Input new values for the array
    }

    // Looping through the integer array
    cout << "Elements of myArray: ";
    for (int i = 0; i < 5; i++)
    {
        cout << myArray[i] << " ";
    }

    return 0;
}

/*
    About array Class in C++
    - C++ provides a standard library class called `std::array` that is a container
        that encapsulates fixed size arrays. It is defined in the `<array>` header.

    - `std::array` provides a more convenient and safer alternative to C-style arrays,
        as it includes member functions for accessing and manipulating the array elements.

        Declaration:
        template <typename T, size_t N>
        example: `std::array<int, 5> myArray;` // Declares an array of 5 integers

        Initialization:
        std::array<int, 5> myArray = {1, 2, 3, 4, 5}; // Initializes the array with values

    - Example of using `std::array`:
    #include <array>
    #include <iostream>

    using namespace std;

    int main()
    {
        array<int, 5> myArray = {1, 2, 3, 4, 5};

        // Accessing elements
        cout << "First element: " << myArray[0] << endl; // Output: 1

        // Modifying an element
        myArray[2] = 10;
        cout << "Modified third element: " << myArray[2] << endl; // Output: 10

        // Looping through the array
        cout << "Elements of myArray: ";
        for (size_t i = 0; i < myArray.size(); i++)
        {
            cout << myArray[i] << " ";
        }

        return 0;
    }
*/