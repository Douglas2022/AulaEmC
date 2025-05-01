#include <stdio.h>

int contador(int array[], int tamanho, int elemento) {
    int contador = 0;
    for (int i = 0; i < tamanho; i++) {
        if (array[i] == elemento) {
            contador++;
        }
    }
    return contador;
}

int main() {
    int array[] = {2, 4, 6, 8, 10, 8, 12, 8, 14, 16, 18, 8, 20, 22};
    int tamanho = sizeof(array) / sizeof(array[0]);
    int elemento = 8;

    int procurar = contador(array, tamanho, elemento);

    if (procurar > 0) {
        printf("Numero %d encontrado %d vezes no array.\n", elemento, procurar);
    } else {
        printf("Numero %d não encontrado no array.\n", elemento);
    }

    return 0;
}
