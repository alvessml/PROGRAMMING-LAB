#include <stdio.h>
#include <math.h>


int main(){
    float xi, xf, yi, yf;

    //  USUÁRIO
    printf("Digite as coordenadas de xi, yi do primeiro ponto e xf, yf do segundo ponto: \n");
    
    printf("xi: ");
    scanf("%f", & xi);
    
    printf("\nyi: ");
    scanf("%f", & xf);
    
    printf("\nxf: ");
    scanf("%f", & yi);
    
    printf("\nyf: ");
    scanf("%f", & yf);


    //  PROCESSAMENTO 
    float d;
    d = sqrt(pow((xf - xi), 2) + pow((yf - yi), 2));


    //  IMPRIMIR
    printf("\n\nA distancia do primeiro ponto(xi:%.0f e yi:%.0f) e o segundo ponto(xf: %.0f e yf:%.0f) é igual a: %.2f\n", xi, yi, xf, yf, d);

    return 0;
}