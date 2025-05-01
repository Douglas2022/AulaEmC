#include <stdio.h>

// Função que conta quantas vezes o elemento aparece no array
int contarOcorrencias(int array[], int tamanho, int elemento) {
    int contador = 0;
    for (int i = 0; i < tamanho; i++) {
        if (array[i] == elemento) {
            contador++;
        }
    }
    return contador;
}

int main() {
    int array[] = {2, 4, 6, 8, 8, 10, 8, 12, 14, 8};
    int tamanho = sizeof(array) / sizeof(array[0]);
    int elemento = 8;

    int ocorrencias = contarOcorrencias(array, tamanho, elemento);

    if (ocorrencias > 0) {
        printf("O numero %d aparece %d vezes no array.\n", elemento, ocorrencias);
    } else {
        printf("O numero %d não foi encontrado no array.\n", elemento);
    }

    return 0;
}
