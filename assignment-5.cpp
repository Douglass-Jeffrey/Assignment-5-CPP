// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Douglass Jeffrey
// Created on: Nov 2019
// This program calculates one number to the power of another


#include <iostream>
#include <string>

main() {
    // variables
    std::string value_1;
    std::string power_number;
    int int_value_1;
    int int_power_number;
    int loopsum = 1;
    int loopcounter = 0;

    // input
    std::cout << "Input a number of your choice:" << std::endl;
    std::cin >> value_1;
    std::cout << "To what power should this number be raised? "<< std::endl;
    std::cin >> power_number;

    // process and output
    try {
        int_power_number = std::stoi(power_number);
        int_value_1 = std::stoi(value_1);
        while (loopcounter < int_power_number) {
            loopsum = loopsum * int_value_1;
            loopcounter = loopcounter + 1;
        }
        std::cout << int_value_1 << " to the power of " << int_power_number <<
        " = " << loopsum << std::endl;
    } catch (std::invalid_argument) {
    std::cout << "Please input only valid integers";
    }
}
