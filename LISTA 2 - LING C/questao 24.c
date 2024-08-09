#include <stdio.h>


int main(){
    int cateto1, cateto2, hipotenusa;

    printf("Todas as triplas de Pitágoras não superiores a 500: \n");
    for(cateto1 = 1; cateto1 <= 500; cateto1++){
        for(cateto2 = cateto1; cateto2 <= 500; cateto2++){
            for(hipotenusa = cateto2; hipotenusa <= 500; hipotenusa++){
                if(cateto1 * cateto1 + cateto2 * cateto2 == hipotenusa * hipotenusa){
                    printf("[%d, %d, %d]\n", cateto1, cateto2, hipotenusa);
                }
            }
        }
    }

    return 0;
}