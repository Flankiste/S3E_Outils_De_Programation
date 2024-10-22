#include <stdlib.h>
#include <stdio.h>

main(){
    int x = 1;
    switch(x){
        case 1:
            printf("1\n");
            break;
        case 2:
            printf("2\n");
            break;
        default:                // Si on ne rentre dans aucun des cases
            printf("default\n");
    }
}