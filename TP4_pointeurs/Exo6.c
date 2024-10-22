#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char suppChaine(char *chaineA, char *chaineB){

    
    char *p = strstr(*chaineA,*chaineB);	// renvoie un pointeur vers la première occurrence de la chaîne chaineB dans la chaîne chaineA
    if (p != NULL) {
        int longeurChaineB = strlen(chaineB);	// renvoie la longueur de chaineB
        
        int a = strlen(chaineB);	// renvoie la longueur d'une chaîne
        char *strcpy(char *p, const char *chainB);
    }

/*     else {
        for (int i = 0; i < a-1 ; i++ );
    } */
}
//char *strcpy(char *toHere, const char *fromHere);
// copie une chaîne de caractères d'une zone à une autre

int main(){

    char chaineA[] = "bonjour je m'appele raphael et je suis étudiant" ;
    char chaineB[] = "je"

}