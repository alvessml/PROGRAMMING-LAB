#include <stdio.h>

#define TAM 100

int main(){
    char str[TAM], ch;

    puts("Forneça uma string: ");
    fgets(str, TAM, stdin);

    // Soluçãõ imcompleta (exercício)-> testar com string menor que o tamanho
    while (getchar() != '\n'); // Trata possíveis execessos de caracteres no buffer
    

    puts("\nForneça um caractere: ");
    ch = getchar();
    // scanf("%c", & ch);


    //=====PROCESSAMENTO=====

    printf("\nString de entrada: %s", str);

    int k=0;
    int seEncontrou = 0;

    while (str[k] != '\0'){
        if (str[k] == ch){
            seEncontrou = 1;
            break;
        }
        k++;
    }

    printf("\nCaractere a ser buscado: %c", ch);

    if (seEncontrou == 1){ 
        printf("\n%c encontrado na string: %s", ch, str);
    }

    return 0;
}