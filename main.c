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
#include <stdlib.h>

/*
 * Print Fahrenheit-Celcius table
 * for fahr = 0, 20, ..., 300
 */
int main(int argc, char** argv) {
    float fahr, celsius;
    int lower, upper, step;
    
    lower = 0;      /* lower limit of temperature table */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */
    
    fahr = lower;
    
    printf("Welcome to the fahr to celsius program!\n\n");
    while (fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr - 32);
        printf("%.2f %.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

    return (EXIT_SUCCESS);
}

