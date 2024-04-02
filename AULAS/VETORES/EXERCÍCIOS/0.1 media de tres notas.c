#include <stdio.h>

#define TAM 3 //macro

int main(){
    float notas[TAM], soma_tot, nota_total;

    soma_tot = 0;
    for(int x=0; x < TAM; x++){
        printf("Digite a nota %d: ", x+1);
        scanf("%f", & notas[x]);
        soma_tot += notas[x];
        printf("\n");
    }
    nota_total = soma_tot / TAM;


    if(nota_total >=7){
        printf("Aprovado! Com nota %.2f\n", nota_total);
    } else {
        printf("Reprovou! Com nota %.2f.\n", nota_total);
    }

    return 0;
}

