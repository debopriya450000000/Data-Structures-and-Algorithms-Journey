// ============================================================
// IF-ELSE — POSITIVE, NEGATIVE OR ZERO
// ============================================================
//
// What I learned:
// I learned how a program can make different decisions
// depending on the value of a condition.
//
// The program checks three possible cases:
//
// a > 0  → positive
// a < 0  → negative
// otherwise → zero
//
// Mental model:
//
// Input
//   ↓
// Check first condition
//   ↓
// If false → check second condition
//   ↓
// If both are false → zero
//
// Key concept:
// if / else if / else allows a program to handle
// multiple possible outcomes.
//
// I also learned that the final else does not need another
// condition because it represents the remaining case.
//
// Mistakes / lessons:
// - I learned that conditions must be arranged so that
//   all possible cases are covered.
// - The program should not treat zero as positive or negative.
// - The final else handles the remaining case: zero.
//
// ============================================================

#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter an integer: ";
    cin >> a;
    if(a>0) {
        cout << "The number is positive." << endl;
    } else if(a<0) {
        cout << "The number is negative." << endl;
    } else {
        cout << "The number is zero." << endl;
    }
    return 0;
}
