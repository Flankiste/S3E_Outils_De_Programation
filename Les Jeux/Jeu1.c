#include <stdio.h>

/*int entrez_mot(char mot [], int taille)
{

    for (int i = 0; i < taille; i++)
    {
        scanf("%c", &mot[i]);
    }
    return mot[taille];
}

int print_mot(char mot [], int taille)
{
    int i;
    for (i = 0; i < taille; i++)
    {
        printf("%c ", mot[i]);
    }
    return 0;
    printf("\n");
}*/
int main()
{
    char mot[5];
    int taille = sizeof(mot);
    int hp = 10;

    printf("Entrez un mot de 5 lettres\n"); // mot[taille] = entrez_mot(mot[5], taille);
    for (int i = 0; i < taille; i++)
    {
        scanf("%c", &mot[i]);
    }
    
    printf("votre mot est "); // print_mot(mot[5], taille);
    for (int i = 0; i < taille; i++)
    {
        printf("%c ", mot[i]);
    }
    printf("\n");

    return 0;
}