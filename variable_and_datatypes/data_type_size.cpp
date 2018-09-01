#include <iostream>

using namespace std;

int main()
{
    cout << "Let's see home many bytes those data types need in RAM" << endl;

    cout << "`int` needs "
         << sizeof(int) << endl;

    cout << "`short int` needs "
         << sizeof(short int) << endl;

    cout << "`long int` needs "
         << sizeof(long int) << endl;

    cout << "`char` needs "
         << sizeof(char) << endl;

    cout << "`float` needs "
         << sizeof(float) << endl;

    cout << "`double` needs "
         << sizeof(double) << endl;

    cout << "`long double` needs "
         << sizeof(long double) << endl;

    cout << "and so on..." << endl;

    // Note: `sizeof` is actually a macro aka preprocessor
    // also Modern C++ has support for exclusively bit sized int

    // size of these data types can vary depending on the compiler
    // if you have a 64-bit x86 processor, you can use an old 16-bit
    // compiler and get 16-bit ints, a 32-bit compiler and get 32-bit ints,
    // or a 64-bit compiler and get 64-bit ints.

    cout << "There are `int64_t` and `int32_t` too, costing respectively "
         << sizeof(int64_t) << " and "
         << sizeof(int32_t) << endl;
    // int64 strictly restricts the bit size to 64bits. a 16bit compiler will also
    // make this a 64bit int not a 16bit int


    // find more on http://www.byte-notes.com/data-types-c

    return 0;
}

