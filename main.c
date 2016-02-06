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
/* Exercise 1..8. Write a program to count blanks, tabs, and newline */
int main() {
    int c, nl, nt, ns;
    
    nl = 0;
    nt = 0;
    ns = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            ++nl;                    
        }
        if (c == '\t') {
            ++nt;
        }
        if (c == ' ') {
            ++ns;
        }
    }
    printf("%dlines\n%dtabs\n%dspaces\n", nl, nt, ns);
    return 0;
}


