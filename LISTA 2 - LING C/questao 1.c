#include <stdio.h>

int main(){
    unsigned char ent_usuário, ent;

    // puts("Digite um número de 1 á 7 para imprimir o dia da semana: ");
    // ent_usuário = getchar();     

    while (1){
        puts("Digite um número de 1 á 7 para imprimir o dia da semana: ");

        ent_usuário = getchar();    
        
        switch (ent_usuário)
            {
            case '0':
                return 0;
            case '1':
                puts("Dia da semana é: Domingo. \n");
                continue;
            case '2':
                puts("Dia da semana é: Segunda-feira. \n");
                continue;
            case '3':
                puts("Dia da semana é: Terça-feira. \n");
                continue;
            case '4':
                puts("Dia da semana é: Quarta-feira. \n");
                continue;
            case '5':
                puts("Dia da semana é: Quinta feira. \n");
                continue;
            case '6':
                puts("Dia da semana é: Sexta-feira. \n");
                continue;
            case '7':
                puts("Dia da semana é: Sábado. \n");
                continue;

            default:
                puts("Erro. Número de dia não válido. \n");
                continue;
            }
        }
    return 0;
}