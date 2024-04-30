#include <stdio.h>

int main(){

    int jose = 150;
    int pedro = 110;
    int anos = 0;
    while(pedro <= jose){
        jose += 2;
        pedro += 3;
        anos ++;
    }

    printf("\n\nCom %d anos depois que Pedro será maior que José. Tendo Pedro %d centimetros e José %d centimentros\n\n", anos, pedro, jose);

    return 0;
}


