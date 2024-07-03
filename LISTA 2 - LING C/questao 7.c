#include <stdio.h>


int main(){
    float n1, n2;

    puts("Digite o primeiro número: ");
        scanf("%f", & n1);

    while(1){
        puts("Digite o segundo número: ");
        scanf("%f", & n2);

        if(n2 == 0){
            puts("\nDigite um número maior que 0 no segundo número!\n");
            continue;
        } else{
            break;
        }
    }

    float div = n1 / n2;

    printf("\nA divisão de %.2f por %.2f resultará em %.2f\n", n1, n2, div);

    return 0;
}