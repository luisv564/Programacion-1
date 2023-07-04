#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nombre[50];
    char materia[50];
    float p1;
    float p2;
    float p3;
    float promedio;
} Alumno;

void insertarAlumno(FILE* archivo);
void mostrarAlumnos(FILE* archivo);
void leerArchivo(FILE* archivo);

int main()
{
    FILE* ar;
    ar = fopen("arc8.txt", "a");

    int opcion;

    do {
        printf("\n--- MENU ---\n");
        printf("1. Insertar Alumno\n");
        printf("2. Mostrar Alumnos\n");
        printf("3. Leer Archivo\n");
        printf("0. Salir\n");
        printf("Ingrese una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                insertarAlumno(ar);
                break;
            case 2:
                mostrarAlumnos(ar);
                break;
            case 3:
                leerArchivo(ar);
                break;
            case 0:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opcion no valida. Por favor, intente nuevamente.\n");
                break;
        }

    } while (opcion != 0);

    fclose(ar);

    return 0;
}

void insertarAlumno(FILE* archivo)
{
    Alumno nuevoAlumno;

    printf("\nIngresar Nombre Alumno: ");
    scanf("%s", nuevoAlumno.nombre);

    printf("Ingresar Nombre Materia: ");
    scanf("%s", nuevoAlumno.materia);

    printf("Ingresar Valor Parcial 1: ");
    scanf("%f", &nuevoAlumno.p1);

    printf("Ingresar Valor Parcial 2: ");
    scanf("%f", &nuevoAlumno.p2);

    printf("Ingresar Valor Parcial 3: ");
    scanf("%f", &nuevoAlumno.p3);

    nuevoAlumno.promedio = (nuevoAlumno.p1 + nuevoAlumno.p2 + nuevoAlumno.p3) / 3.0;

    fprintf(archivo, "%s\t%s\t%0.2f\t%0.2f\t%0.2f\t%0.2f\n", nuevoAlumno.materia, nuevoAlumno.nombre, nuevoAlumno.p1, nuevoAlumno.p2, nuevoAlumno.p3, nuevoAlumno.promedio);

    printf("Alumno insertado correctamente.\n");
}

void mostrarAlumnos(FILE* archivo)
{
    rewind(archivo); // Volver al inicio del archivo

    printf("\n--- ALUMNOS ---\n");
    printf("|MATERIA|\t|ALUMNO|\t|P1|\t|P2|\t|P3|\t|PROMEDIO|\n");

    Alumno alumno;

    while (fscanf(archivo, "%s\t%s\t%f\t%f\t%f\t%f\n", alumno.materia, alumno.nombre, &alumno.p1, &alumno.p2, &alumno.p3, &alumno.promedio) != EOF)
    {
        printf("%s\t%s\t%0.2f\t%0.2f\t%0.2f\t%0.2f\n", alumno.materia, alumno.nombre, alumno.p1, alumno.p2, alumno.p3, alumno.promedio);
    }
}

void leerArchivo(FILE* archivo)
{
    rewind(archivo); // Volver al inicio del archivo

    printf("\n--- CONTENIDO DEL ARCHIVO ---\n");

    char ch;

    while ((ch = fgetc(archivo)) != EOF)
    {
        printf("%c", ch);
    }
}
