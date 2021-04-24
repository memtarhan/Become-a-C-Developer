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

    // seed the random number generator
    srand(time(0));

    chipsInPile = (rand() % MAX_CIPS) + 1;
    cout << "This round will start with " << chipsInPile << " chips in the pile \n";
    cout << "You can only take " << static_cast<int>(chipsInPile * MAX_TURN) << endl;

    return 0;
}