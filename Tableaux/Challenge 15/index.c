#include <stdio.h>

int main (){
    int nomTab,nomTab1;

    do{
        printf("Entrez le Nombre de casses du tableaux 1 : ");
        scanf(" %d",&nomTab);
    }while (nomTab <= 0);


    do{
        printf("Entrez le Nombre de casses du tableaux 2 : ");
        scanf(" %d",&nomTab1);
    }while (nomTab1 <= 0);

    int nomb[nomTab];
    int nombCpy[nomTab1];
    int size = sizeof(nomb)/sizeof(nomb[0]);
    int sizeCpy = sizeof(nombCpy)/sizeof(nombCpy[0]);
    int sizeT = size + sizeCpy;
    int newT[sizeT];


    for (int i = 0; i < size ;i++ ){
        printf("Entrez une Nombre dans le tableaux 1 : ");
        scanf(" %d",&nomb[i]);
    }   

    printf("\n");

    for (int i = 0; i < sizeCpy ;i++ ){
        printf("Entrez une Nombre dans le tableaux 2 : ");
        scanf(" %d",&nombCpy[i]);
    }  

    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d", nomb[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    printf("[");
    for (int i = 0; i < sizeCpy; i++) {
        printf("%d", nombCpy[i]);
        if (i < sizeCpy - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    printf("\n");

    for(int i = 0; i < size; i++){

        newT[i] = nomb[i];
    }
    for (int i = 0; i < sizeCpy; i++){
        newT[size + i] = nombCpy[i];
    }
    
    printf("[");
    for (int i = 0; i < sizeT; i++) {
        printf("%d", newT[i]);
        if (i < sizeT - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    return 0;
}