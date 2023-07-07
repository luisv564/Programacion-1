#include <stdio.h>
#include <ctype.h>

/* Decodifica.
El programa decodifica una cadena de caracteres compuesta por números y letras.
*/
void interpreta(char*); /* Prototipo de función. */

int main(void) {
    char cad[50];
    
    printf("\nIngrese la cadena de caracteres: ");
    fgets(cad, sizeof(cad), stdin);
    
    interpreta(cad);
    
    return 0;
}

void interpreta(char* cadena) {
    /* Esta función se utiliza para decodificar la cadena de caracteres. */
    int i = 0, j, k;
    
    while (cadena[i] != '\0') {
        if (isalpha(cadena[i])) {
            k = cadena[i - 1] - '0';
            /* En la variable entera k se almacena el valor del dígito numérico
               que nos interesa. Restamos '0' para convertir el carácter en su valor numérico. */
               
            for (j = 0; j < k; j++) {
                putchar(cadena[i]);
            }
        }
        
        i++;
    }
}
