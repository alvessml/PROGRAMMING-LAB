#include <stdio.h>


int main(){
    int i = 59876;
    int seg = (i / 100) % 10;
    printf("%d", seg);

    return 0;
}