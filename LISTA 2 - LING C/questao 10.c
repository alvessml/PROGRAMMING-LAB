#include <stdio.h>

int main(){
    int i = 15, f = 90, x;

    for(x = i; x <= f; x++){
        if(x % 4 == 0) {
            printf("%d^2 = %d \n", x, x * x);
        }
    }
    
    return 0;
}