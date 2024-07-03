#include <stdio.h>

int main(){
    unsigned char ent_usuário;   

    puts("Digite um número de 1 á 7 para imprimir o dia da semana: ");   
    
    while (1){    
        ent_usuário = getchar();
        getchar();

        if (ent_usuário >= '0' && ent_usuário <= '7'){
            switch (ent_usuário)
                {
                case '0':
                    return 0;

                case '1':
                    puts("Dia da semana é: Domingo.");
                    printf("------------------------------\n");
                    break;

                case '2':
                    puts("Dia da semana é: Segunda-feira.");
                    printf("------------------------------\n");
                    break;
                    
                case '3':
                    puts("Dia da semana é: Terça-feira.");
                    printf("------------------------------\n");
                    break;                
                case '4':
                    puts("Dia da semana é: Quarta-feira.");
                    printf("------------------------------\n");
                    break;

                case '5':
                    puts("Dia da semana é: Quinta feira.");
                    printf("------------------------------\n");
                    break;

                case '6':
                    puts("Dia da semana é: Sexta-feira.");
                    printf("------------------------------\n");
                    break;

                case '7':
                    puts("Dia da semana é: Sábado.");
                    printf("------------------------------\n");
                    break;
                }
        }else{
                printf("Número de dia não válido!\n");
                printf("------------------------------\n");
            }
        }
    return 0;
}