#include <stdio.h>

int encontrarNumero(int array[], int tamanho, int elemento) {
    for (int i = 0; i < tamanho; i++) {
        if (array[i] == elemento) {
            return i;  
        }
    }
    return -1; 
}

int main() {
    int array[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int tamanho = sizeof(array) / sizeof(array[0]);
    int elemento = 8;

    int indice = encontrarNumero(array, tamanho, elemento);

    if (indice != -1) {
        printf("Numero %d encontrado no indice %d.\n", array[indice], indice);
    } else {
        printf("Numero %d não encontrado.\n", elemento);
    }

    return 0;
}
