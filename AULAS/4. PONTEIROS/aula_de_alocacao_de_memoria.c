/*
stack over flow - estouro de pilha

alocação dinamica - variável/dados obtido em tempo real, ele solicita ao SO uma parte da memória.
alocação estática - varável/dados declarado antes./


-=-=-=Alocação dinâmica-=-=-=-

Funções mais comuns de alocação dinâmica: malloc() e free().

malloc - ela recebe uma quantidade de bytes e retorna um ponteiro (endereço do primeiro elemento) void.
ex: 
int *p;
int k;
scanf("%d", & k);
                vai reservar um espaço na memória com quantidades de inteiros, independente da plataforma.
p = malloc(k * sizeof(int));
(inteiro possui 4 bytes, aqui ele pede 2 inteiros, ou seja, retorna 8 bytes.)

free - ele faz o contrário do malloc, em vez de alocar ele vai liberar da mémoria.

*/