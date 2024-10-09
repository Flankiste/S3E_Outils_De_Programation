#include <stdio.h>

int U0 = 1;
int V0 = 0;
int n;


int main(){

    int n;
    int Un = 1, Vn = 0;
    int prev_U, prev_V;
 
    printf("Entrez la valeur de n : ");
    scanf("%d", &n);
 
    for (int i = 1; i <= n; i++) {
        prev_U = Un;
        prev_V = Vn;
 
        Vn = 2 * prev_U; // Vn = 2 * Un-1
        Un = prev_V + 1; // Un = Vn-1 + 1
    }
 
    printf("Le terme U%d est : %d\n", n, Un);
    printf("Le terme V%d est : %d\n", n, Vn);
 
    return 0;

}