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
/* copy input to output; 2ND version */
int main() {
    int c;
        
    while ( ((c = getchar())!= EOF)) {
        putchar(c);
    }
}


