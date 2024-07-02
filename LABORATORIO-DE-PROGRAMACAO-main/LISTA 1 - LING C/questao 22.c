#include <stdio.h>

int main(){
    char caractere;

    printf("Digite algum número inteiro, ou letras maiúsculas, ou minúsculas ou algum simbolo para saber o inteiro que representa: ");
    scanf("%c", & caractere);

    printf("O inteiro equivalente a \"%c\" é %d. \n", caractere, caractere);

    return 0;
}