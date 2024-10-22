/*Écrire une fonction qui renvoie 1 si un nombre entier
passé en paramètre est impair, 0 sinon. 
Son prototype est donc : int estImpair(int nb);*/

#include <stdio.h>
#include <math.h>

int estImpair(int nb){

    if(nb % 2 == 0){
        return 0;
    };
    return 1;
}

int main() {   
    int nombre = 0;
    printf("Saisir un nombre entier : ");
    scanf("%d", &nombre);

    if (estImpair(nombre) == 1){
        printf("Le nombre %d est impair.", nombre);
    } else {
        printf("Le nombre %d est pair.", nombre);
    };
    return 0;

}