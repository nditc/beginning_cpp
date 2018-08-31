#include <iostream>

using namespace std;

int main() {
    // Variables are like bucket
    // They store data
    // to do that they need 3 things!
    // 1. the data of course
    // 2. the name of the variable for future reference
    // 3. the `data type`

    int x;
    // x is a variable
    // x has a data type of `int` meaning it can only hold integer numbers!
    // but w8 it doesn't have any data!

    x = 10;
    // now `x` has some data!
    // u can `declare` a variable like we did in line 11 without giving it any data
    // later u may `fill that bucket` with some data as we did in line 15
    // so now whenever we write `x` in our code it will represent 10
    // until ofcourse we change that

    cout << "x is " << x << endl;

    // now we are gonna change x to 20
    x = 20;

    cout << "x is now " << x << endl;

    /* Other variables can be `float`, `double`, `char` etc */

    char a_character = 'a';
    // btw we can `declare` the variable and `assign` the value in a single line

    cout << "`a_character` is " << a_character << endl;

    float pi = 3.1416;

    cout << "`pi` is " << pi << endl;;

    return 0;
}
