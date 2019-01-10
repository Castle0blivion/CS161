// filename: ip2_variables.cpp
// programmer: Nicole Covey
// navigator : Victoria Binkley
// date: 1/10/ 2019
// description: program to compute the length of a line that can be formed by a group
// of students holding hands

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int numberOfStudents;
    float averageArmSpan;
    float approximateLineLength;

    numberOfStudents = 33;
    averageArmSpan =  64.58675309;
    approximateLineLength = numberOfStudents * averageArmSpan;


    cout << numberOfStudents;
    cout << " students, with average arm span of ";
    cout << averageArmSpan
         << " inches, can create a line approximately ";
    cout << fixed << showpoint;
    cout << setprecision (2);
    cout << approximateLineLength << " inches long.";
}
