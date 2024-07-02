#include <stdio.h>
#include <string.h>

#define TAM 10

int main(){

    char str[TAM], caractere;
    // ou char str[]="Samuel"; -> forma de inicializar
    // ou char str[] = {'S', 'a', 'm', 'u', 'e', 'l', '\0'}/; -> outra forma de inicializar

    fgets(str, TAM, stdin); 
    // ou scanf("%s", str);
    // problema: que dará erro, pois quando houver espaço ele irá imprimir até o espaço
    // Resolver: scanf("%[^\n]s", str); -> irá aceitar e espaço e outros, menos o \n;

    printf("%s\n", str); // Obs: ele irá contar entre os 10 o \n também

    printf("\nQuantidade de caracteres: %ld", strlen(str));

    puts("\n\n======\n");

    for(int k=0; k < TAM; k++){
        printf("%d\n", str[k]);
    }


    char str1[]="Samuel Alves de Andrade";
    printf("\nCom 'strlen' irá imprimir todos os caracteres: \n");
    
    for(int k=0; k < strlen(str1); k++){
        printf("%d\n", str1[k]);
    }

    return 0;
}