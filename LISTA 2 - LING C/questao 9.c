#include <stdio.h>


int main(){
    int x = 0, y = 1, z = 0;

    int i = 1;
    while (i < 20) {
        z = x + y;
        printf("%d ", z);

        x = y;
        y = z;

        i++;
    }
    
    return 0;
}