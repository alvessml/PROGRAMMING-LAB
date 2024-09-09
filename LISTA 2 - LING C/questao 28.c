#include <stdio.h>


int main(){
    unsigned char x, y;
    printf("Digite o valor de X: ");
    scanf("%hhu", &x);

    printf("Digite o valor de Y (deve ser >= 5): ");
    scanf("%hhu", &y);

    if(y < 5){
        printf("Digite um número maior ou igual a 5!.\n");
        return 0;
    } else{
        for(int i = -4; i <= 4; i++){
            if(i == 0){
                continue;
            }

            unsigned char *ptr = &y + i;

            *ptr = (*ptr & 0xFE) | (x & 0x01);

            x >>= 1;

            printf("%p: %hhu\t", ptr, *(ptr));
        }
    }
    return 0;
}