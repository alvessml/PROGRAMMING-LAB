#include <stdio.h>

int main(){
    int ent_usuário;

    puts("Digite um número de 1 á 7 para imprimir o dia da semana: ");
    ent_usuário = getchar();     
    
    if (1 <= ent_usuário <= 7){

        switch (ent_usuário)
        {
        case '1':
            puts("Dia da semana é: Domingo. \n");
            break;
        case '2':
            puts("Dia da semana é: Segunda-feira. \n");
            break;
        case '3':
            puts("Dia da semana é: Terça-feira. \n");
            break;
        case '4':
            puts("Dia da semana é: Quarta-feira. \n");
            break;
        case '5':
            puts("Dia da semana é: Quinta feira");
            break;
        case '6':
            puts("Dia da semana é: Sexta-feira. \n");
            break;
        case '7':
            puts("Dia da semana é: Sábado. \n");
            break;

        default:
            puts("Erro. Número não correspondente à algum dia da semana. Digite novamente. \n");
            break;
        }
    else:

    }
    return 0;
}