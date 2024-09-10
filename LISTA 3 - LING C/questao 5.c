#include <stdio.h>
#include <string.h>

#define TAM 80

int main(){
    char string1[TAM], string2[TAM];

    printf("Digite uma string qualquer: ");
    scanf("%s", string1);
    
    printf("Digite uma outra string qualquer: ");
    scanf("%s", string2);

    // strcat(string1, " ");
    // strcat(string1, string2);

    // puts("Strings concatenadas COM o uso da função strcat(): ");
    // printf("%s\n", string1);

    printf("String concatenadas SEM o uso da função strcat(): \n");
    printf("%s %s\n", string1, string2);

    return 0;
}