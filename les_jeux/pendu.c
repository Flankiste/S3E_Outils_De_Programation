#include <stdio.h>
#include <stdlib.h>
#include <fileapi.h>

/*int creerMot (){
    printf("Entrez un mot de 5 lettres\n");
    for (int i = 0; i <= taille; i++)
    {
        scanf("%c", &mot_secret[i]);
        printf("_ ");
    }
    printf("\n");
}*/

char demandeLettre()
{
    char lettre;
    printf("Testez une lettre\n");
    scanf("%c", &lettre);
    return lettre;
}

int testLettre(char *mot, char lettre, int n, char *p)
{
    int lettresBonnes = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (lettre == mot[i])
        {
            p[i] = mot[i];
            printf("%c ", lettre);
            lettresBonnes++;
        }
        else
            printf("_ ");
    }
    if (lettresBonnes == 0)
    {
        return 0;
    }
    else
        return 1;
}

int main()
{
    int hp = 10;
    int score = 0;

    char *mot_secret;
    char *mot_secret[] = {"arbre"};
    char n = sizeof(mot_secret);

    // printf("%d\n", sizeof(mot_secret));
    char *progression;
    *progression = (char *)malloc(n * sizeof(char));
    char lettre = demandeLettre();

    /*printf("votre mot est ");
    for (int i = 0; i < taille; i++)
    {
        printf("%c ", mot_secret[i]);
    };
    printf("\n");*/

    while (hp > 0)
    {
        if (testLettre(*mot_secret, lettre, n, *progression) == 0)
        {
            hp = hp - 1; // Le joueur perd une vie
            printf("Le mot secret ne contient pas de %c \n Il ne te reste plus que %d vies.\n", lettre, hp);
        };

        if (score == 5)
        {
            printf("###########\n###GAGNÉ###\n###########\n");
        }
    }
    return 0;
}