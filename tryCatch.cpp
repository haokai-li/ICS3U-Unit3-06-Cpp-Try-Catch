// Copyright (c) 2021 haokai All rights reserved
//
// Created by: Haokai
// Created on: Sept 2021
// This Program guess a number between 0 - 9 (random)

#include <iostream>
#include <random>
#include <string>

int main() {
    // This Program guess a number between 0 - 9 (random)

    std::string guessString;
    int guessNumber;

    int answer;
    std::random_device rseed;
    std::mt19937 rgen(rseed());
    std::uniform_int_distribution<int> idist(0, 9);
    answer = idist(rgen);

    // input
    std::cout << "Enter a number between 0 - 9: ";
    std::cin >> guessString;
    std::cout << "" << std::endl;

    // process
    try {
        guessNumber = std::stoi(guessString);
        if (guessNumber == answer) {
            // output
            std::cout << "You guessed correctly!" << std::endl;
        } else {
            // output
            std::cout << "You guessed wrong!" << std::endl;
            std::cout << "Answer: " << answer << std::endl;
        }
    } catch (std::invalid_argument) {
         std::cout << guessString << " is not an integer." << std::endl;
    }

    std::cout << "Thanks for playing." << std::endl;
    std::cout << "\nDone" << std::endl;
}
