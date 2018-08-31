#include <iostream>

using namespace std;

int main()
{
    // a loop is a fairly simple idea

    // for example this is a 'while' loop
    int x = 1;

    while (x < 10) {
        cout << "Hello" << endl;

        x = x + 1; // this line is pretty important
    }

    // there is another kind of loop called 'for' loop
    // syntax:
    //      for (initially do something; while this is happening; do this after everytime we do the work)

    for (int i = 0; i < 10; i ++) {
        cout << "Hello" << endl;
    }

    // for loop is compact but can sometimes be ambiguous

    return 0;
}

