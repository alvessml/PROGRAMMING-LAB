#include <stdio.h>

int main() {
    int dias;
    double salariob, salariol;

    printf("Quantos dias trabalhados? ");
    scanf("%d", & dias);

    salariob = 50.25 * dias;

    if(dias < 10){
        salariol = salariob - (salariob * 0.1);

        printf("O valor líquido á receber será de R$%.2lf, com 10%% de desconto de imposto de renda incluso. \n", salariol);
    } else if(10 < dias < 20){
        salariob = salariob + (salariob * 0.2);

        salariol = salariob - (salariob * 0.1);

        printf("O valor líquido á receber será de R$%.2lf, com 10%% de desconto de imposto de renda incluso. \n", salariol);
    } else{
        salariob = salariob + (salariob * 0.3);

        salariol = salariob - (salariob * 0.1);

        printf("O valo líquido á receber será de R$%.2lf, com 10%% de desconto de imposto de resnda incluso. \n", salariol);
    }


    return 0;
}