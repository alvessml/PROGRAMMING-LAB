#include <stdio.h>
#include <math.h>


int main(){
    for(int expoente = 0; expoente <= 7; expoente++){
        int resultado = pow(3, expoente);
        printf("3^%d = %d\n", expoente, resultado);
    }
    return 0;
}