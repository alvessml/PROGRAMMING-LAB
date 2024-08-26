#include <stdio.h>

void imprimirNumero(int);

int main(){
    void (*pFunc)(int);
    int n;

    puts("Digite um número: ");
    scanf("%d", &n);

    pFunc = &imprimirNumero;

    (*pFunc)(n);
    // imprimirNumero(n);

    return 0;
}

void imprimirNumero(int x){
    printf("%d\n", x);
}