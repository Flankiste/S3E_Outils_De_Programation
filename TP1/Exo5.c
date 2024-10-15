#include <stdio.h>

int x;
int n;
int result=0;
int i = 0;

int main(){

    printf("Saisir x\n");
    scanf("%d",&x);
    printf("Saisir n\n");
    scanf("%d",&n);

    while (i<n){
        result+=x;
        i++;
    }
    printf (" %d fois %d fond %d \n", x,n, result);
    return 0;
}