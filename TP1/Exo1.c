#include <stdio.h>
int age;
int main() {
    printf ("Bonjour, Quel âge avez vous ?\n");
    scanf("%d", &age);
    printf ("Vous avez %d ans\n", age);
    return 0;
}