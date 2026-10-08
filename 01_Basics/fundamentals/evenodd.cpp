// ============================================================
// EVEN OR ODD
// ============================================================
//
// What I learned:
// I learned how to use the modulus operator (%) to determine
// whether a number is even or odd.
//
// Main condition:
//
// a % 2 == 0
//
// If the remainder after dividing by 2 is 0:
// → the number is even
//
// Otherwise:
// → the number is odd
//
// Mental model:
//
// Number
//   ↓
// Divide by 2
//   ↓
// Check remainder
//   ↓
// 0 → Even
// non-zero → Odd
//
// Key concept:
// The modulus operator (%) gives the remainder of a division.
//
// Mistakes / lessons:
// - I learned that % does not give the result of division;
//   it gives the remainder.
// - The important condition is a % 2 == 0.
// - I also learned to use if-else because there are two
//   possible outcomes: even or odd.
//
// ============================================================
#include<iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter an integer: ";
    cin >> a;
    if(a%2 == 0) {
        cout << "The number is even." << endl;
    } else {
        cout << "The number is odd." << endl;
    }
    return 0;
}
