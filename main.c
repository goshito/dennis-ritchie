#include <stdio.h>
//Ex. 1.8Write a program to count blanks, tabs, and newline
int main() {
    int nb = 0, nt = 0, nl = 0;
    char c;
    
    while ((c = getchar())!= EOF) {
        if (c == ' ') {
            ++nb;
        }
        if (c == '\t') {
            ++nt;
        }
        if (c == '\n') {
            ++nl;
        }
    }
    printf("\n%d blanks\n%d tabs\n%d lines", nb, nt, nl);
    
    return 0;
}