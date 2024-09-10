#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define TAM 80

int main(){
    char string1[TAM], string2[TAM];

    printf("Digite uma string qualquer: ");
    scanf("%s", string1);

    printf("Digite uma outra string qualquer: ");
    scanf("%s", string2);

    /*
    !!!! CURIOSIDADE:
    - Se o caractere da str A tem o valor menor que o str B (ele retorna um número menor que 0);
    - Se o caractere da str A tem o valor igual a str B (ele retorna um número igual a 0);
    - Se o caractere da str A tem o valor maior que o str B (ele retorna um número maior que 0).
    */
    // if(strcmp(string1, string2) == 0){
    //     printf("As strings digitadas são iguais!\n");
    // } else{
    //     printf("As strings digitadas NÃO são iguais.\n");
    // }

    if(strlen(string1) != strlen(string2)){
        printf("As strings digitadas NÃO são iguais.\n");
    } else{
        int condicaoString = 1;
        for(int k=0; k < strlen(string1); k++){
            if(toupper((string1[k])) != toupper(string2[k])){
                condicaoString = 0;
            }
        }
        if(condicaoString){
            printf("As strings digitadas são iguais!\n");
        } else{
            printf("As strings digitadas NÃO são iguais.\n");
        }
    }

    return 0;
}