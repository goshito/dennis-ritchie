#include <stdio.h>
/*Exercise 1-10, page 20*/
int main() {
    int c;
    
    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            printf("\\t");
            }
         if (c == '\b') {
            printf("\\b");
            }
         if (c == '\\') {
                printf("\\\\");
            }
    }
    return 0;
}