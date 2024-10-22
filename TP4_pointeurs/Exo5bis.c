#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int comparerChaine(char *chaineA, char *chaineB) {
    int i = 0;
    while (chaineA[i] != '\0' && chaineB[i] != '\0'){
        if (chaineA[i] > chaineB[i]) {
            return 1;
        }
        else if (chaineA[i] < chaineB[i]) {
            return -1;
        }
        else if (chaineA[i] == chaineB[i]) {
            return 0;
        }
        else if (chaineA[i] == '\0' && chaineB[i] == '\0') {
            return 0;
        }
        i++;
    }
}

int main() {
    char chaine[8] = "bonjour" ; 
    // char chaine[8] = {'b', 'o', 'n', 'j', 'o', 'u', 'r', '\0'}
    printf("%s\n", chaine) ;
    char *ch; 
    ch = (char *)malloc(8 * sizeof(char));
    fgets(ch, sizeof(ch)/sizeof(ch[0]), stdin);
    printf("%s\n", ch) ; 
    comparerChaine(chaine, ch);
}