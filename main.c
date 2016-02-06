/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: georgi
 *
 * Created on February 6, 2016, 12:45 AM
 */

#include <stdio.h>
/* Exercise 1-6. Verify that the expression qetchar () != EOF is 0 or 1 */
int main() {
    int c;
    c = (getchar() != EOF);
    if (c == 0) {
        printf("Zero");
    } else if (c == 1) {
        printf("One");
    } else {
        puts("Not Zero, neither One");
    }
    return 0;
}


