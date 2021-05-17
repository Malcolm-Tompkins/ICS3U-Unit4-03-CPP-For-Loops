// Copyright (c) 2021 Malcolm Tompkins All rights reserved
//
// Created by Malcolm Tompkins
// Created on May 13, 2021
// Determines sum of previous numbers with while loop

#include <iostream>
#include <string>

main() {
    std::string user_input;
    int total, user_number, loop_counter;
    // Input
    std::cout << "Enter your number: ";
    std::cin >> user_input;

    try {
      user_number = std::stoi(user_input);

      for (loop_counter = 1; loop_counter <= user_number; loop_counter++) {
        total = loop_counter * loop_counter;
        std::cout << loop_counter << "²";
        std::cout << " = " << total << "\n";
    }
    }catch (std::invalid_argument) {
        std::cout << user_input << " is not a positive integer";
    }
    std::cout << "\nDone.";
}

