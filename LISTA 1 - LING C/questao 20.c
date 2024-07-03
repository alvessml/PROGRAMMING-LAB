#include <stdio.h>


int main(){
    int x;

    printf("Digite um número: ");
    scanf("%d", & x);

    printf("\nO número digitado é %s.\n", (x % 2 == 0)? "par": "Impar");


    return 0;
}