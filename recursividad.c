#include <stdio.h>

//La finalidad del laboratorio es la creacion de funciones que realicen busqueda lineal, binaria iterativa o binaria recursiva.


// Inicio de funciones
// Búsqueda lineal
int busquedaLineal(int arreglo[], int n, int valor) {
    for (int i = 0; i < n; i++) {
        if (arreglo[i] == valor) {
            return i; // SE ENCONTRÓ EL VALOR Y REGRESA POSICIÓN
        }
    }
    
    return -1; // NO SE ENCONTRÓ EL VALOR
}



// Búsqueda binaria iterativa
int busquedaBinaria(int arreglo[], int n, int valor) {
    int izquierda = 0;
    int derecha = n - 1;
    
    while (izquierda <= derecha) {
        int medio = izquierda + (derecha - izquierda) / 2;
        
        if (arreglo[medio] == valor) {
            return medio; // SE ENCONTRÓ EL VALOR Y REGRESA POSICIÓN
        } else if (arreglo[medio] < valor) {
            izquierda = medio + 1;
        } else {
            derecha = medio - 1;
        }
    }
    
    return -1; // NO SE ENCONTRÓ EL VALOR
}



// Búsqueda binaria recursiva
int busquedaBinariaRecursiva(int arreglo[], int izquierda, int derecha, int valor) {
    if (izquierda <= derecha) {
        int medio = izquierda + (derecha - izquierda) / 2;

        if (arreglo[medio] == valor) {
            return medio; // SE ENCONTRÓ EL VALOR Y REGRESA POSICIÓN
        } else if (arreglo[medio] < valor) {
            return busquedaBinariaRecursiva(arreglo, medio + 1, derecha, valor);
        } else {
            return busquedaBinariaRecursiva(arreglo, izquierda, medio - 1, valor);
        }
    }

    return -1; // NO SE ENCONTRÓ EL VALOR
}
// Fin de funciones




// Se imprimen los valores obtenidos de las funciones
int main() {
    int arreglo[] = {2, 4, 6, 23, 56, 79};
    int n = sizeof(arreglo) / sizeof(arreglo[0]);
    int valor;

    printf("Digite un valor entero: ");
    scanf("%d", &valor);

    // Búsqueda lineal
    int posicionLineal = busquedaLineal(arreglo, n, valor);
    if (posicionLineal != -1) {
        printf("Búsqueda Lineal: Valor encontrado en la posición %d.\n", posicionLineal);
    } else {
        printf("Búsqueda Lineal: Valor no encontrado.\n");
    }

    // Búsqueda binaria iterativa
    int posicionBinaria = busquedaBinaria(arreglo, n, valor);
    if (posicionBinaria != -1) {
        printf("Búsqueda Binaria Iterativa: Valor encontrado en la posición %d.\n", posicionBinaria);
    } else {
        printf("Búsqueda Binaria Iterativa: Valor no encontrado.\n");
    }

    // Búsqueda binaria recursiva
    int posicionBinariaRecursiva = busquedaBinariaRecursiva(arreglo, 0, n - 1, valor);
    if (posicionBinariaRecursiva != -1) {
        printf("Búsqueda Binaria Recursiva: Valor encontrado en la posición %d.\n", posicionBinariaRecursiva);
    } else {
        printf("Búsqueda Binaria Recursiva: Valor no encontrado.\n");
    }

    return 0;
    
    }

