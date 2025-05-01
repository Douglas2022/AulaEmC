#include <stdio.h>
#include <stdlib.h>

/* Definição da estrutura de lista */
struct lista {
    int info;
    struct lista* prox;
};

typedef struct lista Lista;

/* Função para criar uma lista vazia */
Lista* criarLista() {
    return NULL;
}

/* Função para inserir elementos no início da lista */
Lista* insere(Lista* ref, int valor) {
    Lista* novoNo = (Lista*)malloc(sizeof(Lista));
    if (novoNo == NULL) {
        printf("Erro ao alocar memória\n");
        return ref;
    }
    novoNo->info = valor;
    novoNo->prox = ref;
    return novoNo;
}

/* Função para imprimir os elementos da lista */
void imprimir(Lista* ref) {
    Lista* P;
    printf("\nImprimindo lista:\n");
    if (ref == NULL) {
        printf("Lista vazia\n");
        return;
    }
    for (P = ref; P != NULL; P = P->prox)
        printf("%d ", P->info);
    printf("\n");
}

/* Função para remover um elemento da lista */
Lista* remover(Lista* ref, int valor) {
    Lista* anterior = NULL;
    Lista* P = ref;

    /* Percorre a lista até encontrar o valor ou chegar ao final */
    while (P != NULL && P->info != valor) {
        anterior = P;
        P = P->prox;
    }

    /* Se não encontrou o valor, retorna a lista original */
    if (P == NULL) {
        printf("Valor %d não encontrado na lista.\n", valor);
        return ref;
    }

    /* Se for o primeiro elemento */
    if (anterior == NULL) {
        ref = P->prox;
    } else {
        anterior->prox = P->prox;
    }

    free(P);
    return ref;
}

/* Função principal */
int main() {
    Lista* ref = criarLista();
    ref = insere(ref, 10);
    ref = insere(ref, 15);
    ref = insere(ref, 17);
    ref = insere(ref, 1);
    ref = insere(ref, 12);
    ref = insere(ref, 7);

    imprimir(ref);

    ref = remover(ref, 15);
    
    imprimir(ref);

    return 0;
}

