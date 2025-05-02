#include <stdio.h>

int Ordena(int array[],int tamanho){
    for(int i = 0;i < tamanho -1; i++){
        if(array[i] > array[i + 1]){
            return 0;
        }
    }
    return  1;
}
int main(){
    int array[] = {2, 4, 6, 8, 10, 12, 14, 16,20};
    int tamanho = sizeof(array) / sizeof(array[0]);

    if(Ordena(array,tamanho)){
        printf("O ARRAY esta ordenado em crescente.\n!");
    }
    else{
        printf("O ARRAY  nao está ordenado!.\n");
    }
    return 0;
}