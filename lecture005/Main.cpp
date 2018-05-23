#include <iostream>

using namespace std;

void squareByPointer (int *numPointer) {
    *numPointer = *numPointer * *numPointer;
}

int main () {
    int x = 0;
    int *ptrX = &x;

    cout << "Variable x of value " << x << " is located at memory block " << ptrX << endl;
    cout << "Updating value of x via pointer..." << endl;

    *ptrX = 1;

    cout << "Variable x of value " << x << " is located at memory block " << ptrX << endl;

    int y = 5;
    squareByPointer(&y);

    cout << "Squared value is " << y << endl;

    /**
     * Using consts
     */
    const int *ptr1;            // 1. declares a changeable pointer to a constant integer
    int * const ptr2 = 0;       // 2. declares a constant pointer to a changeable integer
    const int * const ptr3 = 0; // 3. declares a constant pointer to a constant integer

    /**
     * Nulls, Unitialized, and Deallocated Pointers
     */
    int *ptr11 = 0;     // null pointer - invalid pointer

    /**
     * Reference
     */
    int a;
    int &b = a;     // make b a reference to, or alias of, a

    a = 10;

    cout << "The value of a and it's alias b is " << b << endl;

    b = 20;

    cout << "The value of a and it's alias b is " << a << endl;

    /**
     * Pointer arithmetics
     */
    long arr[] = { 6, 0 ,9, 6 };
    long *ptr21 = arr;

    *ptr21++;

    long *ptr22 = arr + 3;      // arr[3] is *(arr + 3)
    
    cout << "Result of pointer arithments are " << *ptr21 << " & " << *ptr22 << endl;

    cin.clear ();
    cin.ignore (32767, '\n');
    cin.get ();

    return 0;
}