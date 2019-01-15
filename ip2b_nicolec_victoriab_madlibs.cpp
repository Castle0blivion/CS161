/* Filename: ip2b_nicoleC_VictoriaB_madlibs.cpp
   Driver: Nicole Covey
   Navigator: Victoria Binkley
   Date: 1/15/2019
   Description: inputs outputs strings to create madlibs game - ask for
   noun,  verb, adjective, adverb, (-ing verb)- user will not know how words are being used,
   but program set up with words missing
*/

/*
story to be used: Once upon a time, there was a __adjective1__ __noun1__. It _past tense verb__ 1all over the __place1__ ,
__adverb1__ __verb2 ending in -ing__. In the distance, __number1__ __noun2__(s) could be seen lead by their ruler
__Celebrity Figure1_. Everyone __past tense verb3__. The end.
*/

#include <iostream>
#include <string>
using namespace std;

// main function
int main()
{
    // variable declaration
    string adjective;
    string noun1;
    string pastTenseVerb1;
    string place;
    string adverb;
    string verbEndingInIng;
    int number;
    string noun2;
    string celebrityFigure;
    string pastTenseVerb2;

    cout << "Please enter an adjective: ";
    getline(cin, adjective);
    cout << "Enter a noun: ";
    getline (cin,noun1);
    cout << "Enter a past-tense verb: ";
    getline (cin, pastTenseVerb1);
    cout << "Enter a place: ";
    getline (cin, place);
    cout << "Enter an adverb: ";
    getline (cin, adverb);
    cout << "Enter a verb ending in \"-ing\": ";
    getline (cin, verbEndingInIng);
    cout << "Enter another noun: ";
    getline (cin, noun2);
    cout << "Enter a Celebrity Figure: ";
    getline (cin, celebrityFigure);
    cout << "Enter another past-tense verb: ";
    getline (cin, pastTenseVerb2);
    cout << "Lastly, enter a number: ";
    cin >> number;

/*
story to be used: Once upon a time, there was a __adjective1__ __noun1__. It _past tense verb__ 1all over the __place1__ ,
__adverb1__ __verb2 ending in -ing__. In the distance, __number1__ __noun2__(s) could be seen lead by their ruler
__Celebrity Figure1_. Everyone __past tense verb3__. The end.
*/

cout << "\n\nGenerating story... story generated." << endl << endl;
cout << "Once upon a time, there was a(n) " << adjective << " " << noun1 <<". " << endl;
cout << "It " << pastTenseVerb1 << " all over (the) " << place << ", " << adverb << " " << verbEndingInIng << ". \n";
cout << "In the distance, " << number << " " << noun2 << "(s) could be seen lead by their ruler, ";
cout << celebrityFigure << "." << endl << "Everyone " << pastTenseVerb2 << ". The end.";

return(0);
}
