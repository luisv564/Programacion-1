#include <stdio.h>

int main(void) {
    int I;
    float SAL, NOM;
    NOM = 0;
    
    for (I = 1; I <= 15; I++) {
        printf("Ingrese el salario del profesor %d: ", I);
        scanf("%f", &SAL);
        NOM = NOM + SAL;
    }
    
    printf("\nEl total de la nómina es: %.2f", NOM);
    
    return 0;
}
