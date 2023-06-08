#include <stdio.h>

/* Suma pagos. El programa, al recibir como datos un conjunto de pagos realizados en el último mes, obtiene la suma de los mismos.
PAG y SPA: variables de tipo real. */
int main(void) {
    float PAG, SPA;
    SPA = 0;

    printf("Ingrese el primer pago:\t");
    scanf("%f", &PAG);

    while (PAG != 0) {
        SPA = SPA + PAG;
        printf("Ingrese el siguiente pago:\t");
        scanf("%f", &PAG);
    }

    printf("\nEl total de pagos del mes es: %.2f", SPA);
    
    return 0;
}
