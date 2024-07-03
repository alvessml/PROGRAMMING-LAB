#include <stdio.h>

int main(){
    double c, f;

    puts("Entre com uma temperatura em celsius: ");
    scanf("%lf", & c);

    f = (9 * c + 160) / 5;

    printf("A temperatura de %.1lf°C para Fahrenheit é %.1lf°F \n", c, f);

    return 0;
}