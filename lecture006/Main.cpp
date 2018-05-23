#include <iostream>

using namespace std;

class Point {
public:
    double x;
    double y;

    void offset (double offsetX, double offsetY) {
        x += offsetX;
        y += offsetY;
    }

    void print () {
        cout << "(" << x << ", " << y << ")";
    }
};

class Vector {
public:
    Point start;
    Point end;

    void offset (double offsetX, double offsetY) {
        start.offset (offsetX, offsetY);
        end.offset (offsetX, offsetY);
    }

    void print () {
        start.print ();
        cout << " -> ";
        end.print ();
        cout << endl;
    }
};

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
    print (vector1);
    
    impureOffsetPoint (vector1.start, 1.2, 3.9);

    cout << "Use impureOffsetPoint to try to modive vecto values: ";
    print (vector1);

    cin.clear ();
    cin.ignore (32767, '\n');
    cin.get ();

    return 0;
}