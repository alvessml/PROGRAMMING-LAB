#include <stdio.h>
#include <math.h>


int main(){

    // USUÁRIO
    float x, y, z;

    printf("Digite três números flutuantes: ");
    scanf("%f %f %f", & x, & y, & z);

    
    // PROCESSAMENTO
    float media_aritmetica, media_geometrica;

    media_aritmetica = (x + y + z) / 3;

    media_geometrica = pow((x, y, z), 1.0 / 3);
    
    
    // IMPRIMIR
    printf("A media aritmética de %d, %d e %d é %d \n", x, y, z, media_aritmetica);

    printf("A media geométrica de %d, %d e %d é %.2f \n", x, y, z, media_geometrica);

    return 0;
}