#include <stdio.h>

int main (){
    int nomTab,rech,n;

    do{
        printf("Entrez le Nombre de casses du tableaux : ");
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
        if (nomb[i]%2 != 0){

            printf("%d", nomb[i]);
        }else {
            printf(" -- ");
        }
            if (i < size - 1) {
                printf(" , ");
            }
    }
    printf("]\n");

    return 0;
}