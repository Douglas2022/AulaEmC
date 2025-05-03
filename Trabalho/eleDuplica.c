#include <stdio.h>

int buscaBinaPrimeOcorrencia(int vetor[], int inicio, int fim, int chave) {
    int resultado = -1; 
    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;

        if (vetor[meio] == chave) {
            resultado = meio;
            fim = meio - 1;  
        else if (vetor[meio] > chave) {
            fim = meio - 1;
        }
        else {
            inicio = meio + 1;
        }
    }

    return resultado;  
}

int main() {
    int vetor[] = {2, 4, 6, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30};
    int chave;

    printf("Digite o valor que deseja buscar: ");
    scanf("%d", &chave);

    int resultado = buscaBinaPrimeOcorrencia(vetor, 0, sizeof(vetor) / sizeof(vetor[0]) - 1, chave);

    if (resultado != -1) {
        printf("Primeira ocorrencia de %d encontrada na posicao %d.\n", chave, resultado);
    }
    else {
        printf("Elemento %d nao encontrado.\n", chave);
    }

    return 0;
}
