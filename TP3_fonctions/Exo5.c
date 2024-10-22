/*Les fonctions récursives : 
a. Ecrire la fonction qui calcule la somme des n premiers carrés. 
Exemple : si n = 3 ; la fonction calculera 1²+2²+3². 
b. Ecrire la fonction qui permet de calculer, la multiplication de
deux entiers par additions successives. 
c. Ecrire la fonction qui permet de dire si un entier est pair ou impair,
en supposant que les seules opérations possibles sont : la comparaison 
avec 0 et la comparaison avec 1.*/

#include <stdio.h>
#include <stdlib.h>

// a. fonction qui calcule la somme des n premiers carrés
int sommecarre(n){
    if(n == 0){
        return 0;
    }
    return n * n + sommecarre(n - 1);
}

// b. fonction qui calcule la multiplication de deux entiers par additions successives
int multiplication(int a, int b){
    if(b == 0){
        return 0;
    }
    return a + multiplication(a, b - 1);
}

// c. fonction qui permet de dire si un entier est pair ou impair 
int estImpair(int nb){
    if(nb % 2 == 0){
        return 0;
    }
    return 1;
}

