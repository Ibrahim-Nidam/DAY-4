#include <stdio.h>

int main (){
    int nomTab;

    do{
        printf("Entrez le Nombre de casse du tableaux : ");
        scanf(" %d",&nomTab);
    }while (nomTab <= 0);

    int nomb[nomTab];
    int nombCpy[nomTab];
    int size = sizeof(nomb)/sizeof(nomb[0]);

    for (int i = 0; i < size ;i++ ){
        printf("Entrez une Nombre : ");
        scanf(" %d",&nomb[i]);
    }   

    for (int i = 0; i < size ; i++){
        nombCpy[i] = nomb[i];
    //    printf( "Nombre [%d] = %d\nCopy - Nombre [%d] = %d\n",i,nomb[i],i,nombCpy[i]);
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
    for (int i = 0; i < size; i++) {
        printf("%d", nombCpy[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf("]\n");
    return 0;
}