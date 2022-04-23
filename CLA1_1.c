#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   float input, m, ft,in,cm;
    scanf("%f", &input);
    m = 1000.00 *input;
    ft = 3280.84 * input;
    in = 39370.10 *input;
    cm = 100000.00 * input;
    printf("%.2f m\n", m);
    printf("%.2f ft\n", ft);
    printf("%.2f in\n",in);
    printf("%.2f cm\n", cm);
    return 0;
}