#include <stdio.h>


void somar(int *r){
    *r = *r + 100;
}

int main(){
    int m = 3;
    somar(&m);

    printf("%d", m);

    return 0;
}
