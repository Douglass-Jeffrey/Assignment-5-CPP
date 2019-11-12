// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Douglass Jeffrey
// Created on: Nov 2019
// This program calculates one number to the power of another


#include <iostream>
#include <string>

main() {
    // variables
    int value_1;
    int power_number;
    int loopsum = 1;
    int loopcounter = 0;

    // input
    std::cout << "Input a number of your choice:" << std::endl;
    std::cin >> value_1;
    std::cout << "To what power should this number be raised? "<< std::endl;
    std::cin >> power_number;

    // process and output
    try {
        while (loopcounter < power_number) {
            loopsum = loopsum * value_1;
            loopcounter = loopcounter + 1;
        }
        std::cout << value_1 << " to the power of " << power_number <<
        " = " << loopsum << std::endl;
    } catch (std::invalid_argument) {
    std::cout << "Please input only valid integers";
    }
}
