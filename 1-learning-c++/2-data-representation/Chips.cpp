#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>

using namespace std;

/// - Declaring a constant
const int MAX_CIPS = 100;
const float MAX_TURN = .5;
int main()
{
    bool player1Turn = true;
    bool gameOver = false;

    int chipsInPile = 0;
    int chipsTaken = 0;

    string players[2];

    cout << "Player 1, please enter your name: \n";
    cin >> players[0];
    cout << "Player 2, please enter your name: \n";
    cin >> players[1];

    // string players[2] = {"X", "Y"};
    // or
    // string players[2];
    // players[0] = "X";
    // players[1] = "Y";

    /// - 2D array
    int ticTacToe[3][3];

    // seed the random number generator
    srand(time(0));

    chipsInPile = (rand() % MAX_CIPS) + 1;
    cout << "This round will start with " << chipsInPile << " chips in the pile \n";
    if (player1Turn)
    {
        cout << players[0] << " How many chips would you like?\n";
    }
    else
    {
        cout << players[1] << " How many chips would you like?\n";
    }

    // string player = player1Turn ? "X": "Y";

    cout << "You can only take " << static_cast<int>(chipsInPile * MAX_TURN) << endl;
    cin >> chipsTaken;

    return 0;
}