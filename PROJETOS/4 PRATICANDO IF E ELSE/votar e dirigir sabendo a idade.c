#include <stdio.h>


int main(){
    //int idade;
    // ou
    unsigned char idade;

    puts("Digite sua idade: ");
    scanf("%hhu", & idade);

    // if(idade >= 18) {
    //     printf("Você pode votar e dirigir! \n");
    // } else if (idade >= 16) {
    //     printf("Você pode votar! \n");
    // } else {
    //     printf("Você não pode votar e nem dirigir! \n");
    // }

    // OU

    // if (idade < 16) {
    //     puts("Não votar, não dirigir.");
    // } else if ( (idade >= 16) && (idade < 18)) { // ou // else if (idade < 18) { ...
    //     puts("Votar, não dirigir");
    // } else {
    //     puts("Votar, dirigir");
    // }

    // OU

    if (idade < 16) puts("Não votar, não dirigir.");
    else if ( (idade >= 16) && (idade < 18)) puts("Votar, não dirigir"); // ou // else if (idade < 18) { ...
    else puts("Votar, dirigir");

    return 0;
}