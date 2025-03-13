#include <stdio.h>

void incrementarAnio(int *anyo) {
    *anyo = *anyo + 1; 
}

int main() {
    int anioActual = 2024;
    int *ptr_anio = &anioActual;

    printf("ptr(anio): %p\n", ptr_anio); 
    printf("Año antes del procedimiento: %d\n", anioActual);


    incrementarAnio(ptr_anio);

    printf("Año después del procedimiento: %d\n", anioActual);

    return 0;
}