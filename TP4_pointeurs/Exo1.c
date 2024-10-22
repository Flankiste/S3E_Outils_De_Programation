/*En utilisant les pointeurs, définir une fonction « inverser » qui permet d’inverser le contenu de deux variables de type int.*/

#include <stdio.h>
#include <stdlib.h>

void inverser(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}  

int main()
{
    int a = 5, b = 10;
    inverser(&a, &b);
    printf("a = %d, b = %d\n", a, b);
    return 0;
}