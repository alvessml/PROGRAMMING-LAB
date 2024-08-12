#include <stdio.h>


int bin(int k){
    int bin[8] = {0};
    int x = 0;

    while(k > 0){
        bin[x] = k % 2;
        k = k / 2;
        x++;
    }

    for(int i = 7; i >= 0; i--){
        printf("%d", bin[i]);
    }
}

int main(){
    printf("Decimal\tBinário\t\tOctal\tHexadecimal\n");
    printf("-------\t-------\t\t-----\t-----------\n");
    for(int i = 0; i <= 256; i++){
        printf("%d\t", i); // Decimal
        bin(i);            // Binário
        printf("\t%o\t%x\n", i, i); // Octal e Hexadecimal
    }

    return 0;
}