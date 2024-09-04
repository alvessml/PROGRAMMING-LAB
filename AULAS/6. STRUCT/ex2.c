#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Struct pode ser alocado dentro da função, porém vai ficar limitado
// a função colocada.


struct Coordenadas{
    int x; 
    int y;
}; // Struct termina com ";", pois é um comando.


void calcularDistancia(struct Coordenadas a, struct Coordenadas b, float *d);

int main(int argc, char **argv){
    struct Coordenadas c1, c2;
    int d;

    if( argc != 5){
        printf("Formato: \n\t\t %s <x1> <y1> <x2> <y2> \n", *argv);
        exit(1);
    } 

    c1.x = atoi(*(argv+1));
    c1.y = atoi(*(argv+2));

    c2.x = atoi(*(argv+3));
    c2.y = atoi(*(argv+4));

    d = calcularDistancia(c1, );

    printf("Distancia entre os pontos c1(%d, %d) e c2(%d, %d): %.2f\n", c1.x, c1.y, c2.x, c2.y, distancia);

    return 0;
}



void calcularDistancia(struct Coordenadas a, struct Coordenadas b, float *const pd){
    *pd = sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
}