#include <stdio.h>
#include <stdlib.h>

void printArr(int *arr, int n){
    int i;

    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}

void bubbleSort(int *arr, int n){
    int i, j, temp;

    for(i = 0; i < n - 1; i++){
        for(j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(){
    int arr[] = {39, 18, 2, 74, 0, -23, 51, -3, -2, -257};
    int n = sizeof(arr)/sizeof(arr[0]);

    system("cls");

    printf("ARRAY ORIGINAL: ");
    printArr(arr, n);

    //ORDENADAÇÃO
    bubbleSort(arr, n);

    printf("\nARRAY ORDENADO: ");
    printArr(arr, n);
    return 0;
}