#include <stdio.h>

int main(){
    int usuario, votoPedro = 0, votoRenata = 0, votoBranco = 0, votoNulo = 0, votoTotal = 0;
    char confirmaVoto;


    // --------------------- LEITURA DE ENTRADA ---------------------

    printf("URNA ELETRÕNICA:\n");
    while(1){
        puts("Digite:\n5 - para votar em Pedro;\n7 - para votar em Renata;\n0 - para votar em branco;\nDigite qualquer número maior que 0 e diferente de 5 e 7 - para votar nulo;\nDigite qualquer número menor que 0 - para encerrar a votação:");
        scanf("%d", & usuario);

        // --------------------- VOTO BRANCO ---------------------

        if(usuario == 0){
            puts("\n\nVocê confirmar seu voto(sim - s; não - n)? ");
            scanf(" %c", & confirmaVoto);
            if(confirmaVoto == 's'){
                votoBranco += 1;
                votoTotal += 1;
            } else {
                printf("\n========================================\n");  
                continue;
            }
        
        // --------------------- VOTO NULO ---------------------

        } else if(usuario > 0 && usuario != 5 && usuario != 7){
            puts("\nVocê confirmar seu voto(sim - s; não - n)? ");
            scanf(" %c", & confirmaVoto);
            if(confirmaVoto == 's'){
                votoNulo += 1;
                votoTotal += 1;
            } else {
                printf("\n========================================\n");  
                continue;
            }

        // --------------------- VOTO PEDRO ---------------------

        } else if(usuario == 5){
            puts("\n\nVocê confirmar seu voto(sim - s; não - n)? ");
            scanf(" %c", & confirmaVoto);
            if(confirmaVoto == 's'){
                votoPedro += 1;
                votoTotal += 1;
            } else {
                printf("\n========================================\n");  
                continue;
            }

        // --------------------- VOTO RENATA ---------------------

        } else if(usuario == 7){
            puts("\n\nVocê confirmar seu voto(sim - s; não - n)? ");
            scanf(" %c", & confirmaVoto);
            if(confirmaVoto == 's'){
                votoRenata += 1;
                votoTotal += 1;
            } else {
                printf("\n========================================\n");  
                continue;
            }
        } else {
            break;
        }
        printf("\n========================================\n");        
    }



    // --------------------- PROCESSAMENTO ---------------------

    float porcentVotoPedro, porcentVotoRenata, porcentVotoBranco, porcentVotoNulo;

    porcentVotoPedro = ((float)votoPedro/votoTotal)*100;
    porcentVotoRenata = ((float)votoRenata/votoTotal)*100;
    porcentVotoBranco = ((float)votoBranco/votoTotal)*100;
    porcentVotoNulo = ((float)votoNulo/votoTotal)*100;

    puts("\n\n\nPorcentagem de votos: ");
    printf("\n%.2f%% de votos para o candidato Pedro.", porcentVotoPedro);
    printf("\n%.2f%% de votos para a candidato Renata.", porcentVotoRenata);
    printf("\n%.2f%% de votos em brancos.", porcentVotoBranco);
    printf("\n%.2f%% de votos em nulos.", porcentVotoNulo);
    


    // --------------------- SAÍDA ---------------------

    if(porcentVotoPedro > porcentVotoRenata){
        puts("\n\nCANDIDATO ELEITO É PEDRO!");
    } else if(porcentVotoRenata > porcentVotoPedro){
        puts("\n\nCANDIDATO ELEITO É RENATA!");
    } else{
        printf("\n\nOS DOIS CANDIDATOS ESTÃO EMPATADOS EM PORCENTAGENS DE VOTOS COM %d%% PARA OS DOIS\n", votoPedro);
    }

    return 0;
}
