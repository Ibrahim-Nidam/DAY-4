#include <stdio.h>

int main (){
    int nomTab,valRem,nouVal,n;

    do{
        printf("Entrez le Nombre de casse du tableaux : ");
        scanf(" %d",&nomTab);
    }while (nomTab <= 0);

    int nomb[nomTab];
    int size = sizeof(nomb)/sizeof(nomb[0]);

    for (int i = 0; i < size ;i++ ){
        printf("Entrez une Nombre : ");
        scanf(" %d",&nomb[i]);
    }   

    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d", nomb[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    printf("Entrez le nombre que vous voulez remplacer : ");
    scanf(" %d",&valRem);
    printf("Entrez la nouvelle nombre a prendre sa place: ");
    scanf(" %d",&nouVal);

    for (int i = 0; i < size ;i++ ){
        if(nomb[i] == valRem){
            nomb[i] = nouVal;
            n = 1;
        }
    }   

    if(n == 1){
        printf("[");
        for (int i = 0; i < size; i++) {
            printf("%d", nomb[i]);
            if (i < size - 1) {
                printf(", ");
            }
        }
        printf("]\n");
    }else{

        printf("Le nombre recherché n'est pas présent.\n");

    }
    
    return 0;
}