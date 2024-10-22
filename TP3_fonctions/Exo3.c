/*Ecrire une fonction void tableMultiplication() qui 
demande "Quelle table de multiplication voulez-vous, 
tapez 0 (zéro) pour sortir ?". Si le caractère saisi 
est compris entre '1' et '9' alors on fera afficher 
la table correspondante puis on réitérera le processus, 
sinon on affichera "ce n'est pas dans les possibilités 
du programme, recommencez !" et on réitérera le processus.*/

#include <stdio.h>
#include <stdlib.h>

void tableMultiplication() {
    int i = 0;
    int j = 0;
    int table = 0;
    int nb = 0;
    int ok = 0;

    printf("Quelle table de multiplication voulez-vous (0 pour quitter) ?\n");
    scanf("%d", &table);

    if (table == 0) {
        return;
    }
    if (table < 0 || table > 9) {
        printf("ce n'est pas dans les possibilités du programme, recommencez !\n");
        return;
    }
    for (i = 0; i <= 10; i++) {
        nb = i * table;
        printf("%d x %d = %d\n", i, table, nb);
    }

}

int main() {
    tableMultiplication();
    return 0;
}