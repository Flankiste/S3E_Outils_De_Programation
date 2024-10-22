#include <stdio.h>
#include <stdlib.h>


int main(){
    float A[] = {12598.74569455485845, 23, 34, 45, 56, 67, 78, 89, 90};
    float *P;
    P = A;

    for (int i = 0; i < sizeof(A)/sizeof(A[0]) ; i++){
        printf("L'adresse de A[%d] = %p\n", i, &A[i]);
        printf("A[%d] = %f\n", i, A[i]);
    }


    //printf("*P+2 = 14\n");
    //printf("*(P+2) = 34\n");
    //printf("&P+1 Adresse mémoire après l'adresse de 12\n");
    //printf("&A[4]-3 = 3 adresse avant l'adresse de \n");
    //printf("A+3 = ???\n");


    
    return 0;

}