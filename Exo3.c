#include <stdio.h>

int a;
int b;

int main(){

    printf("Saisir a\n");
    scanf("%d",&a);
    printf("Saisir b\n");
    scanf("%d",&b);
    if (a>b){
    printf("a est le plus grand\n");
    }
    if (a<b){
    printf("b est le plus grand\n");
    }
    else{
        printf("Les 2 valeurs sont égales");
    }
    return 0;
}