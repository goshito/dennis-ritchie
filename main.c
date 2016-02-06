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
/* Exercise 1-9. Write a program to copy its input to its output, replacing each
string of one or more blanks by a single blank */
int main() {
    int c;
    
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            while ((c = getchar()) == ' ') {
                putchar(' ');
                if (c == EOF) {
                    break;
                }
            }
        }
    }
    return 0;
}


