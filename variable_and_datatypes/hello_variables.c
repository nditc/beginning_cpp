#include <stdio.h>

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

    printf("x is %d\n", x);

    // now we are gonna change x to 20
    x = 20;

    printf("x is now %d\n", x);

    /* Other variables can be `float`, `double`, `char` etc */

    char a_character = 'a';
    printf("`a_character` is %c\n", a_character); // notice we changed %d to %c for a different data type!

    float pi = 3.1416;
    printf("`pi` is %f\n", pi); // as for floats we use %f

    return 0;
}
