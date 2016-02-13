/*The C Programming Language, 2nd Edition, by Kernighan and Ritchie
Exercise 1.02 on page 8*/

#include <stdio.h>

int main(void) {
    printf("Audible or visual alert. \a\n");
    printf("Form feed. \f\n");
    printf("This escape, \r, moves the active position to the initial position of the current line.\n");
    printf("Vertical tab \v is tricky, as its behaviour is unspecified under certain conditions.\n");
    return 0;
}