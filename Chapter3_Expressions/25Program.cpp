// This program demonstrates random numbers.
#include <iostream>
#include <cstdlib> // For rand and srand
#include <ctime>   // For the time function
using namespace std;

int main()
{
    // Get the system time.
    unsigned seed = time(0);

    // Seed the random number generator.
    srand(seed);

    // Display three random numbers.
    cout << rand() << endl;
    cout << rand() << endl;
    cout << rand() << endl;
    return 0;
}

/*
    If you wish to limit the range of the random number, use the following formula:
        y = (rand() % ( maxValue − minValue + 1)) + minValue ;
*/