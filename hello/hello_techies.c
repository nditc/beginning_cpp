#include <stdio.h>

int main() {
    // Basically "Hello\tTechies!\n"
    // `\t` is a TAB character
    // `\n` is a new line
    printf("Hello");
    printf("\t");
    printf("Techies!\n");

    // `printf` is a function residing in that magic `stdio.h` file
    // on windows u may find it under `C:/MingW/includes/`
    // on linux is is in `/usr/includes`

    // btw `printf` prints to what we call `standard output`.
    // we will go on depth later.
    // for now it's our way to output data
}
