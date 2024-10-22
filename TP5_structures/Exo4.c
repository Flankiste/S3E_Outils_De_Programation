#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

struct temps
{
    int heures;
    int minutes;
    double secondes;
};

struct date
{
    int jour;
    char mois[50];
    int annee;
};

struct points
{
    float A[3];
    float B[3];
};

/*Exercice 3 :
Ecrire un programme C qui définit une structure etudiant où un étudiant est représenté
par  son  nom,  son  prénom  et  une  note.  */

struct etudiant
{
    char nomComplet[50];
    float note;
};

int main()
{

    /*Initialisation sélective (l'ordre de def n'a plus d'importance)
    struct temps t = { .secondes = 30.560, .minutes =  45, .heures = 1 };
    struct date d = { d.jour = 11, .mois = "Novembre", .annee = 2021 }; */

    struct etudiant e[3];
    int i = 0;

    while (i <= 3)
    {
        printf("Nom Prenom : \n");
        fgets(e[i].nomComplet, sizeof(e[i].nomComplet), stdin); // stdin pour indiquer que le flux vient de l'utilisateur
        printf("Note : \n");
        scanf("%f", &e[i].note);
        i++;
    }
    for (i = 0; i < 3; i++)
    {
        if (e[i].note < 10)
        {
            e[i].note = e[i].note + 1;
        }
        else if (10 <= e[i].note <= 15)
        {
            e[i].note = e[i].note + 0.5;
        }
    }

    /*for (i = 0; i < 3; i++) {
        if (e[i].note >= 10) {
            printf ("Nom : %s %s, Note : %d\n", e[i].nom, e[i].prenom, e[i].note);
        }
    }*/

    struct points p = {.A = {5.8, 2.8, 18.4}, .B = {41.3, 2, 5.1}};
    float norme = sqrt(pow(p.A[0] - p.B[0], 2) + pow(p.A[1] - p.B[1], 2) + pow(p.A[2] - p.B[2], 2));
    printf("Norme de AB = %.2f", norme);

    return 0;
}