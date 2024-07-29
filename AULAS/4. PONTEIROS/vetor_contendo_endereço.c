#include <stdio.h>


int main(){
    int v[6];
    int *p[2];

    v[5] = 15;
    p[0] = &v[5]; // o p[0] vai receber o endereço do v[5]
    return 0;
}