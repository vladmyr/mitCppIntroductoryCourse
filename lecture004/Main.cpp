#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

int sum (const int array[], const int length) {
    // Note: arrays are passed by reference
    long sum = 0;
    for (int i = 0; i < length; sum += array[i++]);
    return sum;
}

int main () {
    int arr[4];

    cout << "Please enter 4 integers:" << endl;

    for (int i = 0; i < 4; i++) {
        cin >> arr[i];
    }

    cout << "Values in array are now: ";

    for (int i = 0; i < 4; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    cout << "The sum of elements is: " << sum (arr, 4) << endl;

    // two dimensional array
    int twoDimArray[2][4] = {
        { 6, 0, 9, 6 },
        { 2, 0, 1, 1 }
    };

    // \0 is a null character
    char helloWorld[] = {
        'H', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', '!', '\0'
    };

    char helloWorld2[] = "Hello world!";
    char messyString[] = "t6H0I9s6.iS.999a9.STRING";
    char current = messyString[0];

    // transforming characters using cctype library
    for (int i = 0; current != '\0'; current = messyString[++i]) {
        if (isalpha(current)) {
            cout << (char) (isupper(current)
                ? tolower(current)
                : current);
        } else if (ispunct(current)) {
            cout << ' ';
        }
    }

    cout << endl;

    char fragment1[] = "I'm a s";
    char fragment2[] = "tring!";
    char fragment3[20];
    char finalString[20] = "";

    strcpy(fragment3, fragment1);       // copy characters from fragment1 to fragment3
    strcat(finalString, fragment3);     // string concatenation from fragment3 into finalString
    strcat(finalString, fragment2);

    cout << finalString << endl;

    cin.clear ();
    cin.ignore (32767, '\n');
    cin.get ();

    return 0;
}