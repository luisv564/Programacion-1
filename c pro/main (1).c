#include <stdio.h>
#include <math.h>

int main(void) {
    int OP, T;
    float RES;

    printf("Ingrese la opción del cálculo y el valor entero: 1 ");
    scanf("%d %d", &OP, &T);

    switch (OP) {
        case 1:
            RES = (float) T / 5;
            break;
        case 2:
            RES = pow(T, T);
            /* La función pow está definida en la biblioteca math.h */
            break;
        case 3:
        case 4:
            RES = 6 * T / 2;
            break;
        default:
            RES = 1;
            break;
    }

    printf("\nRESULTADO: %7.2f", RES);

    return 0;
}
