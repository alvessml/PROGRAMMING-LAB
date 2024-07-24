#include <stdio.h>


int main(){
    int r, x, y;

    int *px = NULL;
    int *py = NULL;
    int *pr = NULL;

    pr = &r;
    px = &x;
    py = &y;
    
    printf("Digite um número: ");
    scanf("%d", px);

    printf("Digite outro número: ");
    scanf("%d", py);

    *pr = *px + *py;

    printf("[%p] %d + [%p] %d = [%p] %d \n\n", *px, &px, *py, &py, *pr, &pr);
    return 0;
}