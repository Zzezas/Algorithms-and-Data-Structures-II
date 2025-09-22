#include "header.h"

int primo(int num){

    if(num <= 1){
        return 0;
    }
    if(num == 2){
        return 1;
    }
    if(num % 2 == 0){
        return 0;
    }

    for(int i = 3; i * i <= num; i += 2){
        if(num % i == 0){
            return 0;
        }
    }
    return 1;
}