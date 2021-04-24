#include <iostream>

using namespace std;

void greet(string person)
{
    cout << "Hello " << person << "!\n";
}

string retrieveGreeting(string person)
{
    return "Hello " + person + "!\n";
}

int main()
{
    string person;
    cout << "What's your name?" << endl;
    cin >> person;

    greet(person);
    string greeting = retrieveGreeting(person);
    cout << greeting << endl;

    return 0;
}