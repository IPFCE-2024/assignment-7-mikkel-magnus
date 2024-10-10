#include <stdio.h>
#include "taylor_sine.h"
#include <math.h>
//Opgave 1.b
int main() {
    double pi = 3.14; 
    int precision = 10;

    printf("sin(pi) = %f\n", sin(pi)); 

double x1 = pi;
    printf("\nTest 1: x = pi\n");
    printf("taylor_sine(pi, %d) = %.10f\n", precision, taylor_sine(x1, precision));
    printf("sin(pi) = %.10f\n", sin(x1));

double x2 = 0;
     printf("\nTest 2: x = 0\n");
     printf("taylor_sine(0, %d) = %.10f\n", precision, taylor_sine(x2, precision));
     printf("sin(0) = %.10f\n", sin(x2));

double x3 = -pi / 2;
    printf("\nTest 3: x = -pi/2\n");
    printf("taylor_sine(-pi/2, %d) = %.10f\n", precision, taylor_sine(x3, precision));
    printf("sin(-pi/2) = %.10f\n", sin(x3));

double x4 = 15.0;
    printf("\nTest 6: x = 15.0\n");
    printf("taylor_sine(15.0, %d) = %.10f\n", precision, taylor_sine(x4, precision));
    printf("sin(15.0) = %.10f\n", sin(x4));

/* opgave 1.c

For Taylor-rækken af sine approksimering, er den præcis omkring værdier nær 0, og dem gange pi. 
Hvilket er forventer, da det er en lokal approksimering omkring 0. 
For større x-værdier, vil det begynde at blive mere upræcist for den indbyggede funktion, med mindre vi forøger "precision".
The more terms you include in the Taylor series (i.e., increasing n), the closer the approximation gets to the actual sine value, especially for larger x.
For smaller values of x, fewer terms are required to achieve high accuracy, but for larger x, more terms improve the result.
*/

    return 0;
}

/* Output
sin(pi) = 0.001593

Test 1: x = pi
taylor_sine(pi, 10) = 0.0015926524
sin(pi) = 0.0015926529

Test 2: x = 0
taylor_sine(0, 10) = 0.0000000000
sin(0) = 0.0000000000

Test 3: x = -pi/2
taylor_sine(-pi/2, 10) = -0.9999996829
sin(-pi/2) = -0.9999996829

Test 6: x = 15.0
taylor_sine(15.0, 10) = -66435.5431964998
sin(15.0) = 0.6502878402
*/

