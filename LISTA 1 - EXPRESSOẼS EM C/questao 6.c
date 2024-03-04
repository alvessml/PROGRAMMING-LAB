#include <stdio.h>

int main() {
    float h, p, imc;

    puts("Digite sua altura: ");
    scanf("%f", & h);

    puts("Digite seu peso: ");
    scanf("%f", & p);
    
    imc = p / (h*h);

    printf("Seu imc: %.2f\n", imc);

    return 0;
}