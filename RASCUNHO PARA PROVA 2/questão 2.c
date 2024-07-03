#include <stdio.h>
#include <string.h>

int main(){
    char string[100], c;

    printf("Digite uma string qualquer: ");
    scanf("%s", string);

    printf("Digite um carctere para ser feito a contagem de quantos possui na string: ");
    scanf("%c", & c);

    int tamanho = strlen(string);

    for(int i = 0; i < tamanho; i++);




    printf("String digitada é: %s", string);

    return 0;
}