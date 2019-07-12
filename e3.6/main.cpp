/*
 •• E3.6
 Repeat Exercise •• E3.5, but before reading the numbers, ask the user whether increasing/decreasing should be “strict” or “lenient”. In lenient mode, the sequence 3 4 4 is increasing and the sequence 4 4 4 is both increasing and decreasing.
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "strict or lenient? ";
    string input;
    cin >> input;
    
    cout << "enter three numbers: ";
    int first, second, third;
    cin >> first >> second >> third;
    
    if (input == "strict")
    {
        if (first < second && second < third)
        {
            cout << "increasing";
        }
        else if (first > second && second > third)
        {
            cout << "decreasing";
        }
        else
        {
            cout << "neither";
        }
        
    }
    else
    {
        if (first <= second && second <= third)
        {
            cout << "increasing";
        }
        else
        {
            cout << "decreasing";
        }
    }
    cout << endl;
}
