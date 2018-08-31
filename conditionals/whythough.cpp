#include <iostream>

using namespace std;

int main()
{
    // why need booleans? because they are the 'heart of logic'

    int x = 10;

    bool is_positive = x > 0; // the value is true
    bool is_negative = x < 0; // the value is false
    bool is_zero = x == 0; // the value is also false

    cout << is_positive << ' '
         << is_negative << ' '
         << is_zero << endl;

    // these right hand sides are called 'conditional expression'

    // u can also do things like this

    int number = 135;

    bool divisible_by_3 = (number % 3 == 0);
    bool divisible_by_5 = (number % 5 == 0);

    bool divisible_by_3_and_5 = divisible_by_3 && divisible_by_5;
    
    // '||' is a logical OR operator. it returns true if any of the expressions at its right side and
    // left side is true(here anything other that 0 means true)
    bool divisible_by_3_or_5 = divisible_by_3 || divisible_by_5;

    // '!' is also a logical operator. its the logical NOT operator. basically it just reverses the value
    // at its right side
    bool not_divisible_by_5 = !divisible_by_5;

    // more complex
    // '&&' is a logical OR operator. it returns true if both expressions at its right side and
    // left side is true(here anything other that 0 means true)
    bool not_divisible_by_3_nor_5 = !(divisible_by_3 && divisible_by_5);
    
    cout << divisible_by_3 << ' ' 
         << divisible_by_5 << ' '
         << divisible_by_3_and_5 << ' '
         << not_divisible_by_5 << ' '
         << not_divisible_by_3_nor_5 << '\n';

    return 0;
}

