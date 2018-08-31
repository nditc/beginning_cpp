#include <iostream>

using namespace std;

int main() {
    // Calculating booleans can get BORING! Why should I care about them?

    // Cuz we can do things like this

    int x;
    cin >> x;

    if (x > 0) {
        cout << "`x` is positive" << endl;
    }

    if (x < 0) {
        cout << "`x` is negative" << endl;
    }

    if (x == 0) {
        cout << "`x` is zero" << endl;
    }

    // u can also set a default value
    if (x > 10) {
        cout << "greater than 10" << endl;
    } else {
        cout << "less or equal to 10" << endl; // gotta be right?
    }

    // multiple conditions can be chained
    if (x % 3 == 0) {
        cout << "divisible by 3" << endl;
    } else if (x % 5 == 0) {
        cout << "divisible by 5" << endl;
    } else {
        cout << "divisible by something but 3, 5" << endl;
    }


    // booleans help us 'react' to some certain input

    return 0;
}
