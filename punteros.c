#include <stdio.h>


// La finalidad del código el crear funciones que retorne el valor mínimo y máximo usando punteros


// Inicio de la función
// Valor mínimo en el arreglo
int encontrarMinimo(int arreglo[], int longitud) {
    int minimo = arreglo[0];
    for (int i = 1; i < longitud; i++) {
        if (arreglo[i] < minimo) {
            minimo = arreglo[i];
        }
    }
    return minimo;
}

// Valor máximo en el arreglo
int encontrarMaximo(int arreglo[], int longitud) {
    int maximo = arreglo[0];
    for (int i = 1; i < longitud; i++) {
        if (arreglo[i] > maximo) {S
            maximo = arreglo[i];
        }
    }
    return maximo;
}

// Valor mínimo y máximo usando punteros
void encontrarMinMax(int *arreglo, int *minimo, int *maximo, int longitud) {
    *minimo = arreglo[0];
    *maximo = arreglo[0];
    
    for (int i = 1; i < longitud; i++) {
        if (arreglo[i] < *minimo) {
            *minimo = arreglo[i];
        }
        if (arreglo[i] > *maximo) {
            *maximo = arreglo[i];
        }
    }
}
// Fin de la función


// Se imprimen los valores encontrados de las distintas funciones
int main() {
    int arreglo[] = {21, 24, 65, 3, 56, 12, 35, 15};
    int longitud = sizeof(arreglo) / sizeof(arreglo[0]);
    
    // Encontrar el valor mínimo usando la función
    int minimo = encontrarMinimo(arreglo, longitud);
    printf("Valor mínimo: %d\n", minimo);
    
    // Encontrar el valor máximo usando la función
    int maximo = encontrarMaximo(arreglo, longitud);
    printf("Valor máximo: %d\n", maximo);
    
    // Encontrar el valor mínimo y máximo usando punteros
    int min, max;
    encontrarMinMax(arreglo, &min, &max, longitud);
    printf("Valor mínimo (punteros): %d\n", min);
    printf("Valor máximo (punteros): %d\n", max);
    
    return 0;
}





