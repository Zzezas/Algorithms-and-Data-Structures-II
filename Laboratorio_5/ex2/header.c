#include "header.h"

int soma_de_numeros(int n){
    if(n == 1){
        return 1;
    }
    return n + soma_de_numeros(n - 1);
}