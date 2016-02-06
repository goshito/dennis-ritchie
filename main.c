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
/*1.5.3 count lines in input */
int main() {
    int c, nl;
    
    nl = 0;
    while ((c = getchar()) != EOF) 
        if (c == '\n')
            ++nl;
    printf("%d\n", nl);
    return 0;
}


