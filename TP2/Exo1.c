/* Écrire une fonction distance ayant comme paramètres
4 doubles 𝑥𝑎, 𝑦𝑎,𝑥𝑏 et 𝑦𝑏 qui représentent les coordonnées
de deux points A et B et qui renvoie la distance AB. 
Tester cette fonction.*/

#include <stdio.h>
#include <math.h>

double distance(double xa, double ya, double xb, double yb)
{
    return sqrt(pow(xb - xa, 2) + pow(yb - ya, 2));
}    

int main()  {

    double xa, ya, xb, yb;

    printf("Saisir les coordonnées des points A et B : \n");
    scanf("%d%d%d%d", &xa, &ya, &xb, &yb);
    printf("la distance entre les deux points est : %d", distance(xa, ya, xb, yb));
    return 0;
}