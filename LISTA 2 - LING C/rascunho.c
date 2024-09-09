#include <stdio.h>

void esconderBits(unsigned char X, unsigned char Y) {
    // Garantir que Y não seja menor que 5
    if (Y < 5) {
        printf("Erro: Y deve ser maior ou igual a 5.\n");
        return;
    }

    // Iterar sobre os 4 elementos anteriores e 4 posteriores a Y
    for (int i = -4; i <= 4; i++) {
        if (i == 0) continue; // Pula o próprio Y

        unsigned char *ptr = &Y + i;

        // Esconder os bits de X no bit menos significativo do elemento atual
        *ptr = (*ptr & 0xFE) | (X & 0x01); // Limpa o LSB e coloca o bit menos significativo de X

        // Shift para preparar o próximo bit de X
        X >>= 1;
    }
}

int main() {
    unsigned char X, Y;

    // Entrada dos valores de X e Y
    printf("Digite o valor de X: ");
    scanf("%hhu", &X);

    printf("Digite o valor de Y (deve ser >= 5): ");
    scanf("%hhu", &Y);

    // Chama a função para esconder os bits
    esconderBits(X, Y);

    return 0;
}
