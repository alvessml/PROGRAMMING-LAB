#include <stdio.h>

void esconderBit(unsigned char, unsigned char);

int main() {
    unsigned char x, y;
    printf("Digite o valor de X: ");
    scanf("%hhu", &x);

    printf("Digite o valor de Y (deve ser >= 5): ");
    scanf("%hhu", &y);

    esconderBit(x, y);

    return 0;
}


void esconderBit(unsigned char a, unsigned char b){
    if(b < 5){
        printf("Erro. Digite um número y >= 5.\n");
        return 0;
    }

    for(int i = -4; i <= 4; i++){
        if(i == 0){
            continue;   
        }

        unsigned char *py = &b + i;

        *py = (*py & 0xFE) | 
    }
}