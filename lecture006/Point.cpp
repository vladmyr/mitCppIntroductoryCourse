#include <iostream>
#include "Point.hpp"

#pragma once

Point::Point() {}

Point::Point(double nx, double ny) {
    x = nx;
    y = ny;
}
Point::Point(Point &p) {
    x = p.x;
    y = p.y;
}

void Point::offset(double offsetX, double offsetY) {
    x += offsetX;
    y += offsetY;
}

void Point::print() {
    std::cout << "(" << x << ", " << y << ")";
}