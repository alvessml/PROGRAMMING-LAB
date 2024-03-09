#include <stdio.h>

int main(){
    int v_aula, horas_t;
    double salario_b, salario_l;

    printf("Digite o valor da aula por hora: \n");
    scanf("%d", & v_aula);

    printf("Digite quantas horas você trabalhou durante um mês: \n");
    scanf("%d", & horas_t);

    salario_b = v_aula * horas_t;

    printf("O valor do slário bruto é R$%.2lf \n", salario_b);

    if(salario_b <= 1412){
        salario_l = salario_b - (salario_b * 0.075);
        
        printf("Salário líquido: R$%.2lf, já descontado o INSS.\n", salario_l);
    } else if(1412 < salario_b <= 2666.68){
        salario_l = salario_b - (salario_b * 0.09);

        printf("Salário líquido: R$%.2lf, já descontado o INSS.\n", salario_l);
    } else if(2666.68 < salario_b <= 4000.03){
        salario_l = salario_b - (salario_b * 0.12);

        printf("Salário líquido: R$%.2lf, já descontado o INSS.\n", salario_l);
    } else{
        salario_l = salario_b - (salario_b * 0.14);

        printf("Salário líquido: R$%.2lf, já descontado o INSS.\n", salario_l);
    }

    return 0;
}