#include <stdio.h>

int main(){

    for(int z = 0; z < 9; z++){
        for(int y = 0; y < 3; y+=3){
            for(int x = 0; x < 3; x++){
            printf("%d - %d\n", x, x+z);
            }
        }
    }        
    

    return 0;
}