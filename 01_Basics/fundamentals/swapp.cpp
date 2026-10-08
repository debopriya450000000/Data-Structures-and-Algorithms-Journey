// ============================================================
// SWAPPING TWO NUMBERS
// ============================================================
//
// What I learned:
// I learned how to exchange the values of two variables.
//
// The main idea is to use a temporary variable:
//
// temp = a
// a = b
// b = temp
//
// The temporary variable stores the original value of a
// so that it is not lost when a is changed.
//
// Mental model:
//
// a → temp
// b → a
// temp → b
//
// Key concept:
// A variable can be used as temporary storage while
// changing the values of other variables.
//
// Mistakes / lessons:
// - I learned that if I directly change a before saving
//   its original value, the original value can be lost.
// - The temporary variable is therefore important in
//   the basic swapping method.
//
// ============================================================
#include <iostream>
using namespace std;

int main() {
    int a,b,temp;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    temp = a;
    a = b;
    b = temp;
cout << "After swapping:" << endl;
cout << "a = " << a << endl;
cout << "b = " << b << endl;
    
    return 0;
}
