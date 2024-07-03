#include <stdio.h>


int main(){
    int UsuaValor, maior, menor;

    puts("Digite um valor(0 para sair): ");
    scanf("%d", & UsuaValor);

    if(UsuaValor != 0){
    //  iniciará maior e menor sendo igual ao primeiro número digitado
        maior = menor = UsuaValor; 

        while(UsuaValor != 0){
            if(UsuaValor > maior){
                maior = UsuaValor;
            } else {
                menor = UsuaValor;
                }
            scanf("%d", & UsuaValor);
        }
    }

    printf("\nMaior valor é %d e o Menor valor é %d \n\n", maior, menor);

    return 0;
}