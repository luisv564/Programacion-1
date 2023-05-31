#include <stdio.h>

int main(void) {
    /* Incremento de salario.
    El programa, al recibir como dato el nivel de un profesor, incrementa su salario en función de la tabla 2.3.
    NIV: variable de tipo entero.
    SAL: variable de tipo real. */
    int NIV;
    float SAL;

    printf("Ingrese el nivel académico del profesor: ");
    scanf("%d", &NIV);

    printf("Ingrese el salario: ");
    scanf("%f", &SAL);

    switch (NIV) {
        case 1:
            SAL *= 1.0035;
            break;
        case 2:
            SAL *= 1.0041;
            break;
        case 3:
            SAL *= 1.0048;
            break;
        case 4:
            SAL *= 1.0053;
            break;
    }

    printf("\n\nNivel: %d\tNuevo salario: %8.2f", NIV, SAL);

    return 0;
}
