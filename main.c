#include <stdio.h>
// copy input to outpu first version
int main() {
    int c;
    
    c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
}