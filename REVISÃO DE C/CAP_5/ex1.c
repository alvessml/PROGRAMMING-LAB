#include <stdio.h>


/* Ponteiros

Razões p/ usar:
- Permitem mudar os argumentos das funções;
- Manipular as rotinas de alocação dinâmica;
- Aumentar a eficiência do programa.

-- Definição
- Ponteiro é uma variável que contém um endereço de memória. 
- O conteúdo dessa variável é a posiçã de outra variável na memória.
- Assim o ponteiro aponta para outra variável quando contém o endereço desta.

-- Sintaxe:
<tipo> *nome_identificador;

-- Inicializar:
<nome_identificador> = NULL;
*/


/* Ex: Manipulando ponteiros: 
*/

// int main(){
//     int x = 100; 
//     int *p = &x; // p aponta pra x

//     printf("Endereço de x na memória é %p\n", &x); // resultado é o endereço qualquer alocado na memória
//     printf("Endereço de x na memória é %p\n", p); // resultado é o endereço de x, pois *p aponta para x
//     printf("Valor de x é %d\n", x); // resultado é 100
//     printf("Valor de x é %d\n", *p); // resultado é 100

// }


// int main(){
//     int x = 100;
//     int *p1, *p2;

//     p1 = &x;
//     p2 = p1;

//     printf("%d\n",*p1); /*mostrará o valor 100*/
//     printf("%d\n",*p2); /*mostrará o valor 100*/
//     printf("%p\n", p1); /*mostrará o endereço de x, pois p1 aponta para x.*/
//     printf("%p\n",p2); /*mostrará o endereço de x, pois p2 aponta para x.*/
// }


/* ARITMÉTICA DE PONTEIROS */
// int main(){
//     int x;
//     int *p;
//     p = &x;

//     printf("%p\n", &x);
//     printf("%p\n", p);
//     p++;
//     printf("%p\n", p);
// }


/* COMPARAÇÃO DE PONTEIROS */
// int main(){
//     int x;
//     int *p1, *p2;
//     p1 = &x;
//     p2 = p1;

//     printf("%p\t%p\t%d\n", p1, p2, p1==p2);
// }




/* PONTEIROS E MATRÍZES*/

int main(){
    char str[80], *p;
    p = str; // Recebe o 1ª elemento da matriz
    scanf("%s", str);
    
    printf("%c %c\n", str[4], *(p+4)); // imprimme o 5ª elemento da matriz
}