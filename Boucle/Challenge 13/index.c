#include <stdio.h>

int main() {
    int multi,somme;
    
    printf("Entrer un nombre a Multiplier : ");
    scanf(" %d",&multi);
    
    for (int i=0; i<=12; i++){
        int res = multi * i;
        somme += res;
        printf("- %d * %d = %d\n",multi,i,res);
    }
        printf("La somme des resultats est %d\n",somme);
    

    return 0;
}