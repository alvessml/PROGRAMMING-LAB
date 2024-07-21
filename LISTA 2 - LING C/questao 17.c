#include <stdio.h>

int main(){
    float fahrenheit;
    for(int celsius = 10; celsius <= 100; celsius += 10){
        fahrenheit = celsius * 1.8 + 32;
        printf("%d°C equivale a %.2f\n", celsius, fahrenheit);
    }

    return 0;
}