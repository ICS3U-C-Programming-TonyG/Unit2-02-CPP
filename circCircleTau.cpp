// Copyright (c) Year Tony G All rights reserved.

//

// Created by: Tony G

// Date: 2025-03-03

// Calculates the circumference of any given circle with Tau

#include <iostream>

int main() {
    // Identify constant Tau and asks for radius
    const float TAU = 6.28;
    float radius;
    std::cout << "Please insert radius(cm):";
    std::cin >> radius;
    // Calculates the circumference of the circle with the given radius and TAU
    std::cout << "Circumference = ";
    std::cout << (TAU * radius) << "(cm)";
    std::cout << std::endl;
}
