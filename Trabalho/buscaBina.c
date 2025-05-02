#include <stdio.h>

int buscabinaria(int array[],int tamanho,int elemento){
    int inicio = 0;
    int fim = tamanho - 1;

   while (inicio <= fim)
   {
    int meio = (inicio + fim) /2;

    if(array[meio] == elemento){
        return meio;
    }
    else if (array[meio] < elemento){
        inicio = meio + 1;

    }
    else{
        fim = meio -1;
    }
  
   }
   return -1;

}

int main(){
    int array[] = {2,4,6,8,10,12,14,16,20};
    int tamanho = sizeof(array) /sizeof(array[0]);
    int elemento = 16;

    int buscador = buscabinaria(array,tamanho,elemento);

    if(buscador != -1){
        printf("Elemento %d encontrado no indice %d.\n",elemento,buscador);
    }
    else{
        printf("Elemento %d nao encontrado.\n",elemento);
    }
    return 0;
}