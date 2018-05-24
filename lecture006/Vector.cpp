#include <iostream>
#include "Vector.hpp"

#pragma once

Vector::Vector() {}

void Vector::offset (double offsetX, double offsetY) {
    start.offset (offsetX, offsetY);
    end.offset (offsetX, offsetY);
}

void Vector::print () {
    start.print ();
    std::cout << " -> ";
    end.print ();
    std::cout << std::endl;
}