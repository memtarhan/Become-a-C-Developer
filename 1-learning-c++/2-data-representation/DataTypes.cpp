#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{

    // - Data types

    /// - Integer
    int myVar;

    /// - Float
    float mySalary;

    /// - Character(Char)
    char middleInitial = 'A';

    /// - String
    string firstName = "Mehmet";

    /// - Boolean
    bool isValid = true;

    // - C++ feature
    /*
    C plus plus 11 now also allows variables to be declared based on the data type of an expression.
    */

    int x = 10;
    int y = x * 5;

    bool greater = 10 > 5;

    cout << "Is greater? -> " << greater << endl;

    // - Casting
    float n = 1.5;
    int newN = static_cast<int>(n);

    // - Math
    int taxRateCeill = ceil(4.9999);
    int taxRateFloor = floor(4.9999);

    cout << "Tax rate ceill: " << taxRateCeill << endl;
    cout << "Tax rate floor: " << taxRateFloor << endl;

    int remainder = 6 % 4;
    cout << "Remainder: " << remainder << endl;

    /// - Some useful math libraries
    /*
        r^2 in code =>           pow(r,2)
        square root =>           sqrt(4.0)
        int absolute value =>    abs(-10)
        float absoulute valie => fabs(2.5)
    */

    cout << "pow(3,2) => " << pow(3, 2) << endl;   // prints 9
    cout << "sqrt(4.0) => " << sqrt(4.0) << endl;  // prints 2
    cout << "abs(-10) => " << abs(-10) << endl;    // prints 10
    cout << "fabs(2.5) => " << fabs(-2.5) << endl; // prints 2.5

    // - Number generator
    int r = (rand() % 6) + 1;
    /* 
        Will generate a number between 0 and 5,
        Add 1 to r to get a number between 1 and 6 
    */
    /// Number generation starts at the same point
    cout << "Rolled the dice => " << r << endl;

    /// - Order of priority
    /*
        Any type of decimal number and integer will default the answer to double 
        "This is because double has more space to store an accurate response"
    */
    double myDouble = 10 * 5.0;

    int dice = 0;
    srand(time(0));

    dice = (rand() % 6) + 1;
    cout << "Rolled the dice again: " << dice << endl;

    dice = (rand() % 6) + 1;
    cout << "Rolled the dice again: " << dice << endl;

    dice = (rand() % 6) + 1;
    cout << "Rolled the dice again: " << dice << endl;

    return 0;
}