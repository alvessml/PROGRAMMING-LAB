#include <stdio.h>

#define TAM 3 //macro

int main(){
    float notas[TAM], soma, total, nota_total;

    soma = 0;
    for(int x=0; x < TAM; x++){
        printf("Digite a nota %d\n", x+1);
        scanf("%f", & notas[x]);
        total += notas[x];
    }

    nota_total = total / TAM;


    if(nota_total >=7){
        printf("Aprovou! Com nota %.2f\n", nota_total);
    } else {
        printf("Reprovou! Com nota %.2f.\n", nota_total);
    }

    return 0;
}

