#include <stdio.h>
#include <stdlib.h>

int main(void){
    int values[] = {1 , 2, 3, 4, 5};
    int num, i;

    system("cls");//LIMPAR O TERMINAL

    printf("Number: ");
    scanf("%d", &num);

    for(i = 0; i < 5; i++){
        if(values[i] == num){
            printf("Found");
            return 0;
        }
    }

    printf("Not Found");
    return 1;
}