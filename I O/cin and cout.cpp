#include <iostream>
// iostream is a library of functions and declarations
// and macros and lots of interesting and at the same time complex stuff.
// the only thing we need to know about this now is that it provides the necessary
// functionalities that we need for input and output. I/O is the only thing this library
// does. your code can still run if you don't include this library but you wont be able
// to show anything on the screen if you include this library.

int main(){
    cout << "this was a stream of characters" << " adding some more CHARs to the stream";
    // cout is a stream object(it is defined in the iostream library) that takes characters
    // and prints them to the screen. '<<' is actually a left shift operator but in this case
    // this operator has been overloaded and it actually means a stream of characters

    // in plain english '<<' takes one character at a time from the string in left to right order and
    // gives the characters to the cout object to process it and do whatever the cout object wants to
    // do with it. and what the cout object does is it takes the characters and prints them to the screen
    // plain and simple huh? no? :|

    int x,y;
    cin >> x >> y;
    // in this case you can see the '<<' sign has reversed to '>>' this is because in this case
    // the the cin object takes the characters from the input stream and stores them in the x and y variable.
    // input stream is the same as the char stream of string showed above.

    // this knowledge is enough for now i guess. in case you want to dive deeper into it(which is suggest you not to do in this case
    // because this shit's inner mechanism is really complex) you can start your adventure here - http://www.cplusplus.com/doc/tutorial/basic_io/
}
