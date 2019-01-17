/* Filename if_nicolec_victoriab.cpp
   Driver: Nicole Covey
   Navigator: Victoria Binkley
   Description: program to output the year a person is in college
   Date: 1/17/19
*/
#include <iostream>
using namespace std;

// main function
int main()
{
    int grade;

    cout << "What year are you in college? (enter a number between 1-4) ";
    cin >> grade;
    cout << endl << endl;


    if (grade == 1)
        cout << "Freshman";
    else if (grade == 2)
        cout << "Sophomore";
    else if (grade == 3)
        cout << "Junior";
    else if (grade == 4)
        cout << "Senior";
    else
        cout << "Invalid entry.";


    return(0);
}
