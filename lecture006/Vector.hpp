#include "Point.hpp"

#pragma once

class Vector {
  public:
    Point start, end;

    Vector();

    void offset(double offsetX, double offsetY);
    void print();
};