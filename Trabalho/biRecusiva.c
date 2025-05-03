#include <stdio.h>

int procuraBinaria(int vetor[], int inicio, int fim, int chave) {
    if (inicio > fim) {
        return -1;
    }
    int meio = (inicio + fim) / 2;

    if (vetor[meio] == chave) {
        return meio;
    } else if (chave < vetor[meio]) {
        return procuraBinaria(vetor, inicio, meio - 1, chave);
    } else {
        return procuraBinaria(vetor, meio + 1, fim, chave);
    }
}

int main() {
    int vetor[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int chave;

    printf("Digite o valor que deseja buscar: ");
    scanf("%d", &chave); 

    int resultado = procuraBinaria(vetor, 0, tamanho - 1, chave);

    if (resultado != -1) {
        printf("Elemento %d encontrado na posicao %d.\n", chave, resultado + 1);  // Ajuste para 1-based
    } else {
        printf("Elemento %d não encontrado no vetor.\n", chave);
    }

    return 0;
}
