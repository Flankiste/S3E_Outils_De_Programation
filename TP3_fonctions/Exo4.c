/*Echange de deux valeurs : Ecrire une fonction Echange
qui réalise l’échange de deux valeurs entières passées 
en argument. Quel problème constatez-vous? 
Comment peut-on résoudre ce problème?*/

#include <stdio.h>
#include <stdlib.h>

void Echange(int *a, int *b) {
    int temp = *a;  // On utilise une variable temporaire pour stocker le pointeur vers a
    *a = *b;
    *b = temp;  // Pas besoin de retour car on a modifié les pointeurs
}

int main() {
    int a = 2;
    int b = 4;
    printf("a = %d, b = %d\n", a, b);
    Echange(&a, &b);   // On envoit les adresses de a et b pas les valeurs
    printf("Après l'échange : a = %d, b = %d", a, b);
    return 0;
}