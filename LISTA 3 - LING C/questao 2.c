#include <stdio.h>
#include <ctype.h>
#include <string.h>


int main(){
    char string[100];
    char caractere;

    printf("Digite uma string qualquer: ");
    scanf("%s", string);

    printf("Digite um caractere, para saber se contém na string: ");
    scanf(" %c", &caractere);

    char caractMaiúsc = toupper(caractere);
    
    int encontrado = 0;    
    for(int k=0; k < strlen(string); k++){
        string[k] = toupper(string[k]);
        if(caractMaiúsc == string[k]){
            encontrado = 1;
            break;
        }
    }

    if(encontrado == 1){
            printf("Estar contido na string\n");
        } else{
            printf("NÃO ESTAR contido na string\n");
        }
    return 0;
}