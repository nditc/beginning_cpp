#include <iostream>

using namespace std;

int main() {
    // what if we need to get out of the loop early?

    int x = 0;

    while (x < 100) {
        cout << "Hello, World!" << endl;

        if (x == 10) {
            break; // when x becomes 10 loops stops anyway
        }

        x = x + 1;
    }

    // maybe skip some steps

    for (int i = 0; i < 10; i ++) {
        if (i % 2 == 0) {
            continue; // if i is even we don't need to go on anymore
        }

        cout << i << endl;
    }

    return 0;
}
