#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct lista{
		
		int info;
		
		struct lista* prox;
	};
	
	typedef struct lista Lista;
	
	Lista* criaLista(){
		return NULL;
		
	}
	
	
		Lista*insere(Lista*ref, int valor){
			Lista* novoNo= (Lista*)malloc(sizeof(Lista));
			novoNo->info = valor;
			novoNo->prox=ref;
			ref=novoNo;
			return ref;
		}
		void imprimir (Lista* ref){
			Lista* p;
			printf("\nImprimindo a lista:\n");
			if (ref == NULL){
				printf("Lista Vazia!");
				return;
			}
			for (p=ref; p !=NULL; p = p->prox)
				printf("%d ", p->info);
		}
		
			//Remoção

		Lista* deleta(Lista* ref, int valor){
			Lista* ant = NULL;
			Lista* p = ref;
			while(p !=NULL && p->info !=valor){
				ant = p;
				p = p -> prox;
		int		if (p == NULL) //elemento nao encontrado
			return ref;
		//remove primeiro elemento
		if (p == ref)
			ref=p->prox;
		else //remove do meio ou fim da lista
			ant->prox = p->prox;
		free(p);
		return ref;
		}
		};
		
		int main(){
		Lista* ref = criaLista();
		ref=insere(ref,10);
		ref=insere(ref,15);
		ref=insere(ref,17);
		ref=insere(ref,1);
		ref=insere(ref,12);
		ref=insere(ref,7);
		imprimir(ref);
		ref=deleta(ref,15);
		imprimir(ref);
	}
	return 0;
}
