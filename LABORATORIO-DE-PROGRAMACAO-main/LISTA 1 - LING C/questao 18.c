#include <stdio.h>
#include <math.h>

int main(){
    double raio, pi = 3.14, diametro, v_circunferencia, area;

    printf("Digite um raio qualquer de uma circunferência: ");
    scanf("%lf", & raio);

    diametro = 2 * raio;

    v_circunferencia = 2 * pi * raio;

    area = pi * pow(raio, 2);

    printf("\nO diâmetro da circunferência é %.2lf, valor da circunferência é %.2lf e à área da circunferência %.2lf. \n", diametro, v_circunferencia, area);


    return 0;
}