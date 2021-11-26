// Copyright (c) 2021 Noah Ouellette All rights reserved.
//
// Created by: Noah Ouellette
// Date: Nov. 24, 2021
// This program calculates the area and permeter of a
// rectangle with the dimensions of 3456cm by 5873cm.

#include <iostream>
#include <cmath>

int main() {
  std::cout << "If a rectangle has the dimensions of "
            << "3456cm by 5873cm: " << std::endl;
  std::cout << " " << std::endl;
  std::cout << "The area would be " << (3456 * 5873) << "cm^2 "
            << "and the perimeter would be "
            << (2 * (3456+5873)) << "cm." << std::endl;
}
