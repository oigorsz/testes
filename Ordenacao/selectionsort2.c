//SELECTION SORT FIRST TESTE

#include <stdio.h>
#include <stdlib.h> //INCLUINDO BIBLIOTECAS EM LINGUAGEM C

//IMPRIMIR O ARRAY
void printArr(int arr[], int n){
    int i;

    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}

//ORDENAR ARRAY

void selectionSort(int *arr, int n){
    int i, j, min_index, temp;

    for(i = 0; i < n-1; i++){
        min_index = arr[i];

        for(j = i + 1; j < n; j++){
            if(arr[j] < arr[min_index]){
                min_index = j;
            }
        }

        temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}

int main(void){
    int arr[] = {7, 2, 9, 4, 1, 6};
    int n = sizeof(arr)/sizeof(arr[0]); //FORNECE O TAMANHO DO VETOR
    system("cls");

    printf("ARRAY ORIGINAL:\n");
    printArr(arr, n);

    selectionSort(arr, n);

    printf("\nARRAY ORDENADO:\n");
    printArr(arr, n);


    return 0;
}