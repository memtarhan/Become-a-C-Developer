#include <iostream>
#include <iomanip>

using namespace std;

void greet(string person)
{
    cout << "Hello " << person << "!\n";
}

string retrieveGreeting(string person)
{
    return "Hello " + person + "!\n";
}

// - Funtions
/*
    Function parameters can be passed by reference or passed by value 
    By default: A regular data type is passed by value while an array is passed by reference
*/
/// - Second parameter is passed by reference 
void printReceipt(string, float &);

int main()
{
    // string person;
    // cout << "What's your name?" << endl;
    // cin >> person;

    // greet(person);
    // string greeting = retrieveGreeting(person);
    // cout << greeting << endl;

    float grandTotal = 0;
    string companyName = "123 Co";
    printReceipt(companyName, grandTotal);
    cout << grandTotal << endl;

    return 0;
}

void printReceipt(string companyName, float &total)
{
    cout << "Thank you for using " << companyName;
    cout << fixed;
    cout << "\nYour total is ";
    // cout << setprecision(2) << total << endl;
    total += 1;
}