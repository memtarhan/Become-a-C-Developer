//
//  food.cpp
//  GettingStarted
//
//  Created by Mehmet Tarhan on 30.08.2020.
//  Copyright © 2020 Mehmet Tarhan. All rights reserved.
//

#include "food.hpp"
#include <iostream>

using namespace std;

int main()
{
    std::cout << "What's your favorite food?\n";
    string food;
    cin >> food;
    std::cout << "Your favorite food is " << food;
}
