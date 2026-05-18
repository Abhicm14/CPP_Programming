/*
    Switch Statement:
        syntax:
        switch (expression)
        {
            case constant1:
                // code to be executed if expression equals constant1
                break;
            case constant2:
                // code to be executed if expression equals constant2
                break;
            .
            .
            .
            default:
                // code to be executed if expression doesn't match any case
        }
    Note:
    1. The expression in the switch statement is evaluated once and compared with the values of each case.
       If there is a match, the corresponding block of code is executed.

    2. The break statement is used to exit the switch block after executing the matched case.
        If break is omitted, the program continues to execute the next case (known as "fall-through"),
        which can lead to unintended behavior if not used carefully.

    3.  The default case is optional and can be used to handle any cases that are not explicitly defined.
        It is executed if none of the cases match the expression.
*/

#include <iostream>

using namespace std;

int main()
{
    int day;

    cout << "Enter a number (1-7) to represent a day of the week: ";
    cin >> day;

    switch (day)
    {
    case 1:
        cout << "Monday" << endl;
        break;
    case 2:
        cout << "Tuesday" << endl;
        break;
    case 3:
        cout << "Wednesday" << endl;
        break;
    case 4:
        cout << "Thursday" << endl;
        break;
    case 5:
        cout << "Friday" << endl;
        break;
    case 6:
        cout << "Saturday" << endl;
        break;
    case 7:
        cout << "Sunday" << endl;
        break;
    default:
        cout << "Invalid input! Please enter a number between 1 and 7." << endl;
    }

    // Range use in case labels
    int score;
    cout << "Enter a score (0-100): ";
    cin >> score;

    switch (score / 10) // Using integer division to determine the range
    {
    case 10: // For score 100
    case 9:  // For scores 90-99
        cout << "Grade: A" << endl;
        break;
    case 8: // For scores 80-89
        cout << "Grade: B" << endl;
        break;
    case 7: // For scores 70-79
        cout << "Grade: C" << endl;
        break;
    case 6: // For scores 60-69
        cout << "Grade: D" << endl;
        break;
    default: // For scores below 60
        cout << "Grade: F" << endl;
    }

    return 0;
}