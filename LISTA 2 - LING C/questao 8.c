#include <stdio.h>


int main(){
    float v_produto, entrada, prestacao;

    puts("Digite o valor do produto: ");
    scanf("%f", & v_produto);

    prestacao = (v_produto / 3);
    entrada = v_produto - (2 * prestacao);

    printf("\nO valor da entrada será %.2f e o valor das duas prestações será %d\n", entrada, prestacao);

    return 0;
}