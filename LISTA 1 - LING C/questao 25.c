#include <stdio.h>


int main(){
    int x, horas, minutos, segundos;

    printf("Digite quantos segundos para converte em (hh/mm/ss): ");
    scanf("%d", & x);

    horas  =  x / 3600;
    minutos = (x % 3600) / 60;
    segundos = x % 60;

    printf("\n%d segundos em (hh/mm/ss): %2.2d:%2.2d:%2.2d \n", x, horas, minutos, segundos);

    return 0;
}