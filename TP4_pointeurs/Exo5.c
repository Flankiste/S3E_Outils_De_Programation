#include <stdlib.h>
#include <stdio.h>
#include <time.h>

// En utilisant les pointeurs, écrire Une fonction qui permet de remplir le tableau
void remplirT(int t[], int n) {
    for (int i = 0; i < n; i++) {
        t[i] = rand() % 100;
        //printf("%d ", t[i]);
    }
}

void afficherT(int t[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", t[i]);
    }
    printf("\n");
}

void inverserT(int tableau[], int taille) {
    for (int i = 0; i < taille/2; i++) {        
        int temp = tableau[i];                
        tableau[i] = tableau[taille - i - 1]; 
        tableau[taille - i - 1] = temp;
    }

}


int main(){
    srand(time(NULL));
    int n = 15;
    int *t;
    t =(int *)malloc(n*sizeof(int)); //premier argument pour caster(innitialliser le tab) 
    remplirT    (t, n);
    afficherT   (t, n);
    inverserT   (t, n);
    afficherT   (t, n);

}
