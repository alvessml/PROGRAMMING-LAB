#include <stdio.h>


int main(){
    for(int k=1; k <= 10; k++){
        if(k % 2 != 0){
            int fat = 1;
            printf("Fatorial de %d: ", k);
            for(int i = k; i >= 1; i--){
                fat *= i;
                printf("%d ", i);
            }
            printf("= %d\n", fat);
        }   
    }

    return 0;
}