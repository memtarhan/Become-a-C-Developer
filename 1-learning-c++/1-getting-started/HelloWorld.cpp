#include <iostream>

using namespace std;

int main()
{
    string name;
    string favoriteFood;

    cout << "Hello! \n" << endl;

    cout << "Please enter your name: " << endl;
    cin >> name;
    cout << "Hello, " << name << ", nice to see you. What's your favorite food? \n";
    cin >> favoriteFood;
    cout << "Great! " << favoriteFood << " is one of my favorites too! \n";
    
    
    return 0;
}