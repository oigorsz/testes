#include <stdio.h>
#include <stdlib.h>

int main(void){
    int values[] = {10 , 2, 3, 45, 5};
    int menor, maior, i;

    system("cls");//LIMPAR O TERMINAL

    menor = values[0]; //TER O PRIMEIRO ELEMENTO COMO REFERENCIA
    maior = values[0];

    for(i = 1; i < 5; i++){
        if(values[i] < menor){
            menor = values[i];
        }

        if(values[i] > maior){
            maior = values[i];
        }
    }

    printf("O menor valor e: %d\n", menor);
    printf("O maior valor e %d\n", maior);
    return 1;
}