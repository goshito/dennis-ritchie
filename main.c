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
/* count characters in input; 2nd version  */
int main() {
    double nc;
    char c;
    c = getchar();
    for (int nc = 0; getchar() != EOF; ++nc) //It doesn't work!!!
        ;
    printf("%.0f\n", nc);
}


