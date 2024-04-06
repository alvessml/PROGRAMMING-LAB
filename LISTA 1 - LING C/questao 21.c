#include <stdio.h>


int main(){
    int x, y;

    printf("Digite um número inteiro: ");
    scanf("%d", & x);

    printf("Digite outro número inteiro: ");
    scanf("%d", & y);

    printf("\nO primeiro número %s mútiplo do segundo. \n", (x % y == 0)? "é" : "não é");


    return 0;
}