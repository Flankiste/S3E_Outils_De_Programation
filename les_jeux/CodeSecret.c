#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int verifier(const char *codeSecret, const char *code)
{
    int corrects = 0;
    for (int i = 0; i < 5; i++)
    {
        if (code[i] == codeSecret[i])
        {
            corrects++;

        }
    }
    return corrects;
}

int main()
{
    const char codeSecret[5] = "1234"; // 5 car il y a un \0 invisible
    char code[5];
    int tentative = 5;
    while (tentative > 0 && strcmp(code, codeSecret) != 0)
    {
        printf("Entrez un code de 4 chiffres\n");
        scanf("%s", code);

        if (strcmp(code, codeSecret) == 0)
            printf("Bienvenue");
        else
        {
            printf("Code incorect\n");
            tentative--;
        }
    }
    return 0;
}
