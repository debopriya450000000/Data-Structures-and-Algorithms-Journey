// Learning:
// I learned how a mathematical formula can be converted
// into a C++ expression.
// The program takes input values, applies the area formula,
// and displays the calculated result.

#include <iostream>
using namespace std;

int main() {
    int length, width;
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter width: ";
    cin >> width;
    int area = length * width;
    cout << "Area: " << area << endl;
    return 0;
}
