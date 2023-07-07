#include <stdio.h>

int main(void) {
    char p1, p2, p3 = '$';

    printf("\nIngrese un caracter: ");
    p1 = getchar();
    putchar(p1);
    printf("\n");

    while ((getchar()) != '\n'); // Limpiar el búfer de entrada

    printf("\nEl caracter p3 es: ");
    putchar(p3);
    printf("\n");

    printf("\nIngrese otro caracter: ");
    p2 = getchar();
    putchar(p2);
    printf("\n");

    return 0;
}
