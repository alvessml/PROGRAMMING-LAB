#include <stdio.h>
#include <ctype.h>


int main(){
    char string[80];

    printf("Digite uma string qualquer: ");
    scanf("%s", string);
    // fgets(string, sizeof(string), stdin);

    int i = 0, contador = 0;
    while(string[i] != '\0' && string[i] != '\n'){
        contador += 1;
        i++;
    }

    printf("A string possui %d caracteres.\n", contador);

    return 0;
}