#include <iostream>

#include "Point.hpp"
#include "Vector.hpp"

using namespace std;

/**
 * Passing classes to functions
 * Passing by value passes a copy of a class instance to the function
 * Changes are not preserved
 */
void pureOffsetPoint (Point p, double x, double y) {
    p.x += x;
    p.y += y;
}

// Changes are preserved since instance is passed as a reference
void impureOffsetPoint (Point &p, double x, double y) {
    p.x += x;
    p.y += y;
}

void print (Vector &v) {
    cout << "(" << v.start.x << ", " << v.start.y << ") -> (" << v.end.x << ", " << v.end.y << ")" << endl;
}

int main () {
    Vector vector1;
    Vector vector2;

    vector1.start.x = 3.0;
    vector1.start.y = 4.0;
    vector1.end.x = 5.0;
    vector1.end.y = 4.0;

    vector2.start = vector1.start;  // assigning one instance to another copies all fields
    vector2.start.x = 7.0;

    cout << "Vector values:" << endl;
    print (vector1);
    print (vector2);

    pureOffsetPoint (vector1.start, 1.2, 3.9);

    cout << "Use pureOffsetPoint to try to modive vecto values: ";
    vector1.print();
    
    impureOffsetPoint (vector1.start, 1.2, 3.9);

    cout << "Use impureOffsetPoint to try to modive vecto values: ";
    vector1.print();

    /**
     * Using constructors
     */
    Point p(4.5, 6.3);
    Point q = p;    // uses copy constructor

    p.print();
    q.print();

    cin.clear ();
    cin.ignore (32767, '\n');
    cin.get ();

    return 0;
}