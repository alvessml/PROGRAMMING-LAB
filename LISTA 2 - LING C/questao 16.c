#include <stdio.h>


int main(){
    int somatorioDiv3;
    for(int i = 0; i <= 100; i++){
        if(i % 3 == 0){
            somatorioDiv3 += i;
        }
    }
    
    printf("Somatório dos números divisíveis por 3 no intervalo de 0 a 100 é %d.\n", somatorioDiv3);


    int somatorioDiv5;
    for(int i = 100; i <= 200; i++){
        if(i % 5 == 0){
            somatorioDiv5 += i;
        } 
    }
    printf("Somatório dos núemros divisíveis por 5 no intervalo de 100 a 200 é %d.\n", somatorioDiv5);

    return 0;
}