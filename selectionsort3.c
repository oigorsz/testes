#include <stdio.h>
#include <stdlib.h>

void printArr(int *arr, int n){
    int i;

    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}

void selectionSort(int *arr, int n){
    int i, j, min_index, temp;

    for(i = 0; i < n - 1; i++){
        min_index = i;

        for(j = i + 1; j < n; j++){
            if(arr[j] < arr[min_index]){
                min_index = j;
            }
        }

        //ATUALIZAÇÃO DOS VALORES
        temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}

int main(void){
    int arr[] = {39, 18, 2, 74, 0, -23, 51, -3, -2, -257};
    int n = sizeof(arr)/sizeof(arr[0]);

    system("cls");

    printf("ARRAY ORIGINAL: ");
    printArr(arr, n);

    selectionSort(arr, n);

    printf("\nARRAY ORDENADO:");

    printArr(arr, n);

    return 0;
}