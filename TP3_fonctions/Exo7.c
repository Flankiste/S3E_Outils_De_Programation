/*
a. Dans un programme principal, déclarer un tableau de 10 entiers. 
b. Initialiser le tableau avec des valeurs aléatoires comprises entre 0 et 20. 
c. Implémenter et tester à chaque fois les fonctions suivantes : 
    o Fonction afficher qui permet d'afficher les éléments du tableau. 
    o Fonction calculerMoyenne qui permet de calculer la moyenne des éléments du tableau. 
    o Fonction trouverMin qui permet de trouver la valeur minimum du tableau. 
    o Fonction inverserTableau qui inverse les éléments du tableau (penser à une variante 
      qui n'utilise pas de tableau supplémentaire).
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void creerTableau(int tableau[], int taille) {
    for (int i = 0; i < taille; i++) {
        tableau[i] = rand() % 21;
        // printf("%d ", tableau[i]);
    }
    printf("\n");
}

void afficherTableau(int tableau[], int taille) {
    for (int i = 0; i < taille; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");
}

void calculerMoyenne(int tableau[], int taille) {
    int somme = 0;
    for (int i = 0; i < taille; i++) {
        somme += tableau[i];
    }
    printf("La moyenne est : %f\n", (float)somme / taille);
}

void trouverMin(int tableau[], int taille) {
    int min = tableau[0];
    for (int i = 1; i < taille; i++) {
        if (tableau[i] < min) {
            min = tableau[i];
        }
    }
    printf("La valeur minimum est : %d\n", min);
}

void inverserTableau(int tableau[], int taille) {
/*  l'algo inverse la première variable avec la dernière puis
    l'avant dernière avec la 2 et ainsi de suite */
    for (int i = 0; i < taille/2; i++) {        
        int temp = tableau[i];                  // Variable temporaire 
        tableau[i] = tableau[taille - i - 1]; 
        tableau[taille - i - 1] = temp;
    }
}

int main(){
    srand(time(NULL));
    int tableau[9];
    int taille = sizeof(tableau) / sizeof(tableau[0]);
    creerTableau(tableau, taille);
    afficherTableau(tableau, taille);
    calculerMoyenne(tableau, taille);
    trouverMin(tableau, taille);
    inverserTableau(tableau, taille);
    afficherTableau(tableau, taille);
    return 0;
}