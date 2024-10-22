/*a. Ecrire une fonction chargée de calculer le carré 
d’un nombre réel (sans saisie ni affichage) ? 
b. Utiliser cette fonction dans un programme test qui 
saisit un nombre, appelle la fonction pour l’élever au 
carré et affiche le résultat.
c. Modifier la fonction précédente et son programme test 
pour élever « x » à la puissance entière « y » ?*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// a. fonction qui calcule le carré d'un nombre réel
int puissance(int x, int y) {
    return pow(x,y) ;
}

int main() {
    int nb = 0;
    int puiss = 0;
    printf("Saisir un nombre : ");
    scanf("%d", &nb);
    printf("Saisir une puissance : ");
    scanf("%d", &puiss);
    int carré = puissance(nb, puiss);
    printf("Le carré de %d = %d", nb, carré);
    return 0;
}