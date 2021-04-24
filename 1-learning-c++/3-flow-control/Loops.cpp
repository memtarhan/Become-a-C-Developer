#include <iostream>

using namespace std;

int main()
{

    // - For loop
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << "Index " << i << endl;
    // }

    for (int h = 0; h < 24; h++)
    {
        for (int m = 0; m < 60; m++)
        {
            for (int s = 0; s < 60; s++)
            {
                cout << h << ":" << m << ":" << s << "\n";
            }
        }
    }

    // - While loop
    int m = 0;
    while (m < 5)
    {
        cout << "Hello World " << m << endl;
        m++;
    }

    return 0;
}
