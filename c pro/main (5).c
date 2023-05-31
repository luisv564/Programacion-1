#include <stdio.h>
#include <math.h>

int main(void) {
    /* Expresion.
    El programa, al recibir como datos tres valores enteros, establece si los mismos satisfacen una expresión determinada.
    R, T y Q: variables de tipo entero.
    RES: variable de tipo real. */
    int R, T, Q;
    float RES;

    printf("Ingrese los valores de R, T y Q: ");
    scanf("%d %d %d", &R, &T, &Q);

    RES = pow(R, 4) - pow(T, 3) + 4 * pow(Q, 2);

    if (RES < 820)
        printf("\nR = %d\nT = %d\nQ = %d", R, T, Q);

    return 0;
}
