#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    float input , acers;
    scanf("%f", &input);
    acers= input /43600 ;
    printf("%.2f sq.ft is equal to %.2f acres\n", input,acers);
    return 0;
}