#include <stdio.h>

/* Funções
Forma correta de se usar função:

int func(int a, int b);


- ARGUMENTOS X PARÂMETROS:
São valores passados na chamada da função:

ex: 
    // isso é PARÂMETROS formais.
int soma(int a; int b;){
} return a + b;

    // isso é ARGUMENTOS
s = soma(2, 3);


- CHAMADA POR VALOR x CHAMADA POR REFERÊNCIA
-- Chamada por valor
int main(){
    int t = 10;
    printf("%d %d", qd(t), t);
}

int qd(int x){
    x = x*x;    
    return x;
}

saída: 100 10


-- Chamada por referência
int main(){
    int t = 10;
    printf("%d %d", qd(&t), t);
}

int qd(int *x){
    *x = (*x)*(*x);    
    return *x;
}

saída: 100 100



Moral das duas:
Se passar por referência altera o enderêço da função; 
Se passar por valor altera somente local da print;
*/



/* Argc e Argv - argumentos para main()
argc - quantidade de argumentos passados. Assume valores
maiores ou igual a 1. O nome do programa ́e contado como 
argumento.

argv - ́e um ponteiro para uma matriz de ponteiros para
caractere.

ex de uso:

int main(int argc, char argv[]){
}*/



/* PROTÓTIPO DE FUNÇÕES
É uma definição de uma função sem a sua implementação. Ou
seja, permite que a quantidade e os tipos de argumentos sejam
declarados.

ex:
int soma(int, int);

int main(){
...
}

int soma(int a, int b){
    return a + b;
}
*/