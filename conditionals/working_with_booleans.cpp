#include <iostream>

using namespace std;

int main()
{
    // `boolean` values indicate eiether `true` or `false`
    bool first_one = true;
    bool second_one = false;

    // these data types take 1 byte in memory

    // printing them will print 1 for `true` and 0 for `false`
    cout << "`first_one` is " << first_one << endl;

    cout << "`second_one` is " << second_one << endl;

    // What interesting is they have some operations like number
    // these are called `boolean operations`
    // there are mainly three kinds we are worried about for now
    // && (and), || (or), ! (not)

    cout << "true and false is " << (first_one && second_one) << endl;
    cout << "true or false is " << (first_one || second_one) << endl;
    cout << "not true is " << (!first_one) << endl;

    return 0;
}

