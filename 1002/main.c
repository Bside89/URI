#include <stdio.h>

/*
ENTRADAS (TESTE):
2.00
100.64
150.00

SAÍDAS (TESTE):
A=12.5664
A=31819.3103
A=70685.7750
*/

int main() {

    const double pi = 3.14159;
    double radius;

    scanf("%lf", &radius);
    printf("A=%.04lf\n", pi * (radius * radius));

    return 0;
}