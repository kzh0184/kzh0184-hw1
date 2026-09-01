#include <iostream>
#include <string>
#include "starter.h"

using namespace std;

int main()
{
    // Create a few starter objects
    // Add some values to test out your values methods
    // Print out all the values for each object to validate your code

    Starter_Object ob1;
    ob1.val1(67);
    ob1.val2(69);
    cout << ob1.val1() << endl;
    cout << ob1.val2() << endl;
    string course = "COMP2710";
    string studentname = "Ryan H.";

    cout << course << endl;
    cout << studentname << endl;

    return 0;
}
