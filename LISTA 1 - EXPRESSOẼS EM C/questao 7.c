#include <stdio.h>

int main(){
    int h, m, s, segundos;

    puts("Horas: ");
    scanf("%d", & h);

    puts("Minutos: ");
    scanf("%d", & m);

    puts("Segundos: ");
    scanf("%d", & s);

    segundos = (3600 * h) + (60 * m) + s;

    printf("A quantidade em segundos é: %d segunos. \n", segundos);

    return 0;
}