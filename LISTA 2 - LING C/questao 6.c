#include <stdio.h>

int main(){
    int votacao;
    while(votacao == 1){
        int usuario, votoPedro = 0, votoRenata = 0, votoTotal = 0, votoBranco = 0, votoNulo = 0;

        puts("Digite 5 para votar em Pedro e 7 para votar na Renata (obs: 0 - voto em branco; Quarquer tecla a mais positivo - voto nulo): ");
        scanf("%d", & usuario);

        if(usuario < 0){
            votacao = 0;
        } else if(usuario == 5){
            votoPedro += 1;
        } else if(usuario == 7){
            votoRenata += 1;
        } else if(usuario == 0){
            votoBranco += 1;
        } else if(usuario != 7 && usuario != 5 && usuario > 0){
            votoNulo += 1;
        }
    }

    return 0;
}
