#pragma once

class Point {
  public:
    double x, y;

    Point();
    Point(double nx, double ny);
    Point(Point &p);

    void offset(double offsetX, double offsetY);
    void print();
};