#include <stdio.h>

int main(){
    float c, l, a, volume;

    puts("Digite o comprimento da caixa retangular: ");
    scanf("%f", & c);

    puts("Digite a largura da caixa retangular: ");
    scanf("%f", & l);

    puts("Digite a altura da caixa retangular: ");
    scanf("%f", & a);

    volume = c * l * a;

    printf("O volume da caixa retangular é: %.2f \n", volume);

    return 0;
}