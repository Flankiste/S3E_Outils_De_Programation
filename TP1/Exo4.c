#include <stdio.h>

int x;
int n;
int result=1;

int puissance(){
    printf("Saisir x\n");
    scanf("%d",&x);
    printf("Saisir n\n");
    scaf("%d",&n);

    for (int i=0; i<n; i++){
        result*=x;
    }
    printf (" %d puissance %d fait %d \n", x,n, result);

}