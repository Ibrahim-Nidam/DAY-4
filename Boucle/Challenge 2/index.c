#include <stdio.h>

int main(){
    int lignes;

    do {
        printf("Entrez le nombre des lignes dans le pyramid : ");
        scanf(" %d",&lignes);
    }while(lignes <= 0);

    for(int i = 1; i <= lignes; i++){
        for(int j = i ; j <= lignes ; j++){
            printf("  ");
        }

        for(int j = 1; j <= (2 * i - 1); j++){
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}