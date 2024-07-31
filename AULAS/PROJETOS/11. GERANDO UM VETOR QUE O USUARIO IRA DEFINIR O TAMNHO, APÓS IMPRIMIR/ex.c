#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MX 10;

int main(){
    int *p = NULL;
    int k;

    scanf("%d", & k);

    p = malloc(k * sizeof(int));

    srand(time(NULL));
    for(int i=0; i < k; i++){
        p[i] = rand() % MX;
    }

    for(int i=0; i < k; i++){
        printf("%d", *p[i]);
    }

    free(p);
    return 0;
}