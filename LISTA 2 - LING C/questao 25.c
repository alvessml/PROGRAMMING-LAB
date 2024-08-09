// OBS: Não consegui fazer, essa é uma demostração do chatgpt


#include <stdio.h>

int main() {
    int n;
    double pi_aproximado = 0.0;

    printf("Termos\tValor aproximado de π\n");
    printf("---------------------------------\n");

    // Loop para calcular π para diferentes números de termos
    for (n = 1; n <= 100; n++) {
        // Calcular o termo n-ésimo
        double termo = ((n % 2 == 0) ? -1 : 1) * 1.0 / (2 * (n - 1) + 1);
        pi_aproximado += termo;
        // Multiplicar por 4 para obter a aproximação de π
        double pi_final = pi_aproximado * 4;

        // Imprimir o número de termos e o valor aproximado de π
        printf("%d\t%.15f\n", n, pi_final);
    }

    return 0;
}
