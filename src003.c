//SELECTION SORT - ALGORITIMOS DE ORDENAÇÃO
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int array [] = {7, 4, 6, 5, 8, 2, 1, 3};
    int minimo,index_min, aux, i, j, length_array;
    length_array = 8;

    system("cls");

    minimo = array[0]; //INICIAR COM UM VALOR DE REFERENCIA

    for(i = 1; i < length_array - 1; i++){
        index_min = i; //INICIAR COM UM INDICE DE REFERENCIA

        //ENCONTRAR O INDICE DE MENOR VALOR
        for(j = i + 1; j < length_array - 1; j++){
            if(array[j] < minimo){
                index_min = j;
            }
        }

        if(array[i] > array[index_min]){
            //OCORRE A TROCA DE POSIÇÃO
            aux = array[i];
            array[i] = array[index_min];
            array[index_min] = aux;
        }
        
    }

    for(i = 0; i < length_array; i++){
        printf("%d ", array[i]);
    }

    return 0;
}
