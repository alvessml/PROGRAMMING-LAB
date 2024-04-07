#include <stdio.h>


int main(){
    int x, horas, minutos, segundos;

    printf("Digite quantos segundos para converte em (hh/mm/ss): ");
    scanf("%d", & x);

    horas = x / 60;

    minutos = (x % 60) / 60;
    for(int k = 0; k < 60; )
        segundos = x / 60;

    printf("\n%d segundos em (hh/mm/ss): %d:%d:%d \n", x, horas, minutos, segundos);

    return 0;
}