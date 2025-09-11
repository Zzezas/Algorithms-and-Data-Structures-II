#include "header.h"

int contagem_regressiva(int n){
    if(n == 0){
        return 0;
    }
    else{
        //recursive step
        printf("%d\n", n);
        contagem_regressiva(n-1);
    }
}