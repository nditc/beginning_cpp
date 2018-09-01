#include <iostream>

using namespace std;

int main() {
    // Calculating booleans can get BORING! Why should I care about them?

    // Cuz we can do things like this

    int x;
    cin >> x;

    if(true){
        cout << "it was true" << "\n"; // "\n" represents a line break. endl also does the same thing
    }

    if(false){
        cout << "it was false" << endl;  //this line will not get printed
    }
    // what "if(..expression..){..statement..}" does is it check if the statement inside the parentheses
    // returns a true or false value. if it returns false the statements inside the
    // second bracket(everything inside the second bracket is called 'if body') wont get executed.

    // in case you didn't know that "x > 0" actually returns something.
    // these operators are like boolean type functions that return a true or false value

    cout << (x == x);  //this will return true and as the cout prints the return value this
                     //statement will print 1 (because 1 represents true and 0 reopresents false)

    if(12){
        cout << "12 means true :D";  // this line gets printed because anything other than 0 is treated as true
                                     // you will learn more about this in typecasting
    }

    if(0){
        cout << "only 0 means false";
    }

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
