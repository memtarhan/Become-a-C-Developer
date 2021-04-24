#include <iostream>

using namespace std;

int main()
{

    // - For loop

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << "Index " << i << endl;
    // }

    // for (int h = 0; h < 24; h++)
    // {
    //     for (int m = 0; m < 60; m++)
    //     {
    //         for (int s = 0; s < 60; s++)
    //         {
    //             cout << h << ":" << m << ":" << s << "\n";
    //         }
    //     }
    // }

    // - While loop
    // int m = 0;
    // while (m < 5)
    // {
    //     cout << "Hello World " << m << endl;
    //     m++;
    // }

    // - Do While Loop
    /// - Would you like to continue?
    string correctPassword = "1234";
    string userPassword;

    do
    {
        cout << "Enter your password: " << endl;
        cin >> userPassword;
    } while (userPassword != correctPassword);

    return 0;
}
