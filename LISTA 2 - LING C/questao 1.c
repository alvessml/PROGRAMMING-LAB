#include <stdio.h>

int main(){
    int ent_usuário;

    puts("Digite um número de 1 á 7 para imprimir o dia da semana: ");
    ent_usuário = getchar();     
    
    switch (ent_usuário)
        {
        case '0':
            break;
        case '1':
            puts("Dia da semana é: Domingo. \n");
        case '2':
            puts("Dia da semana é: Segunda-feira. \n");
        case '3':
            puts("Dia da semana é: Terça-feira. \n");
        case '4':
            puts("Dia da semana é: Quarta-feira. \n");
        case '5':
            puts("Dia da semana é: Quinta feira. \n");
        case '6':
            puts("Dia da semana é: Sexta-feira. \n");
        case '7':
            puts("Dia da semana é: Sábado. \n");

        default:
            puts("Erro. Número de dia não válido. \n");
            break;
        }
    return 0;
}