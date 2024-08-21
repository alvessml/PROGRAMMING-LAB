#include <stdio.h>


int main(int argc, char *argv[]){
    for(int k=0; k < argc; k++){
        printf("%s\n", argv[k]);
    }
    return 0;
}