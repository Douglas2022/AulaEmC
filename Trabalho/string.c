#include <stdio.h>
#include <string.h>

// Função para verificar se uma palavra está presente na string
int buscarPalavra(char texto[], char palavra[]) {
    if (strstr(texto, palavra) != NULL) {
        return 1; // Encontrado
    }
    return 0; // Não encontrado
}

int main() {
    char texto[] = "A loucura é como a gravidade, só precisa de um empurrãozinho. Ass: Coringa";
    char nome[] = "Douglas";

    if (buscarPalavra(texto, nome)) {
        printf("Nome encontrado! O nome e: %s\n");
    } else {
        printf("Nome nao encontrado! O nome e: %s\n");
    }

    return 0;
}
