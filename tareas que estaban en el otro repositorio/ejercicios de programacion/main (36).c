#include <stdio.h>
#include <string.h>
#include <ctype.h>

int cuentap(char*);

int main(void) {
    int i;
    char fra[50];
    printf("\nIngrese la línea de texto: ");
    gets(fra);
    strcat(fra, " ");
    i = cuentap(fra);
    printf("\nLa línea de texto tiene %d palabras\n", i);
    return 0;
}

int cuentap(char* cad) {
    char* cad0 = "";
    int i = 0;
    cad0 = strstr(cad, " ");
    while (strcmp(cad, " ")) {
        strcpy(cad, cad0 + 1);
        i++;
        cad0 = strstr(cad, " ");
    }
    return i;
}
